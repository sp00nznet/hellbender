#!/usr/bin/env python3
"""
Generate the Fury3 import-bridge layer (Phase 4).

The lifted code reaches each Win32 import through its IAT slot VA. This emits a
C shim for every imported function and a {iat_va -> shim} bridge table the runtime
installs. Shims are stdcall-correct: each pops the right number of argument slots
(plus the dummy return address) so the simulated stack stays balanced even while a
shim is still a stub. Critical shims (render/audio/input/io) get real bodies over
time; everything else logs once and returns a benign default.

Output: src/runtime/imports_gen.c   (committed; regenerate via this script)
"""
import sys, os, json
sys.path.insert(0, os.path.join(os.path.dirname(__file__), '..', 'tools', 'tools', 'pe'))
from pe_analyze import analyze_pe, build_iat_map

# stdcall argument-slot counts for every import Fury3 uses (1 slot = 4 bytes).
ARGC = {
 # GDI32
 'DeleteObject':1,'StretchBlt':11,'SetStretchBltMode':2,'BitBlt':9,'SetDIBColorTable':4,
 'CreatePalette':1,'GetSystemPaletteEntries':4,'CreateDIBSection':6,'SelectObject':2,
 'CreateCompatibleDC':1,'PatBlt':6,'DeleteDC':1,'DPtoLP':3,'GetObjectA':3,'SetMapMode':2,
 'GetMapMode':1,'RealizePalette':1,'SelectPalette':3,'GetDeviceCaps':2,'GetStockObject':1,
 # KERNEL32
 'lstrcpyA':2,'GlobalAlloc':2,'GlobalLock':1,'FindResourceA':3,'lstrlenA':1,'GlobalFree':1,
 'WritePrivateProfileStringA':4,'GetPrivateProfileStringA':6,'GetPrivateProfileIntA':4,
 'GetModuleHandleA':1,'GetCurrentDirectoryA':2,'GetModuleFileNameA':3,'SetCurrentDirectoryA':1,
 'GetVersion':0,'GlobalMemoryStatus':1,'LoadLibraryA':1,'GetProcAddress':2,'CreateThread':6,
 'SetThreadPriority':2,'GetCurrentProcess':0,'LoadModule':2,'FreeLibrary':1,'ExitProcess':1,
 'LoadResource':2,'LockResource':1,'MultiByteToWideChar':6,'GetFileType':1,'GetStdHandle':1,
 'VirtualAlloc':4,'VirtualFree':3,'ReadFile':5,'CloseHandle':1,'GetCommandLineA':0,
 'GetEnvironmentStrings':0,'GetStartupInfoA':1,'DeleteFileA':1,'GetLastError':0,'RtlUnwind':4,
 'WideCharToMultiByte':8,'WriteFile':5,'UnhandledExceptionFilter':1,'GetACP':0,'GetOEMCP':0,
 'GetCPInfo':2,'SetStdHandle':2,'FlushFileBuffers':1,'CreateFileA':7,'SetEndOfFile':1,
 'RaiseException':4,'SetFilePointer':4,'CreateDirectoryA':2,'FindClose':1,'FileTimeToSystemTime':2,
 'FileTimeToLocalFileTime':2,'GetDriveTypeA':1,'FindFirstFileA':2,'GetTimeZoneInformation':1,
 'GetFullPathNameA':4,'GetLogicalDrives':0,'Sleep':1,'SetEnvironmentVariableA':2,
 # USER32
 'GetDlgItemTextA':4,'SetRectEmpty':1,'UpdateWindow':1,'EnableMenuItem':3,'GetFocus':0,
 'GetParent':1,'ShowCursor':1,'SetCursorPos':2,'SetCursor':1,'GetDC':1,'SetTimer':4,'KillTimer':2,
 'MessageBoxA':4,'SendMessageA':4,'GetClientRect':2,'AdjustWindowRect':3,'SetFocus':1,
 'GetDesktopWindow':0,'GetWindowRect':2,'MoveWindow':6,'IsDialogMessageA':2,'PeekMessageA':5,
 'TranslateAcceleratorA':3,'TranslateMessage':1,'DispatchMessageA':1,'EnableWindow':2,'GetDlgItem':2,
 'SetDlgItemTextA':3,'DialogBoxParamA':5,'CheckDlgButton':3,'IsDlgButtonChecked':2,'WinHelpA':4,
 'EndDialog':2,'OffsetRect':3,'SetWindowPos':7,'PostMessageA':4,'DestroyWindow':1,'FindWindowA':2,
 'GetLastActivePopup':1,'BringWindowToTop':1,'IsIconic':1,'SetForegroundWindow':1,'LoadIconA':2,
 'RegisterClassA':1,'LoadCursorA':2,'LoadMenuA':2,'LoadAcceleratorsA':2,'GetWindowLongA':2,
 'GetSystemMetrics':1,'PostQuitMessage':1,'InvalidateRect':3,'DefWindowProcA':4,'CreateWindowExA':12,
 'BeginPaint':2,'LoadBitmapA':2,'EndPaint':2,'ReleaseDC':2,'ShowWindow':2,'CopyRect':2,'CheckMenuItem':3,
 # WINMM
 'waveOutOpen':7,'mciGetErrorStringA':3,'mciSendStringA':4,'joyGetNumDevs':0,'waveOutReset':1,
 'waveOutUnprepareHeader':3,'waveOutWrite':3,'waveOutGetNumDevs':0,'waveOutGetDevCapsA':3,
 'waveOutClose':1,'waveOutPrepareHeader':3,'timeGetTime':0,'timeEndPeriod':1,'timeBeginPeriod':1,
 'joyGetPos':2,'joyGetDevCapsA':3,
 # comdlg32
 'GetSaveFileNameA':1,'CommDlgExtendedError':0,'GetOpenFileNameA':1,

 # ===== Hellbender additions (MFC + full Win32 surface) =====
 # --- GDI32 ---
 'TextOutA':5,'LineTo':3,'MoveToEx':4,'ArcTo':9,'PolyBezierTo':3,'PolylineTo':3,'PolyDraw':4,
 'Rectangle':5,'ExtTextOutA':8,'MaskBlt':12,
 'CombineRgn':4,'CreateRectRgn':4,'CreateRectRgnIndirect':1,'SetRectRgn':5,'ExtSelectClipRgn':3,
 'SelectClipRgn':2,'SelectClipPath':2,'ExcludeClipRect':5,'IntersectClipRect':5,'OffsetClipRgn':3,
 'GetClipBox':2,'GetClipRgn':2,'PtVisible':3,'RectVisible':2,
 'CreateBitmap':5,'CreateBrushIndirect':1,'CreateDIBPatternBrushPt':2,'CreateHatchBrush':2,
 'CreatePatternBrush':1,'CreateSolidBrush':1,'CreatePen':3,'ExtCreatePen':5,'CreateFontA':14,
 'CreateFontIndirectA':1,'CreateDCA':4,
 'GetBkColor':1,'SetBkColor':2,'GetBkMode':1,'SetBkMode':2,'GetTextColor':1,'SetTextColor':2,
 'GetTextAlign':1,'SetTextAlign':2,'SetTextCharacterExtra':2,'SetTextJustification':3,
 'GetTextFaceA':3,'GetTextMetricsA':2,'GetTextExtentPointA':4,'GetCharWidthA':4,
 'GetROP2':1,'SetROP2':2,'GetPolyFillMode':1,'SetPolyFillMode':2,'SetArcDirection':2,
 'GetStretchBltMode':1,'GetNearestColor':2,'GetObjectType':1,'GetDIBColorTable':4,
 'GetPaletteEntries':4,'SetPaletteEntries':4,'ResizePalette':2,'SetSystemPaletteUse':2,
 'SetMapperFlags':2,'SetColorAdjustment':2,'SaveDC':1,'RestoreDC':2,
 'GetCurrentPositionEx':2,'LPtoDP':3,'GetViewportExtEx':2,'SetViewportExtEx':4,
 'GetViewportOrgEx':2,'SetViewportOrgEx':4,'GetWindowExtEx':2,'SetWindowExtEx':4,
 'GetWindowOrgEx':2,'SetWindowOrgEx':4,'OffsetViewportOrgEx':4,'OffsetWindowOrgEx':4,
 'ScaleViewportExtEx':6,'ScaleWindowExtEx':6,
 'Escape':5,'AbortDoc':1,'StartDocA':2,'StartPage':1,'EndPage':1,'EndDoc':1,'SetAbortProc':2,
 'EnumMetaFile':4,'PlayMetaFile':2,'PlayMetaFileRecord':4,
 # --- USER32 ---
 'AdjustWindowRectEx':4,'SystemParametersInfoA':4,'TrackPopupMenu':7,
 'AppendMenuA':4,'InsertMenuA':5,'ModifyMenuA':5,'DeleteMenu':3,'DestroyMenu':1,'DrawMenuBar':1,
 'GetMenu':1,'SetMenu':2,'GetSubMenu':2,'GetMenuItemCount':1,'GetMenuItemID':2,'GetMenuState':3,
 'GetMenuStringA':5,'GetSystemMenu':2,'GetMenuCheckMarkDimensions':0,'SetMenuItemBitmaps':5,
 'CheckRadioButton':4,
 'BeginDeferWindowPos':1,'DeferWindowPos':8,'EndDeferWindowPos':1,
 'CallWindowProcA':5,'DefFrameProcA':5,'DefMDIChildProcA':4,'TranslateMDISysAccel':2,
 'ClientToScreen':2,'ScreenToClient':2,'MapWindowPoints':4,'WindowFromPoint':2,  # POINT by value = 2 slots
 'GetActiveWindow':0,'SetActiveWindow':1,'GetForegroundWindow':0,'GetCapture':0,'SetCapture':1,
 'ReleaseCapture':0,'GetAsyncKeyState':1,'GetKeyState':1,'GetKeyNameTextA':3,
 'GetClassInfoA':3,'GetClassNameA':3,'UnregisterClassA':2,'GetCursorPos':1,
 'GetDCEx':3,'GetWindowDC':1,'GetDialogBaseUnits':0,'GetDlgCtrlID':1,'GetDlgItemInt':4,
 'SetDlgItemInt':4,'SendDlgItemMessageA':5,'GetNextDlgTabItem':3,'MapDialogRect':2,
 'CreateDialogIndirectParamA':5,'GetMessageA':4,'GetMessagePos':0,'GetMessageTime':0,'WaitMessage':0,
 'GetScrollInfo':3,'SetScrollInfo':4,'GetScrollPos':2,'SetScrollPos':4,'GetScrollRange':4,
 'SetScrollRange':5,'ShowScrollBar':3,'ScrollWindow':5,'ScrollWindowEx':8,
 'GetSysColor':1,'GetTopWindow':1,'GetWindow':2,'GetWindowPlacement':2,'SetWindowPlacement':2,
 'GetWindowTextA':3,'GetWindowTextLengthA':1,'SetWindowTextA':2,'GetWindowThreadProcessId':2,
 'GrayStringA':9,'DrawTextA':5,'TabbedTextOutA':8,'GetTabbedTextExtentA':5,
 'InflateRect':3,'IntersectRect':3,'EqualRect':2,'IsRectEmpty':1,'PtInRect':3,'SetRect':5,  # PtInRect: lprc + POINT(2)
 'InvertRect':2,'FillRect':3,'ValidateRect':2,'RedrawWindow':4,
 'IsChild':2,'IsWindow':1,'IsWindowEnabled':1,'IsWindowVisible':1,'LockWindowUpdate':1,'LoadStringA':4,
 'RegisterWindowMessageA':1,'GetPropA':2,'SetPropA':3,'RemovePropA':2,'SetParent':2,'ShowOwnedPopups':2,
 'SetWindowContextHelpId':2,'SetWindowLongA':3,'SetMessageQueue':1,
 'SetWindowsHookExA':4,'CallNextHookEx':4,'UnhookWindowsHookEx':1,
 'ReuseDDElParam':5,'UnpackDDElParam':4,
 'DestroyCursor':1,'DestroyIcon':1,
 'CharLowerA':1,'CharUpperA':1,'CharNextA':1,'CharPrevA':2,'CharToOemA':2,'OemToCharA':2,
 'wsprintfA':0,   # CDECL varargs -> caller cleans up; callee pops 0
 'wvsprintfA':3,  # __stdcall(LPSTR, LPCSTR, va_list) - 3 slots (unlike CDECL wsprintfA)
 # --- KERNEL32 ---
 'HeapAlloc':3,'HeapFree':3,'HeapReAlloc':4,'HeapSize':3,'HeapCreate':3,'HeapDestroy':1,
 'LocalAlloc':2,'LocalFree':1,'LocalReAlloc':3,
 'GlobalReAlloc':3,'GlobalUnlock':1,'GlobalFlags':1,'GlobalHandle':1,
 'GlobalAddAtomA':1,'GlobalDeleteAtom':1,'GlobalGetAtomNameA':3,
 'InitializeCriticalSection':1,'DeleteCriticalSection':1,'EnterCriticalSection':1,'LeaveCriticalSection':1,
 'InterlockedIncrement':1,'InterlockedDecrement':1,
 'TlsAlloc':0,'TlsFree':1,'TlsGetValue':1,'TlsSetValue':2,
 'CreateEventA':4,'CreateSemaphoreA':4,'SetEvent':1,'WaitForSingleObject':2,'DuplicateHandle':7,
 'ExitThread':1,'ResumeThread':1,'SuspendThread':1,'TerminateProcess':2,
 'GetCurrentThread':0,'GetCurrentThreadId':0,'GetProcessVersion':1,
 'GetFileAttributesA':1,'SetFileAttributesA':2,'GetFileSize':2,'GetFileTime':4,'SetFileTime':4,
 'MoveFileA':2,'GetShortPathNameA':3,'GetTempFileNameA':4,'LockFile':5,'UnlockFile':5,
 'GetDiskFreeSpaceA':5,'GetVolumeInformationA':8,
 'SystemTimeToFileTime':2,'LocalFileTimeToFileTime':2,'GetSystemTime':1,'GetLocalTime':1,
 'CompareStringA':6,'CompareStringW':6,'LCMapStringA':6,'LCMapStringW':6,
 'GetStringTypeA':5,'GetStringTypeExA':5,'GetStringTypeW':4,  # note A/W signatures differ (W=4)
 'GetLocaleInfoA':4,'GetLocaleInfoW':4,'IsValidLocale':2,'IsValidCodePage':1,
 'GetThreadLocale':0,'GetUserDefaultLCID':0,
 'FormatMessageA':7,'FreeEnvironmentStringsA':1,'FreeEnvironmentStringsW':1,'GetEnvironmentStringsW':0,
 'SetConsoleCtrlHandler':2,'SetErrorMode':1,'SetHandleCount':1,'SetLastError':1,
 'SetUnhandledExceptionFilter':1,'FatalAppExitA':2,
 'QueryPerformanceFrequency':1,'MulDiv':3,'SizeofResource':2,'VirtualProtect':4,
 'IsBadCodePtr':1,'IsBadReadPtr':2,'IsBadWritePtr':2,
 'lstrcatA':2,'lstrcmpA':2,'lstrcmpiA':2,'lstrcpynA':3,
 # --- ADVAPI32 (registry / security) ---
 'RegCloseKey':1,'RegCreateKeyA':3,'RegCreateKeyExA':9,'RegDeleteKeyA':2,'RegDeleteValueA':2,
 'RegEnumValueA':8,'RegOpenKeyA':3,'RegOpenKeyExA':5,'RegQueryValueA':4,'RegQueryValueExA':6,
 'RegSetValueA':5,'RegSetValueExA':6,'GetFileSecurityA':5,'SetFileSecurityA':3,
 # --- SHELL32 ---
 'DragAcceptFiles':2,'DragFinish':1,'DragQueryFileA':4,'ExtractIconA':3,'SHGetFileInfoA':5,'ShellExecuteA':6,
 # --- comdlg32 ---
 'GetFileTitleA':3,'PageSetupDlgA':1,'PrintDlgA':1,
 # --- WINMM ---
 'mciSendCommandA':4,
 # --- WINSPOOL (printing) ---
 'OpenPrinterA':3,'ClosePrinter':1,'DocumentPropertiesA':6,
 # --- DDRAW ---
 'DirectDrawCreate':3,'DirectDrawEnumerateA':2,
 # --- COMCTL32 (by name) ---
 'CreatePropertySheetPageA':1,'DestroyPropertySheetPage':1,'PropertySheetA':1,
 'ImageList_Create':5,'ImageList_Destroy':1,'ImageList_LoadImageA':7,'ImageList_Merge':6,
 'ImageList_Read':1,'ImageList_Write':2,
 # --- COMCTL32 (imported by ordinal) ---
 'ordinal_3':3,    # ShowHideMenuCtl(HWND, UINT_PTR, LPINT)
 'ordinal_7':8,    # CreateToolbar(hwnd,style,id,bitmaps,hbmInst,wBMID,lpButtons,iNumButtons)
 'ordinal_8':5,    # CreateMappedBitmap(hInstance,idBitmap,wFlags,lpColorMap,iNumMaps)
 'ordinal_9':4,    # DPA_LoadStream(ptr,ptr,ptr,ptr)
 'ordinal_10':4,   # DPA_SaveStream(ptr,ptr,ptr,ptr)
 'ordinal_13':1,   # MakeDragList(HWND)
 'ordinal_14':4,   # LBItemFromPt(HWND, POINT-by-value=2, BOOL)
 'ordinal_15':3,   # DrawInsert(HWND, HWND, int)
 'ordinal_17':0,   # InitCommonControls(void)
 'ordinal_1':0,    # unknown private comctl32 4.0 export - stub-only, verify
 'ordinal_21':0,   # unknown private comctl32 4.0 export - stub-only, verify
 'ordinal_22':0,   # unknown private comctl32 4.0 export - stub-only, verify
 'ordinal_28':0,   # unknown private comctl32 4.0 export - stub-only, verify
 'ordinal_32':0,   # unknown private comctl32 4.0 export - stub-only, verify
}

# Imports with hand-written bodies in src/runtime/shims_impl.c. The generator
# emits an `extern` declaration for these instead of a stub, so the bridge table
# points at the real implementation.
MANUAL = {
 'GetVersion','GetCommandLineA','GetModuleFileNameA','GetModuleHandleA','GetStartupInfoA',
 'GetStdHandle','GetFileType','GetACP','GetOEMCP','GetCPInfo','GetEnvironmentStrings',
 'VirtualAlloc','VirtualFree','GlobalAlloc','GlobalLock','GlobalFree','GlobalMemoryStatus',
 'LoadLibraryA','GetProcAddress','WriteFile','SetStdHandle','GetCurrentDirectoryA',
 'ExitProcess','MessageBoxA','timeGetTime','timeBeginPeriod','timeEndPeriod',
 'CreateFileA','ReadFile','SetFilePointer','CloseHandle','GetFileType',
 'GetPrivateProfileStringA','GetPrivateProfileIntA','WritePrivateProfileStringA',
 # display / render path
 'CreateWindowExA','GetDC','ReleaseDC','CreateDIBSection','SetDIBColorTable',
 'StretchBlt','BitBlt','PeekMessageA','GetMessageA','RegisterClassA','InvalidateRect','CreatePalette',
 # front-end input: accelerator keys (F2=New Game etc.) -> WM_COMMAND; modal info dialogs;
 # DispatchMessageA must reach the game's WndProc (some loops poll a WndProc-set flag)
 'TranslateAcceleratorA','LoadAcceleratorsA','DialogBoxParamA','DispatchMessageA',
 # joystick: pass through to the real WINMM joystick API so a physical stick /
 # gamepad works (flight controls). Hand-written in shims_impl.c.
 'joyGetNumDevs','joyGetPos','joyGetDevCapsA',
 # thread/priority: the game sanity-checks SetThreadPriority(GetCurrentProcess(),1)
 # EXPECTS failure; CreateThread must return a handle distinct from the process
 # pseudo-handle (1). Hand-written so a gen regen can't revert them to stubs.
 'CreateThread','SetThreadPriority',
}

# Shims that should return a non-zero "success/handle" default so early init code
# that checks the return value keeps going. (Stubs still — just friendlier defaults.)
NONZERO_DEFAULT = {
 'GetModuleHandleA','GetDC','CreateCompatibleDC','CreateDIBSection','CreatePalette','GetStockObject',
 'SelectObject','CreateWindowExA','LoadIconA','LoadCursorA','GlobalAlloc','GlobalLock',
 'GetCurrentProcess','GetStdHandle','BeginPaint','GetVersion','SelectPalette','LoadResource','LockResource',
 'FindResourceA','GetSystemMetrics','GetDesktopWindow',
 # report success so non-fatal startup steps don't abort
 'WritePrivateProfileStringA','LoadMenuA','SetTimer','LoadBitmapA',
 'CreateCompatibleBitmap','GetDC','RealizePalette','SetDIBColorTable','CreateThread',
 'SetThreadPriority','SetTimer','GetCurrentProcess',
}

def main():
    exe = sys.argv[1] if len(sys.argv) > 1 else os.path.join(os.path.dirname(__file__),'analysis','HELLBEND.EXE')
    out = sys.argv[2] if len(sys.argv) > 2 else os.path.join(os.path.dirname(__file__),'src','runtime','imports_gen.c')
    info = analyze_pe(exe)
    iat = build_iat_map(info)

    rows = sorted(iat.items())  # (va, (dll, name))
    missing = sorted({n for _,(_,n) in rows if n not in ARGC})
    if missing:
        print(f"WARNING: {len(missing)} imports without an ARGC entry (default 0): {missing}")

    L = []
    L.append('/* Fury3 Recompilation - import bridge layer - AUTO-GENERATED */')
    L.append('/* Regenerate: py -3 gen_imports.py */')
    L.append('#define RECOMP_GENERATED_CODE')
    L.append('#include "recomp_types.h"')
    L.append('#include "imports.h"')
    L.append('')
    L.append(f'/* {len(rows)} imports across {len({d for _,(d,_) in rows})} DLLs */')
    L.append('')
    seen = {}
    for va,(dll,name) in rows:
        argc = ARGC.get(name, 0)
        ret = 1 if name in NONZERO_DEFAULT else 0
        fn = f'imp_{name}'
        if name in seen:        # same name imported twice -> reuse shim
            continue
        seen[name] = fn
        if name in MANUAL:
            L.append(f'extern void {fn}(void);  /* {dll}!{name} - hand-written in shims_impl.c */')
            continue
        L.append(f'/* {dll}!{name}  ({argc} args) */')
        L.append(f'static void {fn}(void) {{ IMPORT_STUB("{name}"); RET({ret}); STDRET({argc}); }}')
    L.append('')
    L.append('const recomp_dispatch_entry_t fury3_import_bridges[] = {')
    for va,(dll,name) in rows:
        L.append(f'    {{ 0x{va:08X}u, {seen[name]} }},')
    L.append('};')
    L.append(f'const uint32_t fury3_import_bridge_count = {len(rows)};')
    L.append('')
    L.append('/* IAT slot VAs to self-patch so RECOMP_ITAIL(MEM32(slot)) resolves. */')
    L.append('const uint32_t fury3_iat_slots[] = {')
    for va,_ in rows:
        L.append(f'    0x{va:08X}u,')
    L.append('};')
    L.append(f'const uint32_t fury3_iat_slot_count = {len(rows)};')
    L.append('')

    os.makedirs(os.path.dirname(out), exist_ok=True)
    open(out,'w').write('\n'.join(L))
    print(f'Wrote {out}: {len(rows)} bridges ({len(seen)} unique shims)')

if __name__ == '__main__':
    main()
