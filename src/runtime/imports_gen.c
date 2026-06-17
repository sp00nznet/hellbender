/* Fury3 Recompilation - import bridge layer - AUTO-GENERATED */
/* Regenerate: py -3 gen_imports.py */
#define RECOMP_GENERATED_CODE
#include "recomp_types.h"
#include "imports.h"

/* 507 imports across 11 DLLs */

/* ADVAPI32.dll!RegCloseKey  (1 args) */
static void imp_RegCloseKey(void) { IMPORT_STUB("RegCloseKey"); RET(0); STDRET(1); }
/* ADVAPI32.dll!RegQueryValueExA  (6 args) */
static void imp_RegQueryValueExA(void) { IMPORT_STUB("RegQueryValueExA"); RET(0); STDRET(6); }
/* ADVAPI32.dll!RegSetValueA  (5 args) */
static void imp_RegSetValueA(void) { IMPORT_STUB("RegSetValueA"); RET(0); STDRET(5); }
/* ADVAPI32.dll!RegEnumValueA  (8 args) */
static void imp_RegEnumValueA(void) { IMPORT_STUB("RegEnumValueA"); RET(0); STDRET(8); }
/* ADVAPI32.dll!RegSetValueExA  (6 args) */
static void imp_RegSetValueExA(void) { IMPORT_STUB("RegSetValueExA"); RET(0); STDRET(6); }
/* ADVAPI32.dll!SetFileSecurityA  (3 args) */
static void imp_SetFileSecurityA(void) { IMPORT_STUB("SetFileSecurityA"); RET(0); STDRET(3); }
/* ADVAPI32.dll!GetFileSecurityA  (5 args) */
static void imp_GetFileSecurityA(void) { IMPORT_STUB("GetFileSecurityA"); RET(0); STDRET(5); }
/* ADVAPI32.dll!RegOpenKeyA  (3 args) */
static void imp_RegOpenKeyA(void) { IMPORT_STUB("RegOpenKeyA"); RET(0); STDRET(3); }
/* ADVAPI32.dll!RegQueryValueA  (4 args) */
static void imp_RegQueryValueA(void) { IMPORT_STUB("RegQueryValueA"); RET(0); STDRET(4); }
/* ADVAPI32.dll!RegDeleteKeyA  (2 args) */
static void imp_RegDeleteKeyA(void) { IMPORT_STUB("RegDeleteKeyA"); RET(0); STDRET(2); }
/* ADVAPI32.dll!RegDeleteValueA  (2 args) */
static void imp_RegDeleteValueA(void) { IMPORT_STUB("RegDeleteValueA"); RET(0); STDRET(2); }
/* ADVAPI32.dll!RegOpenKeyExA  (5 args) */
static void imp_RegOpenKeyExA(void) { IMPORT_STUB("RegOpenKeyExA"); RET(0); STDRET(5); }
/* ADVAPI32.dll!RegCreateKeyA  (3 args) */
static void imp_RegCreateKeyA(void) { IMPORT_STUB("RegCreateKeyA"); RET(0); STDRET(3); }
/* ADVAPI32.dll!RegCreateKeyExA  (9 args) */
static void imp_RegCreateKeyExA(void) { IMPORT_STUB("RegCreateKeyExA"); RET(0); STDRET(9); }
/* COMCTL32.dll!ImageList_Create  (5 args) */
static void imp_ImageList_Create(void) { IMPORT_STUB("ImageList_Create"); RET(0); STDRET(5); }
/* COMCTL32.dll!ImageList_Merge  (6 args) */
static void imp_ImageList_Merge(void) { IMPORT_STUB("ImageList_Merge"); RET(0); STDRET(6); }
/* COMCTL32.dll!ImageList_LoadImageA  (7 args) */
static void imp_ImageList_LoadImageA(void) { IMPORT_STUB("ImageList_LoadImageA"); RET(0); STDRET(7); }
/* COMCTL32.dll!DestroyPropertySheetPage  (1 args) */
static void imp_DestroyPropertySheetPage(void) { IMPORT_STUB("DestroyPropertySheetPage"); RET(0); STDRET(1); }
/* COMCTL32.dll!PropertySheetA  (1 args) */
static void imp_PropertySheetA(void) { IMPORT_STUB("PropertySheetA"); RET(0); STDRET(1); }
/* COMCTL32.dll!ordinal_17  (0 args) */
static void imp_ordinal_17(void) { IMPORT_STUB("ordinal_17"); RET(0); STDRET(0); }
/* COMCTL32.dll!ImageList_Read  (1 args) */
static void imp_ImageList_Read(void) { IMPORT_STUB("ImageList_Read"); RET(0); STDRET(1); }
/* COMCTL32.dll!ImageList_Write  (2 args) */
static void imp_ImageList_Write(void) { IMPORT_STUB("ImageList_Write"); RET(0); STDRET(2); }
/* COMCTL32.dll!ordinal_13  (1 args) */
static void imp_ordinal_13(void) { IMPORT_STUB("ordinal_13"); RET(0); STDRET(1); }
/* COMCTL32.dll!CreatePropertySheetPageA  (1 args) */
static void imp_CreatePropertySheetPageA(void) { IMPORT_STUB("CreatePropertySheetPageA"); RET(0); STDRET(1); }
/* COMCTL32.dll!ImageList_Destroy  (1 args) */
static void imp_ImageList_Destroy(void) { IMPORT_STUB("ImageList_Destroy"); RET(0); STDRET(1); }
/* COMCTL32.dll!ordinal_14  (4 args) */
static void imp_ordinal_14(void) { IMPORT_STUB("ordinal_14"); RET(0); STDRET(4); }
/* DDRAW.dll!DirectDrawEnumerateA  (2 args) */
static void imp_DirectDrawEnumerateA(void) { IMPORT_STUB("DirectDrawEnumerateA"); RET(0); STDRET(2); }
/* DDRAW.dll!DirectDrawCreate  (3 args) */
static void imp_DirectDrawCreate(void) { IMPORT_STUB("DirectDrawCreate"); RET(0); STDRET(3); }
/* GDI32.dll!CombineRgn  (4 args) */
static void imp_CombineRgn(void) { IMPORT_STUB("CombineRgn"); RET(0); STDRET(4); }
/* GDI32.dll!GetMapMode  (1 args) */
static void imp_GetMapMode(void) { IMPORT_STUB("GetMapMode"); RET(0); STDRET(1); }
/* GDI32.dll!SetRectRgn  (5 args) */
static void imp_SetRectRgn(void) { IMPORT_STUB("SetRectRgn"); RET(0); STDRET(5); }
/* GDI32.dll!GetDeviceCaps  (2 args) */
static void imp_GetDeviceCaps(void) { IMPORT_STUB("GetDeviceCaps"); RET(0); STDRET(2); }
extern void imp_BitBlt(void);  /* GDI32.dll!BitBlt - hand-written in shims_impl.c */
/* GDI32.dll!RealizePalette  (1 args) */
static void imp_RealizePalette(void) { IMPORT_STUB("RealizePalette"); RET(1); STDRET(1); }
/* GDI32.dll!SetStretchBltMode  (2 args) */
static void imp_SetStretchBltMode(void) { IMPORT_STUB("SetStretchBltMode"); RET(0); STDRET(2); }
/* GDI32.dll!DeleteObject  (1 args) */
static void imp_DeleteObject(void) { IMPORT_STUB("DeleteObject"); RET(0); STDRET(1); }
extern void imp_CreatePalette(void);  /* GDI32.dll!CreatePalette - hand-written in shims_impl.c */
/* GDI32.dll!PatBlt  (6 args) */
static void imp_PatBlt(void) { IMPORT_STUB("PatBlt"); RET(0); STDRET(6); }
/* GDI32.dll!SetPaletteEntries  (4 args) */
static void imp_SetPaletteEntries(void) { IMPORT_STUB("SetPaletteEntries"); RET(0); STDRET(4); }
/* GDI32.dll!ResizePalette  (2 args) */
static void imp_ResizePalette(void) { IMPORT_STUB("ResizePalette"); RET(0); STDRET(2); }
/* GDI32.dll!GetObjectA  (3 args) */
static void imp_GetObjectA(void) { IMPORT_STUB("GetObjectA"); RET(0); STDRET(3); }
/* GDI32.dll!SetSystemPaletteUse  (2 args) */
static void imp_SetSystemPaletteUse(void) { IMPORT_STUB("SetSystemPaletteUse"); RET(0); STDRET(2); }
/* GDI32.dll!GetPaletteEntries  (4 args) */
static void imp_GetPaletteEntries(void) { IMPORT_STUB("GetPaletteEntries"); RET(0); STDRET(4); }
/* GDI32.dll!SelectPalette  (3 args) */
static void imp_SelectPalette(void) { IMPORT_STUB("SelectPalette"); RET(1); STDRET(3); }
/* GDI32.dll!GetDIBColorTable  (4 args) */
static void imp_GetDIBColorTable(void) { IMPORT_STUB("GetDIBColorTable"); RET(0); STDRET(4); }
/* GDI32.dll!CreateCompatibleDC  (1 args) */
static void imp_CreateCompatibleDC(void) { IMPORT_STUB("CreateCompatibleDC"); RET(1); STDRET(1); }
extern void imp_SetDIBColorTable(void);  /* GDI32.dll!SetDIBColorTable - hand-written in shims_impl.c */
/* GDI32.dll!CreateFontA  (14 args) */
static void imp_CreateFontA(void) { IMPORT_STUB("CreateFontA"); RET(0); STDRET(14); }
/* GDI32.dll!Rectangle  (5 args) */
static void imp_Rectangle(void) { IMPORT_STUB("Rectangle"); RET(0); STDRET(5); }
extern void imp_CreateDIBSection(void);  /* GDI32.dll!CreateDIBSection - hand-written in shims_impl.c */
/* GDI32.dll!CreateBrushIndirect  (1 args) */
static void imp_CreateBrushIndirect(void) { IMPORT_STUB("CreateBrushIndirect"); RET(0); STDRET(1); }
/* GDI32.dll!MaskBlt  (12 args) */
static void imp_MaskBlt(void) { IMPORT_STUB("MaskBlt"); RET(0); STDRET(12); }
/* GDI32.dll!CreatePen  (3 args) */
static void imp_CreatePen(void) { IMPORT_STUB("CreatePen"); RET(0); STDRET(3); }
/* GDI32.dll!GetSystemPaletteEntries  (4 args) */
static void imp_GetSystemPaletteEntries(void) { IMPORT_STUB("GetSystemPaletteEntries"); RET(0); STDRET(4); }
/* GDI32.dll!DeleteDC  (1 args) */
static void imp_DeleteDC(void) { IMPORT_STUB("DeleteDC"); RET(0); STDRET(1); }
/* GDI32.dll!GetTextMetricsA  (2 args) */
static void imp_GetTextMetricsA(void) { IMPORT_STUB("GetTextMetricsA"); RET(0); STDRET(2); }
/* GDI32.dll!GetTextExtentPointA  (4 args) */
static void imp_GetTextExtentPointA(void) { IMPORT_STUB("GetTextExtentPointA"); RET(0); STDRET(4); }
/* GDI32.dll!SetTextColor  (2 args) */
static void imp_SetTextColor(void) { IMPORT_STUB("SetTextColor"); RET(0); STDRET(2); }
/* GDI32.dll!SetBkColor  (2 args) */
static void imp_SetBkColor(void) { IMPORT_STUB("SetBkColor"); RET(0); STDRET(2); }
/* GDI32.dll!GetStockObject  (1 args) */
static void imp_GetStockObject(void) { IMPORT_STUB("GetStockObject"); RET(1); STDRET(1); }
/* GDI32.dll!DPtoLP  (3 args) */
static void imp_DPtoLP(void) { IMPORT_STUB("DPtoLP"); RET(0); STDRET(3); }
/* GDI32.dll!GetViewportOrgEx  (2 args) */
static void imp_GetViewportOrgEx(void) { IMPORT_STUB("GetViewportOrgEx"); RET(0); STDRET(2); }
/* GDI32.dll!EndDoc  (1 args) */
static void imp_EndDoc(void) { IMPORT_STUB("EndDoc"); RET(0); STDRET(1); }
/* GDI32.dll!AbortDoc  (1 args) */
static void imp_AbortDoc(void) { IMPORT_STUB("AbortDoc"); RET(0); STDRET(1); }
/* GDI32.dll!StartPage  (1 args) */
static void imp_StartPage(void) { IMPORT_STUB("StartPage"); RET(0); STDRET(1); }
/* GDI32.dll!StartDocA  (2 args) */
static void imp_StartDocA(void) { IMPORT_STUB("StartDocA"); RET(0); STDRET(2); }
/* GDI32.dll!EndPage  (1 args) */
static void imp_EndPage(void) { IMPORT_STUB("EndPage"); RET(0); STDRET(1); }
/* GDI32.dll!CreateDCA  (4 args) */
static void imp_CreateDCA(void) { IMPORT_STUB("CreateDCA"); RET(0); STDRET(4); }
/* GDI32.dll!CreateBitmap  (5 args) */
static void imp_CreateBitmap(void) { IMPORT_STUB("CreateBitmap"); RET(0); STDRET(5); }
/* GDI32.dll!SetAbortProc  (2 args) */
static void imp_SetAbortProc(void) { IMPORT_STUB("SetAbortProc"); RET(0); STDRET(2); }
/* GDI32.dll!RestoreDC  (2 args) */
static void imp_RestoreDC(void) { IMPORT_STUB("RestoreDC"); RET(0); STDRET(2); }
/* GDI32.dll!SetBkMode  (2 args) */
static void imp_SetBkMode(void) { IMPORT_STUB("SetBkMode"); RET(0); STDRET(2); }
/* GDI32.dll!SaveDC  (1 args) */
static void imp_SaveDC(void) { IMPORT_STUB("SaveDC"); RET(0); STDRET(1); }
extern void imp_StretchBlt(void);  /* GDI32.dll!StretchBlt - hand-written in shims_impl.c */
/* GDI32.dll!SetROP2  (2 args) */
static void imp_SetROP2(void) { IMPORT_STUB("SetROP2"); RET(0); STDRET(2); }
/* GDI32.dll!SetMapMode  (2 args) */
static void imp_SetMapMode(void) { IMPORT_STUB("SetMapMode"); RET(0); STDRET(2); }
/* GDI32.dll!SetViewportOrgEx  (4 args) */
static void imp_SetViewportOrgEx(void) { IMPORT_STUB("SetViewportOrgEx"); RET(0); STDRET(4); }
/* GDI32.dll!OffsetViewportOrgEx  (4 args) */
static void imp_OffsetViewportOrgEx(void) { IMPORT_STUB("OffsetViewportOrgEx"); RET(0); STDRET(4); }
/* GDI32.dll!SetViewportExtEx  (4 args) */
static void imp_SetViewportExtEx(void) { IMPORT_STUB("SetViewportExtEx"); RET(0); STDRET(4); }
/* GDI32.dll!ScaleViewportExtEx  (6 args) */
static void imp_ScaleViewportExtEx(void) { IMPORT_STUB("ScaleViewportExtEx"); RET(0); STDRET(6); }
/* GDI32.dll!SetWindowOrgEx  (4 args) */
static void imp_SetWindowOrgEx(void) { IMPORT_STUB("SetWindowOrgEx"); RET(0); STDRET(4); }
/* GDI32.dll!OffsetWindowOrgEx  (4 args) */
static void imp_OffsetWindowOrgEx(void) { IMPORT_STUB("OffsetWindowOrgEx"); RET(0); STDRET(4); }
/* GDI32.dll!SetWindowExtEx  (4 args) */
static void imp_SetWindowExtEx(void) { IMPORT_STUB("SetWindowExtEx"); RET(0); STDRET(4); }
/* GDI32.dll!ScaleWindowExtEx  (6 args) */
static void imp_ScaleWindowExtEx(void) { IMPORT_STUB("ScaleWindowExtEx"); RET(0); STDRET(6); }
/* GDI32.dll!GetClipBox  (2 args) */
static void imp_GetClipBox(void) { IMPORT_STUB("GetClipBox"); RET(0); STDRET(2); }
/* GDI32.dll!SelectClipRgn  (2 args) */
static void imp_SelectClipRgn(void) { IMPORT_STUB("SelectClipRgn"); RET(0); STDRET(2); }
/* GDI32.dll!ExcludeClipRect  (5 args) */
static void imp_ExcludeClipRect(void) { IMPORT_STUB("ExcludeClipRect"); RET(0); STDRET(5); }
/* GDI32.dll!IntersectClipRect  (5 args) */
static void imp_IntersectClipRect(void) { IMPORT_STUB("IntersectClipRect"); RET(0); STDRET(5); }
/* GDI32.dll!OffsetClipRgn  (3 args) */
static void imp_OffsetClipRgn(void) { IMPORT_STUB("OffsetClipRgn"); RET(0); STDRET(3); }
/* GDI32.dll!MoveToEx  (4 args) */
static void imp_MoveToEx(void) { IMPORT_STUB("MoveToEx"); RET(0); STDRET(4); }
/* GDI32.dll!LineTo  (3 args) */
static void imp_LineTo(void) { IMPORT_STUB("LineTo"); RET(0); STDRET(3); }
/* GDI32.dll!SetTextAlign  (2 args) */
static void imp_SetTextAlign(void) { IMPORT_STUB("SetTextAlign"); RET(0); STDRET(2); }
/* GDI32.dll!SetTextJustification  (3 args) */
static void imp_SetTextJustification(void) { IMPORT_STUB("SetTextJustification"); RET(0); STDRET(3); }
/* GDI32.dll!SetTextCharacterExtra  (2 args) */
static void imp_SetTextCharacterExtra(void) { IMPORT_STUB("SetTextCharacterExtra"); RET(0); STDRET(2); }
/* GDI32.dll!SetMapperFlags  (2 args) */
static void imp_SetMapperFlags(void) { IMPORT_STUB("SetMapperFlags"); RET(0); STDRET(2); }
/* GDI32.dll!GetCurrentPositionEx  (2 args) */
static void imp_GetCurrentPositionEx(void) { IMPORT_STUB("GetCurrentPositionEx"); RET(0); STDRET(2); }
/* GDI32.dll!ArcTo  (9 args) */
static void imp_ArcTo(void) { IMPORT_STUB("ArcTo"); RET(0); STDRET(9); }
/* GDI32.dll!SetArcDirection  (2 args) */
static void imp_SetArcDirection(void) { IMPORT_STUB("SetArcDirection"); RET(0); STDRET(2); }
/* GDI32.dll!PolyDraw  (4 args) */
static void imp_PolyDraw(void) { IMPORT_STUB("PolyDraw"); RET(0); STDRET(4); }
/* GDI32.dll!PolylineTo  (3 args) */
static void imp_PolylineTo(void) { IMPORT_STUB("PolylineTo"); RET(0); STDRET(3); }
/* GDI32.dll!SetColorAdjustment  (2 args) */
static void imp_SetColorAdjustment(void) { IMPORT_STUB("SetColorAdjustment"); RET(0); STDRET(2); }
/* GDI32.dll!PolyBezierTo  (3 args) */
static void imp_PolyBezierTo(void) { IMPORT_STUB("PolyBezierTo"); RET(0); STDRET(3); }
/* GDI32.dll!GetClipRgn  (2 args) */
static void imp_GetClipRgn(void) { IMPORT_STUB("GetClipRgn"); RET(0); STDRET(2); }
/* GDI32.dll!CreateRectRgn  (4 args) */
static void imp_CreateRectRgn(void) { IMPORT_STUB("CreateRectRgn"); RET(0); STDRET(4); }
/* GDI32.dll!SelectClipPath  (2 args) */
static void imp_SelectClipPath(void) { IMPORT_STUB("SelectClipPath"); RET(0); STDRET(2); }
/* GDI32.dll!ExtSelectClipRgn  (3 args) */
static void imp_ExtSelectClipRgn(void) { IMPORT_STUB("ExtSelectClipRgn"); RET(0); STDRET(3); }
/* GDI32.dll!GetObjectType  (1 args) */
static void imp_GetObjectType(void) { IMPORT_STUB("GetObjectType"); RET(0); STDRET(1); }
/* GDI32.dll!PlayMetaFileRecord  (4 args) */
static void imp_PlayMetaFileRecord(void) { IMPORT_STUB("PlayMetaFileRecord"); RET(0); STDRET(4); }
/* GDI32.dll!EnumMetaFile  (4 args) */
static void imp_EnumMetaFile(void) { IMPORT_STUB("EnumMetaFile"); RET(0); STDRET(4); }
/* GDI32.dll!PlayMetaFile  (2 args) */
static void imp_PlayMetaFile(void) { IMPORT_STUB("PlayMetaFile"); RET(0); STDRET(2); }
/* GDI32.dll!GetViewportExtEx  (2 args) */
static void imp_GetViewportExtEx(void) { IMPORT_STUB("GetViewportExtEx"); RET(0); STDRET(2); }
/* GDI32.dll!GetWindowExtEx  (2 args) */
static void imp_GetWindowExtEx(void) { IMPORT_STUB("GetWindowExtEx"); RET(0); STDRET(2); }
/* GDI32.dll!ExtCreatePen  (5 args) */
static void imp_ExtCreatePen(void) { IMPORT_STUB("ExtCreatePen"); RET(0); STDRET(5); }
/* GDI32.dll!CreateSolidBrush  (1 args) */
static void imp_CreateSolidBrush(void) { IMPORT_STUB("CreateSolidBrush"); RET(0); STDRET(1); }
/* GDI32.dll!CreateHatchBrush  (2 args) */
static void imp_CreateHatchBrush(void) { IMPORT_STUB("CreateHatchBrush"); RET(0); STDRET(2); }
/* GDI32.dll!CreatePatternBrush  (1 args) */
static void imp_CreatePatternBrush(void) { IMPORT_STUB("CreatePatternBrush"); RET(0); STDRET(1); }
/* GDI32.dll!CreateDIBPatternBrushPt  (2 args) */
static void imp_CreateDIBPatternBrushPt(void) { IMPORT_STUB("CreateDIBPatternBrushPt"); RET(0); STDRET(2); }
/* GDI32.dll!PtVisible  (3 args) */
static void imp_PtVisible(void) { IMPORT_STUB("PtVisible"); RET(0); STDRET(3); }
/* GDI32.dll!RectVisible  (2 args) */
static void imp_RectVisible(void) { IMPORT_STUB("RectVisible"); RET(0); STDRET(2); }
/* GDI32.dll!TextOutA  (5 args) */
static void imp_TextOutA(void) { IMPORT_STUB("TextOutA"); RET(0); STDRET(5); }
/* GDI32.dll!ExtTextOutA  (8 args) */
static void imp_ExtTextOutA(void) { IMPORT_STUB("ExtTextOutA"); RET(0); STDRET(8); }
/* GDI32.dll!Escape  (5 args) */
static void imp_Escape(void) { IMPORT_STUB("Escape"); RET(0); STDRET(5); }
/* GDI32.dll!LPtoDP  (3 args) */
static void imp_LPtoDP(void) { IMPORT_STUB("LPtoDP"); RET(0); STDRET(3); }
/* GDI32.dll!CreateRectRgnIndirect  (1 args) */
static void imp_CreateRectRgnIndirect(void) { IMPORT_STUB("CreateRectRgnIndirect"); RET(0); STDRET(1); }
/* GDI32.dll!GetNearestColor  (2 args) */
static void imp_GetNearestColor(void) { IMPORT_STUB("GetNearestColor"); RET(0); STDRET(2); }
/* GDI32.dll!GetBkColor  (1 args) */
static void imp_GetBkColor(void) { IMPORT_STUB("GetBkColor"); RET(0); STDRET(1); }
/* GDI32.dll!GetTextColor  (1 args) */
static void imp_GetTextColor(void) { IMPORT_STUB("GetTextColor"); RET(0); STDRET(1); }
/* GDI32.dll!GetStretchBltMode  (1 args) */
static void imp_GetStretchBltMode(void) { IMPORT_STUB("GetStretchBltMode"); RET(0); STDRET(1); }
/* GDI32.dll!GetPolyFillMode  (1 args) */
static void imp_GetPolyFillMode(void) { IMPORT_STUB("GetPolyFillMode"); RET(0); STDRET(1); }
/* GDI32.dll!GetTextAlign  (1 args) */
static void imp_GetTextAlign(void) { IMPORT_STUB("GetTextAlign"); RET(0); STDRET(1); }
/* GDI32.dll!GetBkMode  (1 args) */
static void imp_GetBkMode(void) { IMPORT_STUB("GetBkMode"); RET(0); STDRET(1); }
/* GDI32.dll!GetROP2  (1 args) */
static void imp_GetROP2(void) { IMPORT_STUB("GetROP2"); RET(0); STDRET(1); }
/* GDI32.dll!CreateFontIndirectA  (1 args) */
static void imp_CreateFontIndirectA(void) { IMPORT_STUB("CreateFontIndirectA"); RET(0); STDRET(1); }
/* GDI32.dll!GetTextFaceA  (3 args) */
static void imp_GetTextFaceA(void) { IMPORT_STUB("GetTextFaceA"); RET(0); STDRET(3); }
/* GDI32.dll!GetCharWidthA  (4 args) */
static void imp_GetCharWidthA(void) { IMPORT_STUB("GetCharWidthA"); RET(0); STDRET(4); }
/* GDI32.dll!SelectObject  (2 args) */
static void imp_SelectObject(void) { IMPORT_STUB("SelectObject"); RET(1); STDRET(2); }
/* GDI32.dll!SetPolyFillMode  (2 args) */
static void imp_SetPolyFillMode(void) { IMPORT_STUB("SetPolyFillMode"); RET(0); STDRET(2); }
/* GDI32.dll!GetWindowOrgEx  (2 args) */
static void imp_GetWindowOrgEx(void) { IMPORT_STUB("GetWindowOrgEx"); RET(0); STDRET(2); }
/* KERNEL32.dll!FreeLibrary  (1 args) */
static void imp_FreeLibrary(void) { IMPORT_STUB("FreeLibrary"); RET(0); STDRET(1); }
/* KERNEL32.dll!InterlockedDecrement  (1 args) */
static void imp_InterlockedDecrement(void) { IMPORT_STUB("InterlockedDecrement"); RET(0); STDRET(1); }
/* KERNEL32.dll!GetFileAttributesA  (1 args) */
static void imp_GetFileAttributesA(void) { IMPORT_STUB("GetFileAttributesA"); RET(0); STDRET(1); }
/* KERNEL32.dll!SetFileTime  (4 args) */
static void imp_SetFileTime(void) { IMPORT_STUB("SetFileTime"); RET(0); STDRET(4); }
/* KERNEL32.dll!InterlockedIncrement  (1 args) */
static void imp_InterlockedIncrement(void) { IMPORT_STUB("InterlockedIncrement"); RET(0); STDRET(1); }
/* KERNEL32.dll!VirtualProtect  (4 args) */
static void imp_VirtualProtect(void) { IMPORT_STUB("VirtualProtect"); RET(0); STDRET(4); }
/* KERNEL32.dll!lstrcmpiA  (2 args) */
static void imp_lstrcmpiA(void) { IMPORT_STUB("lstrcmpiA"); RET(0); STDRET(2); }
/* KERNEL32.dll!GetFileTime  (4 args) */
static void imp_GetFileTime(void) { IMPORT_STUB("GetFileTime"); RET(0); STDRET(4); }
/* KERNEL32.dll!GetDiskFreeSpaceA  (5 args) */
static void imp_GetDiskFreeSpaceA(void) { IMPORT_STUB("GetDiskFreeSpaceA"); RET(0); STDRET(5); }
/* KERNEL32.dll!GlobalFlags  (1 args) */
static void imp_GlobalFlags(void) { IMPORT_STUB("GlobalFlags"); RET(0); STDRET(1); }
/* KERNEL32.dll!GlobalHandle  (1 args) */
static void imp_GlobalHandle(void) { IMPORT_STUB("GlobalHandle"); RET(0); STDRET(1); }
/* KERNEL32.dll!GlobalReAlloc  (3 args) */
static void imp_GlobalReAlloc(void) { IMPORT_STUB("GlobalReAlloc"); RET(0); STDRET(3); }
/* KERNEL32.dll!LocalReAlloc  (3 args) */
static void imp_LocalReAlloc(void) { IMPORT_STUB("LocalReAlloc"); RET(0); STDRET(3); }
/* KERNEL32.dll!GetProcessVersion  (1 args) */
static void imp_GetProcessVersion(void) { IMPORT_STUB("GetProcessVersion"); RET(0); STDRET(1); }
/* KERNEL32.dll!GetTempFileNameA  (4 args) */
static void imp_GetTempFileNameA(void) { IMPORT_STUB("GetTempFileNameA"); RET(0); STDRET(4); }
/* KERNEL32.dll!SuspendThread  (1 args) */
static void imp_SuspendThread(void) { IMPORT_STUB("SuspendThread"); RET(0); STDRET(1); }
/* KERNEL32.dll!GetFullPathNameA  (4 args) */
static void imp_GetFullPathNameA(void) { IMPORT_STUB("GetFullPathNameA"); RET(0); STDRET(4); }
/* KERNEL32.dll!ResumeThread  (1 args) */
static void imp_ResumeThread(void) { IMPORT_STUB("ResumeThread"); RET(0); STDRET(1); }
/* KERNEL32.dll!FindClose  (1 args) */
static void imp_FindClose(void) { IMPORT_STUB("FindClose"); RET(0); STDRET(1); }
/* KERNEL32.dll!FindFirstFileA  (2 args) */
static void imp_FindFirstFileA(void) { IMPORT_STUB("FindFirstFileA"); RET(0); STDRET(2); }
/* KERNEL32.dll!GetVolumeInformationA  (8 args) */
static void imp_GetVolumeInformationA(void) { IMPORT_STUB("GetVolumeInformationA"); RET(0); STDRET(8); }
/* KERNEL32.dll!GetStringTypeExA  (5 args) */
static void imp_GetStringTypeExA(void) { IMPORT_STUB("GetStringTypeExA"); RET(0); STDRET(5); }
/* KERNEL32.dll!GetThreadLocale  (0 args) */
static void imp_GetThreadLocale(void) { IMPORT_STUB("GetThreadLocale"); RET(0); STDRET(0); }
/* KERNEL32.dll!GetShortPathNameA  (3 args) */
static void imp_GetShortPathNameA(void) { IMPORT_STUB("GetShortPathNameA"); RET(0); STDRET(3); }
/* KERNEL32.dll!SizeofResource  (2 args) */
static void imp_SizeofResource(void) { IMPORT_STUB("SizeofResource"); RET(0); STDRET(2); }
/* KERNEL32.dll!GetFileSize  (2 args) */
static void imp_GetFileSize(void) { IMPORT_STUB("GetFileSize"); RET(0); STDRET(2); }
/* KERNEL32.dll!LocalFileTimeToFileTime  (2 args) */
static void imp_LocalFileTimeToFileTime(void) { IMPORT_STUB("LocalFileTimeToFileTime"); RET(0); STDRET(2); }
/* KERNEL32.dll!SystemTimeToFileTime  (2 args) */
static void imp_SystemTimeToFileTime(void) { IMPORT_STUB("SystemTimeToFileTime"); RET(0); STDRET(2); }
/* KERNEL32.dll!SetFileAttributesA  (2 args) */
static void imp_SetFileAttributesA(void) { IMPORT_STUB("SetFileAttributesA"); RET(0); STDRET(2); }
/* KERNEL32.dll!FormatMessageA  (7 args) */
static void imp_FormatMessageA(void) { IMPORT_STUB("FormatMessageA"); RET(0); STDRET(7); }
/* KERNEL32.dll!SetErrorMode  (1 args) */
static void imp_SetErrorMode(void) { IMPORT_STUB("SetErrorMode"); RET(0); STDRET(1); }
/* KERNEL32.dll!FileTimeToSystemTime  (2 args) */
static void imp_FileTimeToSystemTime(void) { IMPORT_STUB("FileTimeToSystemTime"); RET(0); STDRET(2); }
/* KERNEL32.dll!FileTimeToLocalFileTime  (2 args) */
static void imp_FileTimeToLocalFileTime(void) { IMPORT_STUB("FileTimeToLocalFileTime"); RET(0); STDRET(2); }
/* KERNEL32.dll!SetEvent  (1 args) */
static void imp_SetEvent(void) { IMPORT_STUB("SetEvent"); RET(0); STDRET(1); }
/* KERNEL32.dll!GlobalDeleteAtom  (1 args) */
static void imp_GlobalDeleteAtom(void) { IMPORT_STUB("GlobalDeleteAtom"); RET(0); STDRET(1); }
/* KERNEL32.dll!GlobalUnlock  (1 args) */
static void imp_GlobalUnlock(void) { IMPORT_STUB("GlobalUnlock"); RET(0); STDRET(1); }
/* KERNEL32.dll!GlobalGetAtomNameA  (3 args) */
static void imp_GlobalGetAtomNameA(void) { IMPORT_STUB("GlobalGetAtomNameA"); RET(0); STDRET(3); }
/* KERNEL32.dll!GlobalAddAtomA  (1 args) */
static void imp_GlobalAddAtomA(void) { IMPORT_STUB("GlobalAddAtomA"); RET(0); STDRET(1); }
/* KERNEL32.dll!MulDiv  (3 args) */
static void imp_MulDiv(void) { IMPORT_STUB("MulDiv"); RET(0); STDRET(3); }
/* KERNEL32.dll!SetEnvironmentVariableA  (2 args) */
static void imp_SetEnvironmentVariableA(void) { IMPORT_STUB("SetEnvironmentVariableA"); RET(0); STDRET(2); }
/* KERNEL32.dll!CompareStringW  (6 args) */
static void imp_CompareStringW(void) { IMPORT_STUB("CompareStringW"); RET(0); STDRET(6); }
/* KERNEL32.dll!CompareStringA  (6 args) */
static void imp_CompareStringA(void) { IMPORT_STUB("CompareStringA"); RET(0); STDRET(6); }
/* KERNEL32.dll!GetTimeZoneInformation  (1 args) */
static void imp_GetTimeZoneInformation(void) { IMPORT_STUB("GetTimeZoneInformation"); RET(0); STDRET(1); }
/* KERNEL32.dll!RaiseException  (4 args) */
static void imp_RaiseException(void) { IMPORT_STUB("RaiseException"); RET(0); STDRET(4); }
/* KERNEL32.dll!SetEndOfFile  (1 args) */
static void imp_SetEndOfFile(void) { IMPORT_STUB("SetEndOfFile"); RET(0); STDRET(1); }
/* KERNEL32.dll!GetLocaleInfoW  (4 args) */
static void imp_GetLocaleInfoW(void) { IMPORT_STUB("GetLocaleInfoW"); RET(0); STDRET(4); }
/* KERNEL32.dll!GetLocaleInfoA  (4 args) */
static void imp_GetLocaleInfoA(void) { IMPORT_STUB("GetLocaleInfoA"); RET(0); STDRET(4); }
/* KERNEL32.dll!SetConsoleCtrlHandler  (2 args) */
static void imp_SetConsoleCtrlHandler(void) { IMPORT_STUB("SetConsoleCtrlHandler"); RET(0); STDRET(2); }
/* KERNEL32.dll!IsBadCodePtr  (1 args) */
static void imp_IsBadCodePtr(void) { IMPORT_STUB("IsBadCodePtr"); RET(0); STDRET(1); }
/* KERNEL32.dll!IsBadReadPtr  (2 args) */
static void imp_IsBadReadPtr(void) { IMPORT_STUB("IsBadReadPtr"); RET(0); STDRET(2); }
/* KERNEL32.dll!SetUnhandledExceptionFilter  (1 args) */
static void imp_SetUnhandledExceptionFilter(void) { IMPORT_STUB("SetUnhandledExceptionFilter"); RET(0); STDRET(1); }
/* KERNEL32.dll!GetUserDefaultLCID  (0 args) */
static void imp_GetUserDefaultLCID(void) { IMPORT_STUB("GetUserDefaultLCID"); RET(0); STDRET(0); }
/* KERNEL32.dll!IsValidCodePage  (1 args) */
static void imp_IsValidCodePage(void) { IMPORT_STUB("IsValidCodePage"); RET(0); STDRET(1); }
/* KERNEL32.dll!IsValidLocale  (2 args) */
static void imp_IsValidLocale(void) { IMPORT_STUB("IsValidLocale"); RET(0); STDRET(2); }
extern void imp_SetStdHandle(void);  /* KERNEL32.dll!SetStdHandle - hand-written in shims_impl.c */
/* KERNEL32.dll!GetEnvironmentStringsW  (0 args) */
static void imp_GetEnvironmentStringsW(void) { IMPORT_STUB("GetEnvironmentStringsW"); RET(0); STDRET(0); }
/* KERNEL32.dll!FreeEnvironmentStringsW  (1 args) */
static void imp_FreeEnvironmentStringsW(void) { IMPORT_STUB("FreeEnvironmentStringsW"); RET(0); STDRET(1); }
extern void imp_GetEnvironmentStrings(void);  /* KERNEL32.dll!GetEnvironmentStrings - hand-written in shims_impl.c */
/* KERNEL32.dll!FreeEnvironmentStringsA  (1 args) */
static void imp_FreeEnvironmentStringsA(void) { IMPORT_STUB("FreeEnvironmentStringsA"); RET(0); STDRET(1); }
/* KERNEL32.dll!UnhandledExceptionFilter  (1 args) */
static void imp_UnhandledExceptionFilter(void) { IMPORT_STUB("UnhandledExceptionFilter"); RET(0); STDRET(1); }
extern void imp_GetStdHandle(void);  /* KERNEL32.dll!GetStdHandle - hand-written in shims_impl.c */
extern void imp_GetFileType(void);  /* KERNEL32.dll!GetFileType - hand-written in shims_impl.c */
/* KERNEL32.dll!SetHandleCount  (1 args) */
static void imp_SetHandleCount(void) { IMPORT_STUB("SetHandleCount"); RET(0); STDRET(1); }
extern void imp_GetOEMCP(void);  /* KERNEL32.dll!GetOEMCP - hand-written in shims_impl.c */
extern void imp_GetACP(void);  /* KERNEL32.dll!GetACP - hand-written in shims_impl.c */
extern void imp_GetCPInfo(void);  /* KERNEL32.dll!GetCPInfo - hand-written in shims_impl.c */
/* KERNEL32.dll!HeapSize  (3 args) */
static void imp_HeapSize(void) { IMPORT_STUB("HeapSize"); RET(0); STDRET(3); }
/* KERNEL32.dll!HeapReAlloc  (4 args) */
static void imp_HeapReAlloc(void) { IMPORT_STUB("HeapReAlloc"); RET(0); STDRET(4); }
/* KERNEL32.dll!GetCurrentProcess  (0 args) */
static void imp_GetCurrentProcess(void) { IMPORT_STUB("GetCurrentProcess"); RET(1); STDRET(0); }
/* KERNEL32.dll!TerminateProcess  (2 args) */
static void imp_TerminateProcess(void) { IMPORT_STUB("TerminateProcess"); RET(0); STDRET(2); }
extern void imp_SetFilePointer(void);  /* KERNEL32.dll!SetFilePointer - hand-written in shims_impl.c */
/* KERNEL32.dll!GetStringTypeW  (4 args) */
static void imp_GetStringTypeW(void) { IMPORT_STUB("GetStringTypeW"); RET(0); STDRET(4); }
/* KERNEL32.dll!GetStringTypeA  (5 args) */
static void imp_GetStringTypeA(void) { IMPORT_STUB("GetStringTypeA"); RET(0); STDRET(5); }
/* KERNEL32.dll!HeapDestroy  (1 args) */
static void imp_HeapDestroy(void) { IMPORT_STUB("HeapDestroy"); RET(0); STDRET(1); }
/* KERNEL32.dll!HeapCreate  (3 args) */
static void imp_HeapCreate(void) { IMPORT_STUB("HeapCreate"); RET(0); STDRET(3); }
/* KERNEL32.dll!FlushFileBuffers  (1 args) */
static void imp_FlushFileBuffers(void) { IMPORT_STUB("FlushFileBuffers"); RET(0); STDRET(1); }
extern void imp_ReadFile(void);  /* KERNEL32.dll!ReadFile - hand-written in shims_impl.c */
/* KERNEL32.dll!LCMapStringW  (6 args) */
static void imp_LCMapStringW(void) { IMPORT_STUB("LCMapStringW"); RET(0); STDRET(6); }
/* KERNEL32.dll!WideCharToMultiByte  (8 args) */
static void imp_WideCharToMultiByte(void) { IMPORT_STUB("WideCharToMultiByte"); RET(0); STDRET(8); }
/* KERNEL32.dll!LCMapStringA  (6 args) */
static void imp_LCMapStringA(void) { IMPORT_STUB("LCMapStringA"); RET(0); STDRET(6); }
/* KERNEL32.dll!MultiByteToWideChar  (6 args) */
static void imp_MultiByteToWideChar(void) { IMPORT_STUB("MultiByteToWideChar"); RET(0); STDRET(6); }
/* KERNEL32.dll!FatalAppExitA  (2 args) */
static void imp_FatalAppExitA(void) { IMPORT_STUB("FatalAppExitA"); RET(0); STDRET(2); }
/* KERNEL32.dll!GetCurrentThread  (0 args) */
static void imp_GetCurrentThread(void) { IMPORT_STUB("GetCurrentThread"); RET(0); STDRET(0); }
/* KERNEL32.dll!TlsGetValue  (1 args) */
static void imp_TlsGetValue(void) { IMPORT_STUB("TlsGetValue"); RET(0); STDRET(1); }
/* KERNEL32.dll!SetLastError  (1 args) */
static void imp_SetLastError(void) { IMPORT_STUB("SetLastError"); RET(0); STDRET(1); }
/* KERNEL32.dll!TlsFree  (1 args) */
static void imp_TlsFree(void) { IMPORT_STUB("TlsFree"); RET(0); STDRET(1); }
/* KERNEL32.dll!TlsAlloc  (0 args) */
static void imp_TlsAlloc(void) { IMPORT_STUB("TlsAlloc"); RET(0); STDRET(0); }
/* KERNEL32.dll!TlsSetValue  (2 args) */
static void imp_TlsSetValue(void) { IMPORT_STUB("TlsSetValue"); RET(0); STDRET(2); }
/* KERNEL32.dll!GetCurrentThreadId  (0 args) */
static void imp_GetCurrentThreadId(void) { IMPORT_STUB("GetCurrentThreadId"); RET(0); STDRET(0); }
extern void imp_GetCommandLineA(void);  /* KERNEL32.dll!GetCommandLineA - hand-written in shims_impl.c */
extern void imp_GetStartupInfoA(void);  /* KERNEL32.dll!GetStartupInfoA - hand-written in shims_impl.c */
/* KERNEL32.dll!RtlUnwind  (4 args) */
static void imp_RtlUnwind(void) { IMPORT_STUB("RtlUnwind"); RET(0); STDRET(4); }
/* KERNEL32.dll!HeapFree  (3 args) */
static void imp_HeapFree(void) { IMPORT_STUB("HeapFree"); RET(0); STDRET(3); }
/* KERNEL32.dll!EnterCriticalSection  (1 args) */
static void imp_EnterCriticalSection(void) { IMPORT_STUB("EnterCriticalSection"); RET(0); STDRET(1); }
/* KERNEL32.dll!HeapAlloc  (3 args) */
static void imp_HeapAlloc(void) { IMPORT_STUB("HeapAlloc"); RET(0); STDRET(3); }
/* KERNEL32.dll!lstrcatA  (2 args) */
static void imp_lstrcatA(void) { IMPORT_STUB("lstrcatA"); RET(0); STDRET(2); }
/* KERNEL32.dll!DeleteFileA  (1 args) */
static void imp_DeleteFileA(void) { IMPORT_STUB("DeleteFileA"); RET(0); STDRET(1); }
/* KERNEL32.dll!LocalAlloc  (2 args) */
static void imp_LocalAlloc(void) { IMPORT_STUB("LocalAlloc"); RET(0); STDRET(2); }
/* KERNEL32.dll!LeaveCriticalSection  (1 args) */
static void imp_LeaveCriticalSection(void) { IMPORT_STUB("LeaveCriticalSection"); RET(0); STDRET(1); }
/* KERNEL32.dll!LocalFree  (1 args) */
static void imp_LocalFree(void) { IMPORT_STUB("LocalFree"); RET(0); STDRET(1); }
/* KERNEL32.dll!IsBadWritePtr  (2 args) */
static void imp_IsBadWritePtr(void) { IMPORT_STUB("IsBadWritePtr"); RET(0); STDRET(2); }
/* KERNEL32.dll!DeleteCriticalSection  (1 args) */
static void imp_DeleteCriticalSection(void) { IMPORT_STUB("DeleteCriticalSection"); RET(0); STDRET(1); }
/* KERNEL32.dll!InitializeCriticalSection  (1 args) */
static void imp_InitializeCriticalSection(void) { IMPORT_STUB("InitializeCriticalSection"); RET(0); STDRET(1); }
extern void imp_GlobalFree(void);  /* KERNEL32.dll!GlobalFree - hand-written in shims_impl.c */
/* KERNEL32.dll!WaitForSingleObject  (2 args) */
static void imp_WaitForSingleObject(void) { IMPORT_STUB("WaitForSingleObject"); RET(0); STDRET(2); }
/* KERNEL32.dll!CreateEventA  (4 args) */
static void imp_CreateEventA(void) { IMPORT_STUB("CreateEventA"); RET(0); STDRET(4); }
extern void imp_GlobalAlloc(void);  /* KERNEL32.dll!GlobalAlloc - hand-written in shims_impl.c */
/* KERNEL32.dll!GetSystemTime  (1 args) */
static void imp_GetSystemTime(void) { IMPORT_STUB("GetSystemTime"); RET(0); STDRET(1); }
extern void imp_GlobalLock(void);  /* KERNEL32.dll!GlobalLock - hand-written in shims_impl.c */
/* KERNEL32.dll!lstrcpynA  (3 args) */
static void imp_lstrcpynA(void) { IMPORT_STUB("lstrcpynA"); RET(0); STDRET(3); }
/* KERNEL32.dll!Sleep  (1 args) */
static void imp_Sleep(void) { IMPORT_STUB("Sleep"); RET(0); STDRET(1); }
/* KERNEL32.dll!QueryPerformanceFrequency  (1 args) */
static void imp_QueryPerformanceFrequency(void) { IMPORT_STUB("QueryPerformanceFrequency"); RET(0); STDRET(1); }
extern void imp_GetModuleHandleA(void);  /* KERNEL32.dll!GetModuleHandleA - hand-written in shims_impl.c */
/* KERNEL32.dll!lstrcmpA  (2 args) */
static void imp_lstrcmpA(void) { IMPORT_STUB("lstrcmpA"); RET(0); STDRET(2); }
extern void imp_ExitProcess(void);  /* KERNEL32.dll!ExitProcess - hand-written in shims_impl.c */
extern void imp_CreateThread(void);  /* KERNEL32.dll!CreateThread - hand-written in shims_impl.c */
/* KERNEL32.dll!lstrlenA  (1 args) */
static void imp_lstrlenA(void) { IMPORT_STUB("lstrlenA"); RET(0); STDRET(1); }
extern void imp_LoadLibraryA(void);  /* KERNEL32.dll!LoadLibraryA - hand-written in shims_impl.c */
extern void imp_GetProcAddress(void);  /* KERNEL32.dll!GetProcAddress - hand-written in shims_impl.c */
extern void imp_GetCurrentDirectoryA(void);  /* KERNEL32.dll!GetCurrentDirectoryA - hand-written in shims_impl.c */
extern void imp_SetThreadPriority(void);  /* KERNEL32.dll!SetThreadPriority - hand-written in shims_impl.c */
extern void imp_GlobalMemoryStatus(void);  /* KERNEL32.dll!GlobalMemoryStatus - hand-written in shims_impl.c */
/* KERNEL32.dll!CreateSemaphoreA  (4 args) */
static void imp_CreateSemaphoreA(void) { IMPORT_STUB("CreateSemaphoreA"); RET(0); STDRET(4); }
extern void imp_GetModuleFileNameA(void);  /* KERNEL32.dll!GetModuleFileNameA - hand-written in shims_impl.c */
/* KERNEL32.dll!SetCurrentDirectoryA  (1 args) */
static void imp_SetCurrentDirectoryA(void) { IMPORT_STUB("SetCurrentDirectoryA"); RET(0); STDRET(1); }
/* KERNEL32.dll!FindResourceA  (3 args) */
static void imp_FindResourceA(void) { IMPORT_STUB("FindResourceA"); RET(1); STDRET(3); }
/* KERNEL32.dll!GetLastError  (0 args) */
static void imp_GetLastError(void) { IMPORT_STUB("GetLastError"); RET(0); STDRET(0); }
extern void imp_GetVersion(void);  /* KERNEL32.dll!GetVersion - hand-written in shims_impl.c */
/* KERNEL32.dll!LoadModule  (2 args) */
static void imp_LoadModule(void) { IMPORT_STUB("LoadModule"); RET(0); STDRET(2); }
/* KERNEL32.dll!LoadResource  (2 args) */
static void imp_LoadResource(void) { IMPORT_STUB("LoadResource"); RET(1); STDRET(2); }
/* KERNEL32.dll!LockResource  (1 args) */
static void imp_LockResource(void) { IMPORT_STUB("LockResource"); RET(1); STDRET(1); }
extern void imp_GetPrivateProfileIntA(void);  /* KERNEL32.dll!GetPrivateProfileIntA - hand-written in shims_impl.c */
extern void imp_WritePrivateProfileStringA(void);  /* KERNEL32.dll!WritePrivateProfileStringA - hand-written in shims_impl.c */
extern void imp_GetPrivateProfileStringA(void);  /* KERNEL32.dll!GetPrivateProfileStringA - hand-written in shims_impl.c */
extern void imp_WriteFile(void);  /* KERNEL32.dll!WriteFile - hand-written in shims_impl.c */
extern void imp_CreateFileA(void);  /* KERNEL32.dll!CreateFileA - hand-written in shims_impl.c */
extern void imp_CloseHandle(void);  /* KERNEL32.dll!CloseHandle - hand-written in shims_impl.c */
/* KERNEL32.dll!UnlockFile  (5 args) */
static void imp_UnlockFile(void) { IMPORT_STUB("UnlockFile"); RET(0); STDRET(5); }
/* KERNEL32.dll!lstrcpyA  (2 args) */
static void imp_lstrcpyA(void) { IMPORT_STUB("lstrcpyA"); RET(0); STDRET(2); }
/* KERNEL32.dll!MoveFileA  (2 args) */
static void imp_MoveFileA(void) { IMPORT_STUB("MoveFileA"); RET(0); STDRET(2); }
/* KERNEL32.dll!DuplicateHandle  (7 args) */
static void imp_DuplicateHandle(void) { IMPORT_STUB("DuplicateHandle"); RET(0); STDRET(7); }
/* KERNEL32.dll!LockFile  (5 args) */
static void imp_LockFile(void) { IMPORT_STUB("LockFile"); RET(0); STDRET(5); }
/* KERNEL32.dll!GetLocalTime  (1 args) */
static void imp_GetLocalTime(void) { IMPORT_STUB("GetLocalTime"); RET(0); STDRET(1); }
/* KERNEL32.dll!GetDriveTypeA  (1 args) */
static void imp_GetDriveTypeA(void) { IMPORT_STUB("GetDriveTypeA"); RET(0); STDRET(1); }
/* KERNEL32.dll!CreateDirectoryA  (2 args) */
static void imp_CreateDirectoryA(void) { IMPORT_STUB("CreateDirectoryA"); RET(0); STDRET(2); }
/* KERNEL32.dll!ExitThread  (1 args) */
static void imp_ExitThread(void) { IMPORT_STUB("ExitThread"); RET(0); STDRET(1); }
/* SHELL32.dll!DragAcceptFiles  (2 args) */
static void imp_DragAcceptFiles(void) { IMPORT_STUB("DragAcceptFiles"); RET(0); STDRET(2); }
/* SHELL32.dll!DragFinish  (1 args) */
static void imp_DragFinish(void) { IMPORT_STUB("DragFinish"); RET(0); STDRET(1); }
/* SHELL32.dll!DragQueryFileA  (4 args) */
static void imp_DragQueryFileA(void) { IMPORT_STUB("DragQueryFileA"); RET(0); STDRET(4); }
/* SHELL32.dll!SHGetFileInfoA  (5 args) */
static void imp_SHGetFileInfoA(void) { IMPORT_STUB("SHGetFileInfoA"); RET(0); STDRET(5); }
/* SHELL32.dll!ShellExecuteA  (6 args) */
static void imp_ShellExecuteA(void) { IMPORT_STUB("ShellExecuteA"); RET(0); STDRET(6); }
/* SHELL32.dll!ExtractIconA  (3 args) */
static void imp_ExtractIconA(void) { IMPORT_STUB("ExtractIconA"); RET(0); STDRET(3); }
/* USER32.dll!GetNextDlgTabItem  (3 args) */
static void imp_GetNextDlgTabItem(void) { IMPORT_STUB("GetNextDlgTabItem"); RET(0); STDRET(3); }
/* USER32.dll!CheckDlgButton  (3 args) */
static void imp_CheckDlgButton(void) { IMPORT_STUB("CheckDlgButton"); RET(0); STDRET(3); }
/* USER32.dll!CreateDialogIndirectParamA  (5 args) */
static void imp_CreateDialogIndirectParamA(void) { IMPORT_STUB("CreateDialogIndirectParamA"); RET(0); STDRET(5); }
/* USER32.dll!UnpackDDElParam  (4 args) */
static void imp_UnpackDDElParam(void) { IMPORT_STUB("UnpackDDElParam"); RET(0); STDRET(4); }
/* USER32.dll!CheckRadioButton  (4 args) */
static void imp_CheckRadioButton(void) { IMPORT_STUB("CheckRadioButton"); RET(0); STDRET(4); }
/* USER32.dll!GetDlgItemTextA  (4 args) */
static void imp_GetDlgItemTextA(void) { IMPORT_STUB("GetDlgItemTextA"); RET(0); STDRET(4); }
/* USER32.dll!SetDlgItemInt  (4 args) */
static void imp_SetDlgItemInt(void) { IMPORT_STUB("SetDlgItemInt"); RET(0); STDRET(4); }
/* USER32.dll!IsDlgButtonChecked  (2 args) */
static void imp_IsDlgButtonChecked(void) { IMPORT_STUB("IsDlgButtonChecked"); RET(0); STDRET(2); }
/* USER32.dll!ScrollWindowEx  (8 args) */
static void imp_ScrollWindowEx(void) { IMPORT_STUB("ScrollWindowEx"); RET(0); STDRET(8); }
/* USER32.dll!GetDlgItemInt  (4 args) */
static void imp_GetDlgItemInt(void) { IMPORT_STUB("GetDlgItemInt"); RET(0); STDRET(4); }
/* USER32.dll!IsDialogMessageA  (2 args) */
static void imp_IsDialogMessageA(void) { IMPORT_STUB("IsDialogMessageA"); RET(0); STDRET(2); }
/* USER32.dll!EnableMenuItem  (3 args) */
static void imp_EnableMenuItem(void) { IMPORT_STUB("EnableMenuItem"); RET(0); STDRET(3); }
/* USER32.dll!CheckMenuItem  (3 args) */
static void imp_CheckMenuItem(void) { IMPORT_STUB("CheckMenuItem"); RET(0); STDRET(3); }
/* USER32.dll!SetMenuItemBitmaps  (5 args) */
static void imp_SetMenuItemBitmaps(void) { IMPORT_STUB("SetMenuItemBitmaps"); RET(0); STDRET(5); }
/* USER32.dll!GetMenuState  (3 args) */
static void imp_GetMenuState(void) { IMPORT_STUB("GetMenuState"); RET(0); STDRET(3); }
/* USER32.dll!GetMenuCheckMarkDimensions  (0 args) */
static void imp_GetMenuCheckMarkDimensions(void) { IMPORT_STUB("GetMenuCheckMarkDimensions"); RET(0); STDRET(0); }
/* USER32.dll!GetWindowDC  (1 args) */
static void imp_GetWindowDC(void) { IMPORT_STUB("GetWindowDC"); RET(0); STDRET(1); }
/* USER32.dll!SetMenu  (2 args) */
static void imp_SetMenu(void) { IMPORT_STUB("SetMenu"); RET(0); STDRET(2); }
/* USER32.dll!ReuseDDElParam  (5 args) */
static void imp_ReuseDDElParam(void) { IMPORT_STUB("ReuseDDElParam"); RET(0); STDRET(5); }
/* USER32.dll!TabbedTextOutA  (8 args) */
static void imp_TabbedTextOutA(void) { IMPORT_STUB("TabbedTextOutA"); RET(0); STDRET(8); }
/* USER32.dll!SetWindowTextA  (2 args) */
static void imp_SetWindowTextA(void) { IMPORT_STUB("SetWindowTextA"); RET(0); STDRET(2); }
/* USER32.dll!GrayStringA  (9 args) */
static void imp_GrayStringA(void) { IMPORT_STUB("GrayStringA"); RET(0); STDRET(9); }
/* USER32.dll!PostQuitMessage  (1 args) */
static void imp_PostQuitMessage(void) { IMPORT_STUB("PostQuitMessage"); RET(0); STDRET(1); }
/* USER32.dll!EndPaint  (2 args) */
static void imp_EndPaint(void) { IMPORT_STUB("EndPaint"); RET(0); STDRET(2); }
/* USER32.dll!ValidateRect  (2 args) */
static void imp_ValidateRect(void) { IMPORT_STUB("ValidateRect"); RET(0); STDRET(2); }
extern void imp_GetMessageA(void);  /* USER32.dll!GetMessageA - hand-written in shims_impl.c */
/* USER32.dll!ShowOwnedPopups  (2 args) */
static void imp_ShowOwnedPopups(void) { IMPORT_STUB("ShowOwnedPopups"); RET(0); STDRET(2); }
/* USER32.dll!CharUpperA  (1 args) */
static void imp_CharUpperA(void) { IMPORT_STUB("CharUpperA"); RET(0); STDRET(1); }
/* USER32.dll!CharLowerA  (1 args) */
static void imp_CharLowerA(void) { IMPORT_STUB("CharLowerA"); RET(0); STDRET(1); }
/* USER32.dll!CharToOemA  (2 args) */
static void imp_CharToOemA(void) { IMPORT_STUB("CharToOemA"); RET(0); STDRET(2); }
/* USER32.dll!OemToCharA  (2 args) */
static void imp_OemToCharA(void) { IMPORT_STUB("OemToCharA"); RET(0); STDRET(2); }
/* USER32.dll!LoadStringA  (4 args) */
static void imp_LoadStringA(void) { IMPORT_STUB("LoadStringA"); RET(0); STDRET(4); }
/* USER32.dll!DefFrameProcA  (5 args) */
static void imp_DefFrameProcA(void) { IMPORT_STUB("DefFrameProcA"); RET(0); STDRET(5); }
/* USER32.dll!TranslateMDISysAccel  (2 args) */
static void imp_TranslateMDISysAccel(void) { IMPORT_STUB("TranslateMDISysAccel"); RET(0); STDRET(2); }
/* USER32.dll!DefMDIChildProcA  (4 args) */
static void imp_DefMDIChildProcA(void) { IMPORT_STUB("DefMDIChildProcA"); RET(0); STDRET(4); }
/* USER32.dll!wvsprintfA  (3 args) */
static void imp_wvsprintfA(void) { IMPORT_STUB("wvsprintfA"); RET(0); STDRET(3); }
/* USER32.dll!GetAsyncKeyState  (1 args) */
static void imp_GetAsyncKeyState(void) { IMPORT_STUB("GetAsyncKeyState"); RET(0); STDRET(1); }
/* USER32.dll!MapDialogRect  (2 args) */
static void imp_MapDialogRect(void) { IMPORT_STUB("MapDialogRect"); RET(0); STDRET(2); }
/* USER32.dll!BeginPaint  (2 args) */
static void imp_BeginPaint(void) { IMPORT_STUB("BeginPaint"); RET(1); STDRET(2); }
/* USER32.dll!DrawTextA  (5 args) */
static void imp_DrawTextA(void) { IMPORT_STUB("DrawTextA"); RET(0); STDRET(5); }
/* USER32.dll!SetCapture  (1 args) */
static void imp_SetCapture(void) { IMPORT_STUB("SetCapture"); RET(0); STDRET(1); }
/* USER32.dll!WaitMessage  (0 args) */
static void imp_WaitMessage(void) { IMPORT_STUB("WaitMessage"); RET(0); STDRET(0); }
/* USER32.dll!GetWindowThreadProcessId  (2 args) */
static void imp_GetWindowThreadProcessId(void) { IMPORT_STUB("GetWindowThreadProcessId"); RET(0); STDRET(2); }
/* USER32.dll!GetClassNameA  (3 args) */
static void imp_GetClassNameA(void) { IMPORT_STUB("GetClassNameA"); RET(0); STDRET(3); }
/* USER32.dll!SetMessageQueue  (1 args) */
static void imp_SetMessageQueue(void) { IMPORT_STUB("SetMessageQueue"); RET(0); STDRET(1); }
/* USER32.dll!GetDialogBaseUnits  (0 args) */
static void imp_GetDialogBaseUnits(void) { IMPORT_STUB("GetDialogBaseUnits"); RET(0); STDRET(0); }
/* USER32.dll!InsertMenuA  (5 args) */
static void imp_InsertMenuA(void) { IMPORT_STUB("InsertMenuA"); RET(0); STDRET(5); }
/* USER32.dll!DeleteMenu  (3 args) */
static void imp_DeleteMenu(void) { IMPORT_STUB("DeleteMenu"); RET(0); STDRET(3); }
/* USER32.dll!GetMenuStringA  (5 args) */
static void imp_GetMenuStringA(void) { IMPORT_STUB("GetMenuStringA"); RET(0); STDRET(5); }
/* USER32.dll!DestroyIcon  (1 args) */
static void imp_DestroyIcon(void) { IMPORT_STUB("DestroyIcon"); RET(0); STDRET(1); }
/* USER32.dll!IsRectEmpty  (1 args) */
static void imp_IsRectEmpty(void) { IMPORT_STUB("IsRectEmpty"); RET(0); STDRET(1); }
/* USER32.dll!GetDCEx  (3 args) */
static void imp_GetDCEx(void) { IMPORT_STUB("GetDCEx"); RET(0); STDRET(3); }
/* USER32.dll!LockWindowUpdate  (1 args) */
static void imp_LockWindowUpdate(void) { IMPORT_STUB("LockWindowUpdate"); RET(0); STDRET(1); }
/* USER32.dll!IntersectRect  (3 args) */
static void imp_IntersectRect(void) { IMPORT_STUB("IntersectRect"); RET(0); STDRET(3); }
/* USER32.dll!SetParent  (2 args) */
static void imp_SetParent(void) { IMPORT_STUB("SetParent"); RET(0); STDRET(2); }
/* USER32.dll!AppendMenuA  (4 args) */
static void imp_AppendMenuA(void) { IMPORT_STUB("AppendMenuA"); RET(0); STDRET(4); }
/* USER32.dll!GetSystemMenu  (2 args) */
static void imp_GetSystemMenu(void) { IMPORT_STUB("GetSystemMenu"); RET(0); STDRET(2); }
/* USER32.dll!InvertRect  (2 args) */
static void imp_InvertRect(void) { IMPORT_STUB("InvertRect"); RET(0); STDRET(2); }
/* USER32.dll!UnregisterClassA  (2 args) */
static void imp_UnregisterClassA(void) { IMPORT_STUB("UnregisterClassA"); RET(0); STDRET(2); }
/* USER32.dll!FillRect  (3 args) */
static void imp_FillRect(void) { IMPORT_STUB("FillRect"); RET(0); STDRET(3); }
/* USER32.dll!DestroyCursor  (1 args) */
static void imp_DestroyCursor(void) { IMPORT_STUB("DestroyCursor"); RET(0); STDRET(1); }
/* USER32.dll!LoadIconA  (2 args) */
static void imp_LoadIconA(void) { IMPORT_STUB("LoadIconA"); RET(1); STDRET(2); }
/* USER32.dll!SendDlgItemMessageA  (5 args) */
static void imp_SendDlgItemMessageA(void) { IMPORT_STUB("SendDlgItemMessageA"); RET(0); STDRET(5); }
/* USER32.dll!SystemParametersInfoA  (4 args) */
static void imp_SystemParametersInfoA(void) { IMPORT_STUB("SystemParametersInfoA"); RET(0); STDRET(4); }
/* USER32.dll!MapWindowPoints  (4 args) */
static void imp_MapWindowPoints(void) { IMPORT_STUB("MapWindowPoints"); RET(0); STDRET(4); }
/* USER32.dll!GetSysColor  (1 args) */
static void imp_GetSysColor(void) { IMPORT_STUB("GetSysColor"); RET(0); STDRET(1); }
/* USER32.dll!GetFocus  (0 args) */
static void imp_GetFocus(void) { IMPORT_STUB("GetFocus"); RET(0); STDRET(0); }
/* USER32.dll!SetActiveWindow  (1 args) */
static void imp_SetActiveWindow(void) { IMPORT_STUB("SetActiveWindow"); RET(0); STDRET(1); }
/* USER32.dll!IsWindow  (1 args) */
static void imp_IsWindow(void) { IMPORT_STUB("IsWindow"); RET(0); STDRET(1); }
/* USER32.dll!AdjustWindowRectEx  (4 args) */
static void imp_AdjustWindowRectEx(void) { IMPORT_STUB("AdjustWindowRectEx"); RET(0); STDRET(4); }
/* USER32.dll!EqualRect  (2 args) */
static void imp_EqualRect(void) { IMPORT_STUB("EqualRect"); RET(0); STDRET(2); }
/* USER32.dll!DeferWindowPos  (8 args) */
static void imp_DeferWindowPos(void) { IMPORT_STUB("DeferWindowPos"); RET(0); STDRET(8); }
/* USER32.dll!BeginDeferWindowPos  (1 args) */
static void imp_BeginDeferWindowPos(void) { IMPORT_STUB("BeginDeferWindowPos"); RET(0); STDRET(1); }
/* USER32.dll!EndDeferWindowPos  (1 args) */
static void imp_EndDeferWindowPos(void) { IMPORT_STUB("EndDeferWindowPos"); RET(0); STDRET(1); }
/* USER32.dll!IsWindowVisible  (1 args) */
static void imp_IsWindowVisible(void) { IMPORT_STUB("IsWindowVisible"); RET(0); STDRET(1); }
/* USER32.dll!ScrollWindow  (5 args) */
static void imp_ScrollWindow(void) { IMPORT_STUB("ScrollWindow"); RET(0); STDRET(5); }
/* USER32.dll!GetScrollInfo  (3 args) */
static void imp_GetScrollInfo(void) { IMPORT_STUB("GetScrollInfo"); RET(0); STDRET(3); }
/* USER32.dll!SetScrollInfo  (4 args) */
static void imp_SetScrollInfo(void) { IMPORT_STUB("SetScrollInfo"); RET(0); STDRET(4); }
/* USER32.dll!ShowScrollBar  (3 args) */
static void imp_ShowScrollBar(void) { IMPORT_STUB("ShowScrollBar"); RET(0); STDRET(3); }
/* USER32.dll!GetScrollRange  (4 args) */
static void imp_GetScrollRange(void) { IMPORT_STUB("GetScrollRange"); RET(0); STDRET(4); }
/* USER32.dll!ClientToScreen  (2 args) */
static void imp_ClientToScreen(void) { IMPORT_STUB("ClientToScreen"); RET(0); STDRET(2); }
/* USER32.dll!GetTabbedTextExtentA  (5 args) */
static void imp_GetTabbedTextExtentA(void) { IMPORT_STUB("GetTabbedTextExtentA"); RET(0); STDRET(5); }
/* USER32.dll!SetScrollPos  (4 args) */
static void imp_SetScrollPos(void) { IMPORT_STUB("SetScrollPos"); RET(0); STDRET(4); }
/* USER32.dll!IsWindowEnabled  (1 args) */
static void imp_IsWindowEnabled(void) { IMPORT_STUB("IsWindowEnabled"); RET(0); STDRET(1); }
/* USER32.dll!IsChild  (2 args) */
static void imp_IsChild(void) { IMPORT_STUB("IsChild"); RET(0); STDRET(2); }
/* USER32.dll!GetClassInfoA  (3 args) */
static void imp_GetClassInfoA(void) { IMPORT_STUB("GetClassInfoA"); RET(0); STDRET(3); }
extern void imp_RegisterClassA(void);  /* USER32.dll!RegisterClassA - hand-written in shims_impl.c */
/* USER32.dll!GetMenuItemCount  (1 args) */
static void imp_GetMenuItemCount(void) { IMPORT_STUB("GetMenuItemCount"); RET(0); STDRET(1); }
/* USER32.dll!TrackPopupMenu  (7 args) */
static void imp_TrackPopupMenu(void) { IMPORT_STUB("TrackPopupMenu"); RET(0); STDRET(7); }
/* USER32.dll!SetWindowPlacement  (2 args) */
static void imp_SetWindowPlacement(void) { IMPORT_STUB("SetWindowPlacement"); RET(0); STDRET(2); }
/* USER32.dll!GetWindowPlacement  (2 args) */
static void imp_GetWindowPlacement(void) { IMPORT_STUB("GetWindowPlacement"); RET(0); STDRET(2); }
/* USER32.dll!GetWindowTextLengthA  (1 args) */
static void imp_GetWindowTextLengthA(void) { IMPORT_STUB("GetWindowTextLengthA"); RET(0); STDRET(1); }
/* USER32.dll!InflateRect  (3 args) */
static void imp_InflateRect(void) { IMPORT_STUB("InflateRect"); RET(0); STDRET(3); }
/* USER32.dll!GetKeyState  (1 args) */
static void imp_GetKeyState(void) { IMPORT_STUB("GetKeyState"); RET(0); STDRET(1); }
/* USER32.dll!DefWindowProcA  (4 args) */
static void imp_DefWindowProcA(void) { IMPORT_STUB("DefWindowProcA"); RET(0); STDRET(4); }
/* USER32.dll!DestroyWindow  (1 args) */
static void imp_DestroyWindow(void) { IMPORT_STUB("DestroyWindow"); RET(0); STDRET(1); }
/* USER32.dll!CallNextHookEx  (4 args) */
static void imp_CallNextHookEx(void) { IMPORT_STUB("CallNextHookEx"); RET(0); STDRET(4); }
/* USER32.dll!UnhookWindowsHookEx  (1 args) */
static void imp_UnhookWindowsHookEx(void) { IMPORT_STUB("UnhookWindowsHookEx"); RET(0); STDRET(1); }
/* USER32.dll!SetWindowsHookExA  (4 args) */
static void imp_SetWindowsHookExA(void) { IMPORT_STUB("SetWindowsHookExA"); RET(0); STDRET(4); }
/* USER32.dll!SetPropA  (3 args) */
static void imp_SetPropA(void) { IMPORT_STUB("SetPropA"); RET(0); STDRET(3); }
/* USER32.dll!GetForegroundWindow  (0 args) */
static void imp_GetForegroundWindow(void) { IMPORT_STUB("GetForegroundWindow"); RET(0); STDRET(0); }
/* USER32.dll!GetPropA  (2 args) */
static void imp_GetPropA(void) { IMPORT_STUB("GetPropA"); RET(0); STDRET(2); }
/* USER32.dll!RemovePropA  (2 args) */
static void imp_RemovePropA(void) { IMPORT_STUB("RemovePropA"); RET(0); STDRET(2); }
/* USER32.dll!GetMessageTime  (0 args) */
static void imp_GetMessageTime(void) { IMPORT_STUB("GetMessageTime"); RET(0); STDRET(0); }
/* USER32.dll!ShowWindow  (2 args) */
static void imp_ShowWindow(void) { IMPORT_STUB("ShowWindow"); RET(0); STDRET(2); }
/* USER32.dll!MoveWindow  (6 args) */
static void imp_MoveWindow(void) { IMPORT_STUB("MoveWindow"); RET(0); STDRET(6); }
extern void imp_DialogBoxParamA(void);  /* USER32.dll!DialogBoxParamA - hand-written in shims_impl.c */
/* USER32.dll!GetKeyNameTextA  (3 args) */
static void imp_GetKeyNameTextA(void) { IMPORT_STUB("GetKeyNameTextA"); RET(0); STDRET(3); }
/* USER32.dll!WindowFromPoint  (2 args) */
static void imp_WindowFromPoint(void) { IMPORT_STUB("WindowFromPoint"); RET(0); STDRET(2); }
/* USER32.dll!GetDlgItem  (2 args) */
static void imp_GetDlgItem(void) { IMPORT_STUB("GetDlgItem"); RET(0); STDRET(2); }
/* USER32.dll!SetDlgItemTextA  (3 args) */
static void imp_SetDlgItemTextA(void) { IMPORT_STUB("SetDlgItemTextA"); RET(0); STDRET(3); }
/* USER32.dll!EndDialog  (2 args) */
static void imp_EndDialog(void) { IMPORT_STUB("EndDialog"); RET(0); STDRET(2); }
/* USER32.dll!CallWindowProcA  (5 args) */
static void imp_CallWindowProcA(void) { IMPORT_STUB("CallWindowProcA"); RET(0); STDRET(5); }
/* USER32.dll!GetTopWindow  (1 args) */
static void imp_GetTopWindow(void) { IMPORT_STUB("GetTopWindow"); RET(0); STDRET(1); }
/* USER32.dll!PtInRect  (3 args) */
static void imp_PtInRect(void) { IMPORT_STUB("PtInRect"); RET(0); STDRET(3); }
/* USER32.dll!LoadBitmapA  (2 args) */
static void imp_LoadBitmapA(void) { IMPORT_STUB("LoadBitmapA"); RET(1); STDRET(2); }
/* USER32.dll!OffsetRect  (3 args) */
static void imp_OffsetRect(void) { IMPORT_STUB("OffsetRect"); RET(0); STDRET(3); }
/* USER32.dll!SetRectEmpty  (1 args) */
static void imp_SetRectEmpty(void) { IMPORT_STUB("SetRectEmpty"); RET(0); STDRET(1); }
/* USER32.dll!SetTimer  (4 args) */
static void imp_SetTimer(void) { IMPORT_STUB("SetTimer"); RET(1); STDRET(4); }
/* USER32.dll!wsprintfA  (0 args) */
static void imp_wsprintfA(void) { IMPORT_STUB("wsprintfA"); RET(0); STDRET(0); }
/* USER32.dll!SetWindowPos  (7 args) */
static void imp_SetWindowPos(void) { IMPORT_STUB("SetWindowPos"); RET(0); STDRET(7); }
extern void imp_InvalidateRect(void);  /* USER32.dll!InvalidateRect - hand-written in shims_impl.c */
/* USER32.dll!SetRect  (5 args) */
static void imp_SetRect(void) { IMPORT_STUB("SetRect"); RET(0); STDRET(5); }
/* USER32.dll!SetWindowContextHelpId  (2 args) */
static void imp_SetWindowContextHelpId(void) { IMPORT_STUB("SetWindowContextHelpId"); RET(0); STDRET(2); }
/* USER32.dll!CopyRect  (2 args) */
static void imp_CopyRect(void) { IMPORT_STUB("CopyRect"); RET(0); STDRET(2); }
/* USER32.dll!GetWindow  (2 args) */
static void imp_GetWindow(void) { IMPORT_STUB("GetWindow"); RET(0); STDRET(2); }
/* USER32.dll!GetParent  (1 args) */
static void imp_GetParent(void) { IMPORT_STUB("GetParent"); RET(0); STDRET(1); }
/* USER32.dll!ScreenToClient  (2 args) */
static void imp_ScreenToClient(void) { IMPORT_STUB("ScreenToClient"); RET(0); STDRET(2); }
/* USER32.dll!WinHelpA  (4 args) */
static void imp_WinHelpA(void) { IMPORT_STUB("WinHelpA"); RET(0); STDRET(4); }
/* USER32.dll!KillTimer  (2 args) */
static void imp_KillTimer(void) { IMPORT_STUB("KillTimer"); RET(0); STDRET(2); }
/* USER32.dll!GetActiveWindow  (0 args) */
static void imp_GetActiveWindow(void) { IMPORT_STUB("GetActiveWindow"); RET(0); STDRET(0); }
/* USER32.dll!CharPrevA  (2 args) */
static void imp_CharPrevA(void) { IMPORT_STUB("CharPrevA"); RET(0); STDRET(2); }
/* USER32.dll!CharNextA  (1 args) */
static void imp_CharNextA(void) { IMPORT_STUB("CharNextA"); RET(0); STDRET(1); }
/* USER32.dll!UpdateWindow  (1 args) */
static void imp_UpdateWindow(void) { IMPORT_STUB("UpdateWindow"); RET(0); STDRET(1); }
/* USER32.dll!PostMessageA  (4 args) */
static void imp_PostMessageA(void) { IMPORT_STUB("PostMessageA"); RET(0); STDRET(4); }
/* USER32.dll!RedrawWindow  (4 args) */
static void imp_RedrawWindow(void) { IMPORT_STUB("RedrawWindow"); RET(0); STDRET(4); }
/* USER32.dll!DrawMenuBar  (1 args) */
static void imp_DrawMenuBar(void) { IMPORT_STUB("DrawMenuBar"); RET(0); STDRET(1); }
/* USER32.dll!SetFocus  (1 args) */
static void imp_SetFocus(void) { IMPORT_STUB("SetFocus"); RET(0); STDRET(1); }
/* USER32.dll!SetCursorPos  (2 args) */
static void imp_SetCursorPos(void) { IMPORT_STUB("SetCursorPos"); RET(0); STDRET(2); }
/* USER32.dll!SetCursor  (1 args) */
static void imp_SetCursor(void) { IMPORT_STUB("SetCursor"); RET(0); STDRET(1); }
extern void imp_PeekMessageA(void);  /* USER32.dll!PeekMessageA - hand-written in shims_impl.c */
/* USER32.dll!TranslateMessage  (1 args) */
static void imp_TranslateMessage(void) { IMPORT_STUB("TranslateMessage"); RET(0); STDRET(1); }
extern void imp_DispatchMessageA(void);  /* USER32.dll!DispatchMessageA - hand-written in shims_impl.c */
/* USER32.dll!SendMessageA  (4 args) */
static void imp_SendMessageA(void) { IMPORT_STUB("SendMessageA"); RET(0); STDRET(4); }
/* USER32.dll!SetWindowLongA  (3 args) */
static void imp_SetWindowLongA(void) { IMPORT_STUB("SetWindowLongA"); RET(0); STDRET(3); }
/* USER32.dll!GetDesktopWindow  (0 args) */
static void imp_GetDesktopWindow(void) { IMPORT_STUB("GetDesktopWindow"); RET(1); STDRET(0); }
/* USER32.dll!GetWindowRect  (2 args) */
static void imp_GetWindowRect(void) { IMPORT_STUB("GetWindowRect"); RET(0); STDRET(2); }
/* USER32.dll!LoadCursorA  (2 args) */
static void imp_LoadCursorA(void) { IMPORT_STUB("LoadCursorA"); RET(1); STDRET(2); }
/* USER32.dll!FindWindowA  (2 args) */
static void imp_FindWindowA(void) { IMPORT_STUB("FindWindowA"); RET(0); STDRET(2); }
/* USER32.dll!GetLastActivePopup  (1 args) */
static void imp_GetLastActivePopup(void) { IMPORT_STUB("GetLastActivePopup"); RET(0); STDRET(1); }
/* USER32.dll!IsIconic  (1 args) */
static void imp_IsIconic(void) { IMPORT_STUB("IsIconic"); RET(0); STDRET(1); }
/* USER32.dll!BringWindowToTop  (1 args) */
static void imp_BringWindowToTop(void) { IMPORT_STUB("BringWindowToTop"); RET(0); STDRET(1); }
/* USER32.dll!SetForegroundWindow  (1 args) */
static void imp_SetForegroundWindow(void) { IMPORT_STUB("SetForegroundWindow"); RET(0); STDRET(1); }
/* USER32.dll!GetMenu  (1 args) */
static void imp_GetMenu(void) { IMPORT_STUB("GetMenu"); RET(0); STDRET(1); }
/* USER32.dll!GetSubMenu  (2 args) */
static void imp_GetSubMenu(void) { IMPORT_STUB("GetSubMenu"); RET(0); STDRET(2); }
/* USER32.dll!GetMenuItemID  (2 args) */
static void imp_GetMenuItemID(void) { IMPORT_STUB("GetMenuItemID"); RET(0); STDRET(2); }
/* USER32.dll!ModifyMenuA  (5 args) */
static void imp_ModifyMenuA(void) { IMPORT_STUB("ModifyMenuA"); RET(0); STDRET(5); }
/* USER32.dll!EnableWindow  (2 args) */
static void imp_EnableWindow(void) { IMPORT_STUB("EnableWindow"); RET(0); STDRET(2); }
/* USER32.dll!GetClientRect  (2 args) */
static void imp_GetClientRect(void) { IMPORT_STUB("GetClientRect"); RET(0); STDRET(2); }
/* USER32.dll!GetWindowLongA  (2 args) */
static void imp_GetWindowLongA(void) { IMPORT_STUB("GetWindowLongA"); RET(0); STDRET(2); }
/* USER32.dll!GetSystemMetrics  (1 args) */
static void imp_GetSystemMetrics(void) { IMPORT_STUB("GetSystemMetrics"); RET(1); STDRET(1); }
extern void imp_CreateWindowExA(void);  /* USER32.dll!CreateWindowExA - hand-written in shims_impl.c */
extern void imp_GetDC(void);  /* USER32.dll!GetDC - hand-written in shims_impl.c */
extern void imp_ReleaseDC(void);  /* USER32.dll!ReleaseDC - hand-written in shims_impl.c */
extern void imp_MessageBoxA(void);  /* USER32.dll!MessageBoxA - hand-written in shims_impl.c */
/* USER32.dll!ShowCursor  (1 args) */
static void imp_ShowCursor(void) { IMPORT_STUB("ShowCursor"); RET(0); STDRET(1); }
/* USER32.dll!LoadMenuA  (2 args) */
static void imp_LoadMenuA(void) { IMPORT_STUB("LoadMenuA"); RET(1); STDRET(2); }
/* USER32.dll!DestroyMenu  (1 args) */
static void imp_DestroyMenu(void) { IMPORT_STUB("DestroyMenu"); RET(0); STDRET(1); }
extern void imp_LoadAcceleratorsA(void);  /* USER32.dll!LoadAcceleratorsA - hand-written in shims_impl.c */
/* USER32.dll!ReleaseCapture  (0 args) */
static void imp_ReleaseCapture(void) { IMPORT_STUB("ReleaseCapture"); RET(0); STDRET(0); }
extern void imp_TranslateAcceleratorA(void);  /* USER32.dll!TranslateAcceleratorA - hand-written in shims_impl.c */
/* USER32.dll!SetScrollRange  (5 args) */
static void imp_SetScrollRange(void) { IMPORT_STUB("SetScrollRange"); RET(0); STDRET(5); }
/* USER32.dll!GetCursorPos  (1 args) */
static void imp_GetCursorPos(void) { IMPORT_STUB("GetCursorPos"); RET(0); STDRET(1); }
/* USER32.dll!GetScrollPos  (2 args) */
static void imp_GetScrollPos(void) { IMPORT_STUB("GetScrollPos"); RET(0); STDRET(2); }
/* USER32.dll!GetDlgCtrlID  (1 args) */
static void imp_GetDlgCtrlID(void) { IMPORT_STUB("GetDlgCtrlID"); RET(0); STDRET(1); }
/* USER32.dll!GetWindowTextA  (3 args) */
static void imp_GetWindowTextA(void) { IMPORT_STUB("GetWindowTextA"); RET(0); STDRET(3); }
/* USER32.dll!GetMessagePos  (0 args) */
static void imp_GetMessagePos(void) { IMPORT_STUB("GetMessagePos"); RET(0); STDRET(0); }
/* USER32.dll!RegisterWindowMessageA  (1 args) */
static void imp_RegisterWindowMessageA(void) { IMPORT_STUB("RegisterWindowMessageA"); RET(0); STDRET(1); }
/* USER32.dll!GetCapture  (0 args) */
static void imp_GetCapture(void) { IMPORT_STUB("GetCapture"); RET(0); STDRET(0); }
extern void imp_timeGetTime(void);  /* WINMM.dll!timeGetTime - hand-written in shims_impl.c */
extern void imp_joyGetNumDevs(void);  /* WINMM.dll!joyGetNumDevs - hand-written in shims_impl.c */
/* WINMM.dll!waveOutOpen  (7 args) */
static void imp_waveOutOpen(void) { IMPORT_STUB("waveOutOpen"); RET(0); STDRET(7); }
/* WINMM.dll!mciSendCommandA  (4 args) */
static void imp_mciSendCommandA(void) { IMPORT_STUB("mciSendCommandA"); RET(0); STDRET(4); }
extern void imp_joyGetDevCapsA(void);  /* WINMM.dll!joyGetDevCapsA - hand-written in shims_impl.c */
extern void imp_joyGetPos(void);  /* WINMM.dll!joyGetPos - hand-written in shims_impl.c */
extern void imp_timeBeginPeriod(void);  /* WINMM.dll!timeBeginPeriod - hand-written in shims_impl.c */
extern void imp_timeEndPeriod(void);  /* WINMM.dll!timeEndPeriod - hand-written in shims_impl.c */
/* WINMM.dll!waveOutPrepareHeader  (3 args) */
static void imp_waveOutPrepareHeader(void) { IMPORT_STUB("waveOutPrepareHeader"); RET(0); STDRET(3); }
/* WINMM.dll!waveOutClose  (1 args) */
static void imp_waveOutClose(void) { IMPORT_STUB("waveOutClose"); RET(0); STDRET(1); }
/* WINMM.dll!waveOutUnprepareHeader  (3 args) */
static void imp_waveOutUnprepareHeader(void) { IMPORT_STUB("waveOutUnprepareHeader"); RET(0); STDRET(3); }
/* WINMM.dll!waveOutReset  (1 args) */
static void imp_waveOutReset(void) { IMPORT_STUB("waveOutReset"); RET(0); STDRET(1); }
/* WINMM.dll!waveOutGetDevCapsA  (3 args) */
static void imp_waveOutGetDevCapsA(void) { IMPORT_STUB("waveOutGetDevCapsA"); RET(0); STDRET(3); }
/* WINMM.dll!waveOutGetNumDevs  (0 args) */
static void imp_waveOutGetNumDevs(void) { IMPORT_STUB("waveOutGetNumDevs"); RET(0); STDRET(0); }
/* WINMM.dll!waveOutWrite  (3 args) */
static void imp_waveOutWrite(void) { IMPORT_STUB("waveOutWrite"); RET(0); STDRET(3); }
/* WINMM.dll!mciSendStringA  (4 args) */
static void imp_mciSendStringA(void) { IMPORT_STUB("mciSendStringA"); RET(0); STDRET(4); }
/* WINSPOOL.DRV!ClosePrinter  (1 args) */
static void imp_ClosePrinter(void) { IMPORT_STUB("ClosePrinter"); RET(0); STDRET(1); }
/* WINSPOOL.DRV!OpenPrinterA  (3 args) */
static void imp_OpenPrinterA(void) { IMPORT_STUB("OpenPrinterA"); RET(0); STDRET(3); }
/* WINSPOOL.DRV!DocumentPropertiesA  (6 args) */
static void imp_DocumentPropertiesA(void) { IMPORT_STUB("DocumentPropertiesA"); RET(0); STDRET(6); }
/* comdlg32.dll!GetFileTitleA  (3 args) */
static void imp_GetFileTitleA(void) { IMPORT_STUB("GetFileTitleA"); RET(0); STDRET(3); }
/* comdlg32.dll!PageSetupDlgA  (1 args) */
static void imp_PageSetupDlgA(void) { IMPORT_STUB("PageSetupDlgA"); RET(0); STDRET(1); }
/* comdlg32.dll!GetOpenFileNameA  (1 args) */
static void imp_GetOpenFileNameA(void) { IMPORT_STUB("GetOpenFileNameA"); RET(0); STDRET(1); }
/* comdlg32.dll!GetSaveFileNameA  (1 args) */
static void imp_GetSaveFileNameA(void) { IMPORT_STUB("GetSaveFileNameA"); RET(0); STDRET(1); }
/* comdlg32.dll!PrintDlgA  (1 args) */
static void imp_PrintDlgA(void) { IMPORT_STUB("PrintDlgA"); RET(0); STDRET(1); }
/* comdlg32.dll!CommDlgExtendedError  (0 args) */
static void imp_CommDlgExtendedError(void) { IMPORT_STUB("CommDlgExtendedError"); RET(0); STDRET(0); }
/* smackw32.dll!ordinal_9  (4 args) */
static void imp_ordinal_9(void) { IMPORT_STUB("ordinal_9"); RET(0); STDRET(4); }
/* smackw32.dll!ordinal_15  (3 args) */
static void imp_ordinal_15(void) { IMPORT_STUB("ordinal_15"); RET(0); STDRET(3); }
/* smackw32.dll!ordinal_22  (0 args) */
static void imp_ordinal_22(void) { IMPORT_STUB("ordinal_22"); RET(0); STDRET(0); }
/* smackw32.dll!ordinal_7  (8 args) */
static void imp_ordinal_7(void) { IMPORT_STUB("ordinal_7"); RET(0); STDRET(8); }
/* smackw32.dll!ordinal_1  (0 args) */
static void imp_ordinal_1(void) { IMPORT_STUB("ordinal_1"); RET(0); STDRET(0); }
/* smackw32.dll!ordinal_10  (4 args) */
static void imp_ordinal_10(void) { IMPORT_STUB("ordinal_10"); RET(0); STDRET(4); }
/* smackw32.dll!ordinal_8  (5 args) */
static void imp_ordinal_8(void) { IMPORT_STUB("ordinal_8"); RET(0); STDRET(5); }
/* smackw32.dll!ordinal_28  (0 args) */
static void imp_ordinal_28(void) { IMPORT_STUB("ordinal_28"); RET(0); STDRET(0); }
/* smackw32.dll!ordinal_32  (0 args) */
static void imp_ordinal_32(void) { IMPORT_STUB("ordinal_32"); RET(0); STDRET(0); }
/* smackw32.dll!ordinal_21  (0 args) */
static void imp_ordinal_21(void) { IMPORT_STUB("ordinal_21"); RET(0); STDRET(0); }
/* smackw32.dll!ordinal_3  (3 args) */
static void imp_ordinal_3(void) { IMPORT_STUB("ordinal_3"); RET(0); STDRET(3); }

const recomp_dispatch_entry_t fury3_import_bridges[] = {
    { 0x0087991Cu, imp_RegCloseKey },
    { 0x00879920u, imp_RegQueryValueExA },
    { 0x00879924u, imp_RegSetValueA },
    { 0x00879928u, imp_RegEnumValueA },
    { 0x0087992Cu, imp_RegSetValueExA },
    { 0x00879930u, imp_SetFileSecurityA },
    { 0x00879934u, imp_GetFileSecurityA },
    { 0x00879938u, imp_RegOpenKeyA },
    { 0x0087993Cu, imp_RegQueryValueA },
    { 0x00879940u, imp_RegDeleteKeyA },
    { 0x00879944u, imp_RegDeleteValueA },
    { 0x00879948u, imp_RegOpenKeyExA },
    { 0x0087994Cu, imp_RegCreateKeyA },
    { 0x00879950u, imp_RegCreateKeyExA },
    { 0x00879958u, imp_ImageList_Create },
    { 0x0087995Cu, imp_ImageList_Merge },
    { 0x00879960u, imp_ImageList_LoadImageA },
    { 0x00879964u, imp_DestroyPropertySheetPage },
    { 0x00879968u, imp_PropertySheetA },
    { 0x0087996Cu, imp_ordinal_17 },
    { 0x00879970u, imp_ImageList_Read },
    { 0x00879974u, imp_ImageList_Write },
    { 0x00879978u, imp_ordinal_13 },
    { 0x0087997Cu, imp_CreatePropertySheetPageA },
    { 0x00879980u, imp_ImageList_Destroy },
    { 0x00879984u, imp_ordinal_14 },
    { 0x0087998Cu, imp_DirectDrawEnumerateA },
    { 0x00879990u, imp_DirectDrawCreate },
    { 0x00879998u, imp_CombineRgn },
    { 0x0087999Cu, imp_GetMapMode },
    { 0x008799A0u, imp_SetRectRgn },
    { 0x008799A4u, imp_GetDeviceCaps },
    { 0x008799A8u, imp_BitBlt },
    { 0x008799ACu, imp_RealizePalette },
    { 0x008799B0u, imp_SetStretchBltMode },
    { 0x008799B4u, imp_DeleteObject },
    { 0x008799B8u, imp_CreatePalette },
    { 0x008799BCu, imp_PatBlt },
    { 0x008799C0u, imp_SetPaletteEntries },
    { 0x008799C4u, imp_ResizePalette },
    { 0x008799C8u, imp_GetObjectA },
    { 0x008799CCu, imp_SetSystemPaletteUse },
    { 0x008799D0u, imp_GetPaletteEntries },
    { 0x008799D4u, imp_SelectPalette },
    { 0x008799D8u, imp_GetDIBColorTable },
    { 0x008799DCu, imp_CreateCompatibleDC },
    { 0x008799E0u, imp_SetDIBColorTable },
    { 0x008799E4u, imp_CreateFontA },
    { 0x008799E8u, imp_Rectangle },
    { 0x008799ECu, imp_CreateDIBSection },
    { 0x008799F0u, imp_CreateBrushIndirect },
    { 0x008799F4u, imp_MaskBlt },
    { 0x008799F8u, imp_CreatePen },
    { 0x008799FCu, imp_GetSystemPaletteEntries },
    { 0x00879A00u, imp_DeleteDC },
    { 0x00879A04u, imp_GetTextMetricsA },
    { 0x00879A08u, imp_GetTextExtentPointA },
    { 0x00879A0Cu, imp_SetTextColor },
    { 0x00879A10u, imp_SetBkColor },
    { 0x00879A14u, imp_GetStockObject },
    { 0x00879A18u, imp_DPtoLP },
    { 0x00879A1Cu, imp_GetViewportOrgEx },
    { 0x00879A20u, imp_EndDoc },
    { 0x00879A24u, imp_AbortDoc },
    { 0x00879A28u, imp_StartPage },
    { 0x00879A2Cu, imp_StartDocA },
    { 0x00879A30u, imp_EndPage },
    { 0x00879A34u, imp_CreateDCA },
    { 0x00879A38u, imp_CreateBitmap },
    { 0x00879A3Cu, imp_SetAbortProc },
    { 0x00879A40u, imp_RestoreDC },
    { 0x00879A44u, imp_SetBkMode },
    { 0x00879A48u, imp_SaveDC },
    { 0x00879A4Cu, imp_StretchBlt },
    { 0x00879A50u, imp_SetROP2 },
    { 0x00879A54u, imp_SetMapMode },
    { 0x00879A58u, imp_SetViewportOrgEx },
    { 0x00879A5Cu, imp_OffsetViewportOrgEx },
    { 0x00879A60u, imp_SetViewportExtEx },
    { 0x00879A64u, imp_ScaleViewportExtEx },
    { 0x00879A68u, imp_SetWindowOrgEx },
    { 0x00879A6Cu, imp_OffsetWindowOrgEx },
    { 0x00879A70u, imp_SetWindowExtEx },
    { 0x00879A74u, imp_ScaleWindowExtEx },
    { 0x00879A78u, imp_GetClipBox },
    { 0x00879A7Cu, imp_SelectClipRgn },
    { 0x00879A80u, imp_ExcludeClipRect },
    { 0x00879A84u, imp_IntersectClipRect },
    { 0x00879A88u, imp_OffsetClipRgn },
    { 0x00879A8Cu, imp_MoveToEx },
    { 0x00879A90u, imp_LineTo },
    { 0x00879A94u, imp_SetTextAlign },
    { 0x00879A98u, imp_SetTextJustification },
    { 0x00879A9Cu, imp_SetTextCharacterExtra },
    { 0x00879AA0u, imp_SetMapperFlags },
    { 0x00879AA4u, imp_GetCurrentPositionEx },
    { 0x00879AA8u, imp_ArcTo },
    { 0x00879AACu, imp_SetArcDirection },
    { 0x00879AB0u, imp_PolyDraw },
    { 0x00879AB4u, imp_PolylineTo },
    { 0x00879AB8u, imp_SetColorAdjustment },
    { 0x00879ABCu, imp_PolyBezierTo },
    { 0x00879AC0u, imp_GetClipRgn },
    { 0x00879AC4u, imp_CreateRectRgn },
    { 0x00879AC8u, imp_SelectClipPath },
    { 0x00879ACCu, imp_ExtSelectClipRgn },
    { 0x00879AD0u, imp_GetObjectType },
    { 0x00879AD4u, imp_PlayMetaFileRecord },
    { 0x00879AD8u, imp_EnumMetaFile },
    { 0x00879ADCu, imp_PlayMetaFile },
    { 0x00879AE0u, imp_GetViewportExtEx },
    { 0x00879AE4u, imp_GetWindowExtEx },
    { 0x00879AE8u, imp_ExtCreatePen },
    { 0x00879AECu, imp_CreateSolidBrush },
    { 0x00879AF0u, imp_CreateHatchBrush },
    { 0x00879AF4u, imp_CreatePatternBrush },
    { 0x00879AF8u, imp_CreateDIBPatternBrushPt },
    { 0x00879AFCu, imp_PtVisible },
    { 0x00879B00u, imp_RectVisible },
    { 0x00879B04u, imp_TextOutA },
    { 0x00879B08u, imp_ExtTextOutA },
    { 0x00879B0Cu, imp_Escape },
    { 0x00879B10u, imp_LPtoDP },
    { 0x00879B14u, imp_CreateRectRgnIndirect },
    { 0x00879B18u, imp_GetNearestColor },
    { 0x00879B1Cu, imp_GetBkColor },
    { 0x00879B20u, imp_GetTextColor },
    { 0x00879B24u, imp_GetStretchBltMode },
    { 0x00879B28u, imp_GetPolyFillMode },
    { 0x00879B2Cu, imp_GetTextAlign },
    { 0x00879B30u, imp_GetBkMode },
    { 0x00879B34u, imp_GetROP2 },
    { 0x00879B38u, imp_CreateFontIndirectA },
    { 0x00879B3Cu, imp_GetTextFaceA },
    { 0x00879B40u, imp_GetCharWidthA },
    { 0x00879B44u, imp_SelectObject },
    { 0x00879B48u, imp_SetPolyFillMode },
    { 0x00879B4Cu, imp_GetWindowOrgEx },
    { 0x00879B54u, imp_FreeLibrary },
    { 0x00879B58u, imp_InterlockedDecrement },
    { 0x00879B5Cu, imp_GetFileAttributesA },
    { 0x00879B60u, imp_SetFileTime },
    { 0x00879B64u, imp_InterlockedIncrement },
    { 0x00879B68u, imp_VirtualProtect },
    { 0x00879B6Cu, imp_lstrcmpiA },
    { 0x00879B70u, imp_GetFileTime },
    { 0x00879B74u, imp_GetDiskFreeSpaceA },
    { 0x00879B78u, imp_GlobalFlags },
    { 0x00879B7Cu, imp_GlobalHandle },
    { 0x00879B80u, imp_GlobalReAlloc },
    { 0x00879B84u, imp_LocalReAlloc },
    { 0x00879B88u, imp_GetProcessVersion },
    { 0x00879B8Cu, imp_GetTempFileNameA },
    { 0x00879B90u, imp_SuspendThread },
    { 0x00879B94u, imp_GetFullPathNameA },
    { 0x00879B98u, imp_ResumeThread },
    { 0x00879B9Cu, imp_FindClose },
    { 0x00879BA0u, imp_FindFirstFileA },
    { 0x00879BA4u, imp_GetVolumeInformationA },
    { 0x00879BA8u, imp_GetStringTypeExA },
    { 0x00879BACu, imp_GetThreadLocale },
    { 0x00879BB0u, imp_GetShortPathNameA },
    { 0x00879BB4u, imp_SizeofResource },
    { 0x00879BB8u, imp_GetFileSize },
    { 0x00879BBCu, imp_LocalFileTimeToFileTime },
    { 0x00879BC0u, imp_SystemTimeToFileTime },
    { 0x00879BC4u, imp_SetFileAttributesA },
    { 0x00879BC8u, imp_FormatMessageA },
    { 0x00879BCCu, imp_SetErrorMode },
    { 0x00879BD0u, imp_FileTimeToSystemTime },
    { 0x00879BD4u, imp_FileTimeToLocalFileTime },
    { 0x00879BD8u, imp_SetEvent },
    { 0x00879BDCu, imp_GlobalDeleteAtom },
    { 0x00879BE0u, imp_GlobalUnlock },
    { 0x00879BE4u, imp_GlobalGetAtomNameA },
    { 0x00879BE8u, imp_GlobalAddAtomA },
    { 0x00879BECu, imp_MulDiv },
    { 0x00879BF0u, imp_SetEnvironmentVariableA },
    { 0x00879BF4u, imp_CompareStringW },
    { 0x00879BF8u, imp_CompareStringA },
    { 0x00879BFCu, imp_GetTimeZoneInformation },
    { 0x00879C00u, imp_RaiseException },
    { 0x00879C04u, imp_SetEndOfFile },
    { 0x00879C08u, imp_GetLocaleInfoW },
    { 0x00879C0Cu, imp_GetLocaleInfoA },
    { 0x00879C10u, imp_SetConsoleCtrlHandler },
    { 0x00879C14u, imp_IsBadCodePtr },
    { 0x00879C18u, imp_IsBadReadPtr },
    { 0x00879C1Cu, imp_SetUnhandledExceptionFilter },
    { 0x00879C20u, imp_GetUserDefaultLCID },
    { 0x00879C24u, imp_IsValidCodePage },
    { 0x00879C28u, imp_IsValidLocale },
    { 0x00879C2Cu, imp_SetStdHandle },
    { 0x00879C30u, imp_GetEnvironmentStringsW },
    { 0x00879C34u, imp_FreeEnvironmentStringsW },
    { 0x00879C38u, imp_GetEnvironmentStrings },
    { 0x00879C3Cu, imp_FreeEnvironmentStringsA },
    { 0x00879C40u, imp_UnhandledExceptionFilter },
    { 0x00879C44u, imp_GetStdHandle },
    { 0x00879C48u, imp_GetFileType },
    { 0x00879C4Cu, imp_SetHandleCount },
    { 0x00879C50u, imp_GetOEMCP },
    { 0x00879C54u, imp_GetACP },
    { 0x00879C58u, imp_GetCPInfo },
    { 0x00879C5Cu, imp_HeapSize },
    { 0x00879C60u, imp_HeapReAlloc },
    { 0x00879C64u, imp_GetCurrentProcess },
    { 0x00879C68u, imp_TerminateProcess },
    { 0x00879C6Cu, imp_SetFilePointer },
    { 0x00879C70u, imp_GetStringTypeW },
    { 0x00879C74u, imp_GetStringTypeA },
    { 0x00879C78u, imp_HeapDestroy },
    { 0x00879C7Cu, imp_HeapCreate },
    { 0x00879C80u, imp_FlushFileBuffers },
    { 0x00879C84u, imp_ReadFile },
    { 0x00879C88u, imp_LCMapStringW },
    { 0x00879C8Cu, imp_WideCharToMultiByte },
    { 0x00879C90u, imp_LCMapStringA },
    { 0x00879C94u, imp_MultiByteToWideChar },
    { 0x00879C98u, imp_FatalAppExitA },
    { 0x00879C9Cu, imp_GetCurrentThread },
    { 0x00879CA0u, imp_TlsGetValue },
    { 0x00879CA4u, imp_SetLastError },
    { 0x00879CA8u, imp_TlsFree },
    { 0x00879CACu, imp_TlsAlloc },
    { 0x00879CB0u, imp_TlsSetValue },
    { 0x00879CB4u, imp_GetCurrentThreadId },
    { 0x00879CB8u, imp_GetCommandLineA },
    { 0x00879CBCu, imp_GetStartupInfoA },
    { 0x00879CC0u, imp_RtlUnwind },
    { 0x00879CC4u, imp_HeapFree },
    { 0x00879CC8u, imp_EnterCriticalSection },
    { 0x00879CCCu, imp_HeapAlloc },
    { 0x00879CD0u, imp_lstrcatA },
    { 0x00879CD4u, imp_DeleteFileA },
    { 0x00879CD8u, imp_LocalAlloc },
    { 0x00879CDCu, imp_LeaveCriticalSection },
    { 0x00879CE0u, imp_LocalFree },
    { 0x00879CE4u, imp_IsBadWritePtr },
    { 0x00879CE8u, imp_DeleteCriticalSection },
    { 0x00879CECu, imp_InitializeCriticalSection },
    { 0x00879CF0u, imp_GlobalFree },
    { 0x00879CF4u, imp_WaitForSingleObject },
    { 0x00879CF8u, imp_CreateEventA },
    { 0x00879CFCu, imp_GlobalAlloc },
    { 0x00879D00u, imp_GetSystemTime },
    { 0x00879D04u, imp_GlobalLock },
    { 0x00879D08u, imp_lstrcpynA },
    { 0x00879D0Cu, imp_Sleep },
    { 0x00879D10u, imp_QueryPerformanceFrequency },
    { 0x00879D14u, imp_GetModuleHandleA },
    { 0x00879D18u, imp_lstrcmpA },
    { 0x00879D1Cu, imp_ExitProcess },
    { 0x00879D20u, imp_CreateThread },
    { 0x00879D24u, imp_lstrlenA },
    { 0x00879D28u, imp_LoadLibraryA },
    { 0x00879D2Cu, imp_GetProcAddress },
    { 0x00879D30u, imp_GetCurrentDirectoryA },
    { 0x00879D34u, imp_SetThreadPriority },
    { 0x00879D38u, imp_GlobalMemoryStatus },
    { 0x00879D3Cu, imp_CreateSemaphoreA },
    { 0x00879D40u, imp_GetModuleFileNameA },
    { 0x00879D44u, imp_SetCurrentDirectoryA },
    { 0x00879D48u, imp_FindResourceA },
    { 0x00879D4Cu, imp_GetLastError },
    { 0x00879D50u, imp_GetVersion },
    { 0x00879D54u, imp_LoadModule },
    { 0x00879D58u, imp_LoadResource },
    { 0x00879D5Cu, imp_LockResource },
    { 0x00879D60u, imp_GetPrivateProfileIntA },
    { 0x00879D64u, imp_WritePrivateProfileStringA },
    { 0x00879D68u, imp_GetPrivateProfileStringA },
    { 0x00879D6Cu, imp_WriteFile },
    { 0x00879D70u, imp_CreateFileA },
    { 0x00879D74u, imp_CloseHandle },
    { 0x00879D78u, imp_UnlockFile },
    { 0x00879D7Cu, imp_lstrcpyA },
    { 0x00879D80u, imp_MoveFileA },
    { 0x00879D84u, imp_DuplicateHandle },
    { 0x00879D88u, imp_LockFile },
    { 0x00879D8Cu, imp_GetLocalTime },
    { 0x00879D90u, imp_GetDriveTypeA },
    { 0x00879D94u, imp_CreateDirectoryA },
    { 0x00879D98u, imp_ExitThread },
    { 0x00879DA0u, imp_DragAcceptFiles },
    { 0x00879DA4u, imp_DragFinish },
    { 0x00879DA8u, imp_DragQueryFileA },
    { 0x00879DACu, imp_SHGetFileInfoA },
    { 0x00879DB0u, imp_ShellExecuteA },
    { 0x00879DB4u, imp_ExtractIconA },
    { 0x00879DBCu, imp_GetNextDlgTabItem },
    { 0x00879DC0u, imp_CheckDlgButton },
    { 0x00879DC4u, imp_CreateDialogIndirectParamA },
    { 0x00879DC8u, imp_UnpackDDElParam },
    { 0x00879DCCu, imp_CheckRadioButton },
    { 0x00879DD0u, imp_GetDlgItemTextA },
    { 0x00879DD4u, imp_SetDlgItemInt },
    { 0x00879DD8u, imp_IsDlgButtonChecked },
    { 0x00879DDCu, imp_ScrollWindowEx },
    { 0x00879DE0u, imp_GetDlgItemInt },
    { 0x00879DE4u, imp_IsDialogMessageA },
    { 0x00879DE8u, imp_EnableMenuItem },
    { 0x00879DECu, imp_CheckMenuItem },
    { 0x00879DF0u, imp_SetMenuItemBitmaps },
    { 0x00879DF4u, imp_GetMenuState },
    { 0x00879DF8u, imp_GetMenuCheckMarkDimensions },
    { 0x00879DFCu, imp_GetWindowDC },
    { 0x00879E00u, imp_SetMenu },
    { 0x00879E04u, imp_ReuseDDElParam },
    { 0x00879E08u, imp_TabbedTextOutA },
    { 0x00879E0Cu, imp_SetWindowTextA },
    { 0x00879E10u, imp_GrayStringA },
    { 0x00879E14u, imp_PostQuitMessage },
    { 0x00879E18u, imp_EndPaint },
    { 0x00879E1Cu, imp_ValidateRect },
    { 0x00879E20u, imp_GetMessageA },
    { 0x00879E24u, imp_ShowOwnedPopups },
    { 0x00879E28u, imp_CharUpperA },
    { 0x00879E2Cu, imp_CharLowerA },
    { 0x00879E30u, imp_CharToOemA },
    { 0x00879E34u, imp_OemToCharA },
    { 0x00879E38u, imp_LoadStringA },
    { 0x00879E3Cu, imp_DefFrameProcA },
    { 0x00879E40u, imp_TranslateMDISysAccel },
    { 0x00879E44u, imp_DefMDIChildProcA },
    { 0x00879E48u, imp_wvsprintfA },
    { 0x00879E4Cu, imp_GetAsyncKeyState },
    { 0x00879E50u, imp_MapDialogRect },
    { 0x00879E54u, imp_BeginPaint },
    { 0x00879E58u, imp_DrawTextA },
    { 0x00879E5Cu, imp_SetCapture },
    { 0x00879E60u, imp_WaitMessage },
    { 0x00879E64u, imp_GetWindowThreadProcessId },
    { 0x00879E68u, imp_GetClassNameA },
    { 0x00879E6Cu, imp_SetMessageQueue },
    { 0x00879E70u, imp_GetDialogBaseUnits },
    { 0x00879E74u, imp_InsertMenuA },
    { 0x00879E78u, imp_DeleteMenu },
    { 0x00879E7Cu, imp_GetMenuStringA },
    { 0x00879E80u, imp_DestroyIcon },
    { 0x00879E84u, imp_IsRectEmpty },
    { 0x00879E88u, imp_GetDCEx },
    { 0x00879E8Cu, imp_LockWindowUpdate },
    { 0x00879E90u, imp_IntersectRect },
    { 0x00879E94u, imp_SetParent },
    { 0x00879E98u, imp_AppendMenuA },
    { 0x00879E9Cu, imp_GetSystemMenu },
    { 0x00879EA0u, imp_InvertRect },
    { 0x00879EA4u, imp_UnregisterClassA },
    { 0x00879EA8u, imp_FillRect },
    { 0x00879EACu, imp_DestroyCursor },
    { 0x00879EB0u, imp_LoadIconA },
    { 0x00879EB4u, imp_SendDlgItemMessageA },
    { 0x00879EB8u, imp_SystemParametersInfoA },
    { 0x00879EBCu, imp_MapWindowPoints },
    { 0x00879EC0u, imp_GetSysColor },
    { 0x00879EC4u, imp_GetFocus },
    { 0x00879EC8u, imp_SetActiveWindow },
    { 0x00879ECCu, imp_IsWindow },
    { 0x00879ED0u, imp_AdjustWindowRectEx },
    { 0x00879ED4u, imp_EqualRect },
    { 0x00879ED8u, imp_DeferWindowPos },
    { 0x00879EDCu, imp_BeginDeferWindowPos },
    { 0x00879EE0u, imp_EndDeferWindowPos },
    { 0x00879EE4u, imp_IsWindowVisible },
    { 0x00879EE8u, imp_ScrollWindow },
    { 0x00879EECu, imp_GetScrollInfo },
    { 0x00879EF0u, imp_SetScrollInfo },
    { 0x00879EF4u, imp_ShowScrollBar },
    { 0x00879EF8u, imp_GetScrollRange },
    { 0x00879EFCu, imp_ClientToScreen },
    { 0x00879F00u, imp_GetTabbedTextExtentA },
    { 0x00879F04u, imp_SetScrollPos },
    { 0x00879F08u, imp_IsWindowEnabled },
    { 0x00879F0Cu, imp_IsChild },
    { 0x00879F10u, imp_GetClassInfoA },
    { 0x00879F14u, imp_RegisterClassA },
    { 0x00879F18u, imp_GetMenuItemCount },
    { 0x00879F1Cu, imp_TrackPopupMenu },
    { 0x00879F20u, imp_SetWindowPlacement },
    { 0x00879F24u, imp_GetWindowPlacement },
    { 0x00879F28u, imp_GetWindowTextLengthA },
    { 0x00879F2Cu, imp_InflateRect },
    { 0x00879F30u, imp_GetKeyState },
    { 0x00879F34u, imp_DefWindowProcA },
    { 0x00879F38u, imp_DestroyWindow },
    { 0x00879F3Cu, imp_CallNextHookEx },
    { 0x00879F40u, imp_UnhookWindowsHookEx },
    { 0x00879F44u, imp_SetWindowsHookExA },
    { 0x00879F48u, imp_SetPropA },
    { 0x00879F4Cu, imp_GetForegroundWindow },
    { 0x00879F50u, imp_GetPropA },
    { 0x00879F54u, imp_RemovePropA },
    { 0x00879F58u, imp_GetMessageTime },
    { 0x00879F5Cu, imp_ShowWindow },
    { 0x00879F60u, imp_MoveWindow },
    { 0x00879F64u, imp_DialogBoxParamA },
    { 0x00879F68u, imp_GetKeyNameTextA },
    { 0x00879F6Cu, imp_WindowFromPoint },
    { 0x00879F70u, imp_GetDlgItem },
    { 0x00879F74u, imp_SetDlgItemTextA },
    { 0x00879F78u, imp_EndDialog },
    { 0x00879F7Cu, imp_CallWindowProcA },
    { 0x00879F80u, imp_GetTopWindow },
    { 0x00879F84u, imp_PtInRect },
    { 0x00879F88u, imp_LoadBitmapA },
    { 0x00879F8Cu, imp_OffsetRect },
    { 0x00879F90u, imp_SetRectEmpty },
    { 0x00879F94u, imp_SetTimer },
    { 0x00879F98u, imp_wsprintfA },
    { 0x00879F9Cu, imp_SetWindowPos },
    { 0x00879FA0u, imp_InvalidateRect },
    { 0x00879FA4u, imp_SetRect },
    { 0x00879FA8u, imp_SetWindowContextHelpId },
    { 0x00879FACu, imp_CopyRect },
    { 0x00879FB0u, imp_GetWindow },
    { 0x00879FB4u, imp_GetParent },
    { 0x00879FB8u, imp_ScreenToClient },
    { 0x00879FBCu, imp_WinHelpA },
    { 0x00879FC0u, imp_KillTimer },
    { 0x00879FC4u, imp_GetActiveWindow },
    { 0x00879FC8u, imp_CharPrevA },
    { 0x00879FCCu, imp_CharNextA },
    { 0x00879FD0u, imp_UpdateWindow },
    { 0x00879FD4u, imp_PostMessageA },
    { 0x00879FD8u, imp_RedrawWindow },
    { 0x00879FDCu, imp_DrawMenuBar },
    { 0x00879FE0u, imp_SetFocus },
    { 0x00879FE4u, imp_SetCursorPos },
    { 0x00879FE8u, imp_SetCursor },
    { 0x00879FECu, imp_PeekMessageA },
    { 0x00879FF0u, imp_TranslateMessage },
    { 0x00879FF4u, imp_DispatchMessageA },
    { 0x00879FF8u, imp_SendMessageA },
    { 0x00879FFCu, imp_SetWindowLongA },
    { 0x0087A000u, imp_GetDesktopWindow },
    { 0x0087A004u, imp_GetWindowRect },
    { 0x0087A008u, imp_LoadCursorA },
    { 0x0087A00Cu, imp_FindWindowA },
    { 0x0087A010u, imp_GetLastActivePopup },
    { 0x0087A014u, imp_IsIconic },
    { 0x0087A018u, imp_BringWindowToTop },
    { 0x0087A01Cu, imp_SetForegroundWindow },
    { 0x0087A020u, imp_GetMenu },
    { 0x0087A024u, imp_GetSubMenu },
    { 0x0087A028u, imp_GetMenuItemID },
    { 0x0087A02Cu, imp_ModifyMenuA },
    { 0x0087A030u, imp_EnableWindow },
    { 0x0087A034u, imp_GetClientRect },
    { 0x0087A038u, imp_GetWindowLongA },
    { 0x0087A03Cu, imp_GetSystemMetrics },
    { 0x0087A040u, imp_CreateWindowExA },
    { 0x0087A044u, imp_GetDC },
    { 0x0087A048u, imp_ReleaseDC },
    { 0x0087A04Cu, imp_MessageBoxA },
    { 0x0087A050u, imp_ShowCursor },
    { 0x0087A054u, imp_LoadMenuA },
    { 0x0087A058u, imp_DestroyMenu },
    { 0x0087A05Cu, imp_LoadAcceleratorsA },
    { 0x0087A060u, imp_ReleaseCapture },
    { 0x0087A064u, imp_TranslateAcceleratorA },
    { 0x0087A068u, imp_SetScrollRange },
    { 0x0087A06Cu, imp_GetCursorPos },
    { 0x0087A070u, imp_GetScrollPos },
    { 0x0087A074u, imp_GetDlgCtrlID },
    { 0x0087A078u, imp_GetWindowTextA },
    { 0x0087A07Cu, imp_GetMessagePos },
    { 0x0087A080u, imp_RegisterWindowMessageA },
    { 0x0087A084u, imp_GetCapture },
    { 0x0087A08Cu, imp_timeGetTime },
    { 0x0087A090u, imp_joyGetNumDevs },
    { 0x0087A094u, imp_waveOutOpen },
    { 0x0087A098u, imp_mciSendCommandA },
    { 0x0087A09Cu, imp_joyGetDevCapsA },
    { 0x0087A0A0u, imp_joyGetPos },
    { 0x0087A0A4u, imp_timeBeginPeriod },
    { 0x0087A0A8u, imp_timeEndPeriod },
    { 0x0087A0ACu, imp_waveOutPrepareHeader },
    { 0x0087A0B0u, imp_waveOutClose },
    { 0x0087A0B4u, imp_waveOutUnprepareHeader },
    { 0x0087A0B8u, imp_waveOutReset },
    { 0x0087A0BCu, imp_waveOutGetDevCapsA },
    { 0x0087A0C0u, imp_waveOutGetNumDevs },
    { 0x0087A0C4u, imp_waveOutWrite },
    { 0x0087A0C8u, imp_mciSendStringA },
    { 0x0087A0D0u, imp_ClosePrinter },
    { 0x0087A0D4u, imp_OpenPrinterA },
    { 0x0087A0D8u, imp_DocumentPropertiesA },
    { 0x0087A0E0u, imp_GetFileTitleA },
    { 0x0087A0E4u, imp_PageSetupDlgA },
    { 0x0087A0E8u, imp_GetOpenFileNameA },
    { 0x0087A0ECu, imp_GetSaveFileNameA },
    { 0x0087A0F0u, imp_PrintDlgA },
    { 0x0087A0F4u, imp_CommDlgExtendedError },
    { 0x0087A0FCu, imp_ordinal_9 },
    { 0x0087A100u, imp_ordinal_15 },
    { 0x0087A104u, imp_ordinal_22 },
    { 0x0087A108u, imp_ordinal_7 },
    { 0x0087A10Cu, imp_ordinal_1 },
    { 0x0087A110u, imp_ordinal_10 },
    { 0x0087A114u, imp_ordinal_14 },
    { 0x0087A118u, imp_ordinal_8 },
    { 0x0087A11Cu, imp_ordinal_28 },
    { 0x0087A120u, imp_ordinal_17 },
    { 0x0087A124u, imp_ordinal_32 },
    { 0x0087A128u, imp_ordinal_21 },
    { 0x0087A12Cu, imp_ordinal_3 },
};
const uint32_t fury3_import_bridge_count = 507;

/* IAT slot VAs to self-patch so RECOMP_ITAIL(MEM32(slot)) resolves. */
const uint32_t fury3_iat_slots[] = {
    0x0087991Cu,
    0x00879920u,
    0x00879924u,
    0x00879928u,
    0x0087992Cu,
    0x00879930u,
    0x00879934u,
    0x00879938u,
    0x0087993Cu,
    0x00879940u,
    0x00879944u,
    0x00879948u,
    0x0087994Cu,
    0x00879950u,
    0x00879958u,
    0x0087995Cu,
    0x00879960u,
    0x00879964u,
    0x00879968u,
    0x0087996Cu,
    0x00879970u,
    0x00879974u,
    0x00879978u,
    0x0087997Cu,
    0x00879980u,
    0x00879984u,
    0x0087998Cu,
    0x00879990u,
    0x00879998u,
    0x0087999Cu,
    0x008799A0u,
    0x008799A4u,
    0x008799A8u,
    0x008799ACu,
    0x008799B0u,
    0x008799B4u,
    0x008799B8u,
    0x008799BCu,
    0x008799C0u,
    0x008799C4u,
    0x008799C8u,
    0x008799CCu,
    0x008799D0u,
    0x008799D4u,
    0x008799D8u,
    0x008799DCu,
    0x008799E0u,
    0x008799E4u,
    0x008799E8u,
    0x008799ECu,
    0x008799F0u,
    0x008799F4u,
    0x008799F8u,
    0x008799FCu,
    0x00879A00u,
    0x00879A04u,
    0x00879A08u,
    0x00879A0Cu,
    0x00879A10u,
    0x00879A14u,
    0x00879A18u,
    0x00879A1Cu,
    0x00879A20u,
    0x00879A24u,
    0x00879A28u,
    0x00879A2Cu,
    0x00879A30u,
    0x00879A34u,
    0x00879A38u,
    0x00879A3Cu,
    0x00879A40u,
    0x00879A44u,
    0x00879A48u,
    0x00879A4Cu,
    0x00879A50u,
    0x00879A54u,
    0x00879A58u,
    0x00879A5Cu,
    0x00879A60u,
    0x00879A64u,
    0x00879A68u,
    0x00879A6Cu,
    0x00879A70u,
    0x00879A74u,
    0x00879A78u,
    0x00879A7Cu,
    0x00879A80u,
    0x00879A84u,
    0x00879A88u,
    0x00879A8Cu,
    0x00879A90u,
    0x00879A94u,
    0x00879A98u,
    0x00879A9Cu,
    0x00879AA0u,
    0x00879AA4u,
    0x00879AA8u,
    0x00879AACu,
    0x00879AB0u,
    0x00879AB4u,
    0x00879AB8u,
    0x00879ABCu,
    0x00879AC0u,
    0x00879AC4u,
    0x00879AC8u,
    0x00879ACCu,
    0x00879AD0u,
    0x00879AD4u,
    0x00879AD8u,
    0x00879ADCu,
    0x00879AE0u,
    0x00879AE4u,
    0x00879AE8u,
    0x00879AECu,
    0x00879AF0u,
    0x00879AF4u,
    0x00879AF8u,
    0x00879AFCu,
    0x00879B00u,
    0x00879B04u,
    0x00879B08u,
    0x00879B0Cu,
    0x00879B10u,
    0x00879B14u,
    0x00879B18u,
    0x00879B1Cu,
    0x00879B20u,
    0x00879B24u,
    0x00879B28u,
    0x00879B2Cu,
    0x00879B30u,
    0x00879B34u,
    0x00879B38u,
    0x00879B3Cu,
    0x00879B40u,
    0x00879B44u,
    0x00879B48u,
    0x00879B4Cu,
    0x00879B54u,
    0x00879B58u,
    0x00879B5Cu,
    0x00879B60u,
    0x00879B64u,
    0x00879B68u,
    0x00879B6Cu,
    0x00879B70u,
    0x00879B74u,
    0x00879B78u,
    0x00879B7Cu,
    0x00879B80u,
    0x00879B84u,
    0x00879B88u,
    0x00879B8Cu,
    0x00879B90u,
    0x00879B94u,
    0x00879B98u,
    0x00879B9Cu,
    0x00879BA0u,
    0x00879BA4u,
    0x00879BA8u,
    0x00879BACu,
    0x00879BB0u,
    0x00879BB4u,
    0x00879BB8u,
    0x00879BBCu,
    0x00879BC0u,
    0x00879BC4u,
    0x00879BC8u,
    0x00879BCCu,
    0x00879BD0u,
    0x00879BD4u,
    0x00879BD8u,
    0x00879BDCu,
    0x00879BE0u,
    0x00879BE4u,
    0x00879BE8u,
    0x00879BECu,
    0x00879BF0u,
    0x00879BF4u,
    0x00879BF8u,
    0x00879BFCu,
    0x00879C00u,
    0x00879C04u,
    0x00879C08u,
    0x00879C0Cu,
    0x00879C10u,
    0x00879C14u,
    0x00879C18u,
    0x00879C1Cu,
    0x00879C20u,
    0x00879C24u,
    0x00879C28u,
    0x00879C2Cu,
    0x00879C30u,
    0x00879C34u,
    0x00879C38u,
    0x00879C3Cu,
    0x00879C40u,
    0x00879C44u,
    0x00879C48u,
    0x00879C4Cu,
    0x00879C50u,
    0x00879C54u,
    0x00879C58u,
    0x00879C5Cu,
    0x00879C60u,
    0x00879C64u,
    0x00879C68u,
    0x00879C6Cu,
    0x00879C70u,
    0x00879C74u,
    0x00879C78u,
    0x00879C7Cu,
    0x00879C80u,
    0x00879C84u,
    0x00879C88u,
    0x00879C8Cu,
    0x00879C90u,
    0x00879C94u,
    0x00879C98u,
    0x00879C9Cu,
    0x00879CA0u,
    0x00879CA4u,
    0x00879CA8u,
    0x00879CACu,
    0x00879CB0u,
    0x00879CB4u,
    0x00879CB8u,
    0x00879CBCu,
    0x00879CC0u,
    0x00879CC4u,
    0x00879CC8u,
    0x00879CCCu,
    0x00879CD0u,
    0x00879CD4u,
    0x00879CD8u,
    0x00879CDCu,
    0x00879CE0u,
    0x00879CE4u,
    0x00879CE8u,
    0x00879CECu,
    0x00879CF0u,
    0x00879CF4u,
    0x00879CF8u,
    0x00879CFCu,
    0x00879D00u,
    0x00879D04u,
    0x00879D08u,
    0x00879D0Cu,
    0x00879D10u,
    0x00879D14u,
    0x00879D18u,
    0x00879D1Cu,
    0x00879D20u,
    0x00879D24u,
    0x00879D28u,
    0x00879D2Cu,
    0x00879D30u,
    0x00879D34u,
    0x00879D38u,
    0x00879D3Cu,
    0x00879D40u,
    0x00879D44u,
    0x00879D48u,
    0x00879D4Cu,
    0x00879D50u,
    0x00879D54u,
    0x00879D58u,
    0x00879D5Cu,
    0x00879D60u,
    0x00879D64u,
    0x00879D68u,
    0x00879D6Cu,
    0x00879D70u,
    0x00879D74u,
    0x00879D78u,
    0x00879D7Cu,
    0x00879D80u,
    0x00879D84u,
    0x00879D88u,
    0x00879D8Cu,
    0x00879D90u,
    0x00879D94u,
    0x00879D98u,
    0x00879DA0u,
    0x00879DA4u,
    0x00879DA8u,
    0x00879DACu,
    0x00879DB0u,
    0x00879DB4u,
    0x00879DBCu,
    0x00879DC0u,
    0x00879DC4u,
    0x00879DC8u,
    0x00879DCCu,
    0x00879DD0u,
    0x00879DD4u,
    0x00879DD8u,
    0x00879DDCu,
    0x00879DE0u,
    0x00879DE4u,
    0x00879DE8u,
    0x00879DECu,
    0x00879DF0u,
    0x00879DF4u,
    0x00879DF8u,
    0x00879DFCu,
    0x00879E00u,
    0x00879E04u,
    0x00879E08u,
    0x00879E0Cu,
    0x00879E10u,
    0x00879E14u,
    0x00879E18u,
    0x00879E1Cu,
    0x00879E20u,
    0x00879E24u,
    0x00879E28u,
    0x00879E2Cu,
    0x00879E30u,
    0x00879E34u,
    0x00879E38u,
    0x00879E3Cu,
    0x00879E40u,
    0x00879E44u,
    0x00879E48u,
    0x00879E4Cu,
    0x00879E50u,
    0x00879E54u,
    0x00879E58u,
    0x00879E5Cu,
    0x00879E60u,
    0x00879E64u,
    0x00879E68u,
    0x00879E6Cu,
    0x00879E70u,
    0x00879E74u,
    0x00879E78u,
    0x00879E7Cu,
    0x00879E80u,
    0x00879E84u,
    0x00879E88u,
    0x00879E8Cu,
    0x00879E90u,
    0x00879E94u,
    0x00879E98u,
    0x00879E9Cu,
    0x00879EA0u,
    0x00879EA4u,
    0x00879EA8u,
    0x00879EACu,
    0x00879EB0u,
    0x00879EB4u,
    0x00879EB8u,
    0x00879EBCu,
    0x00879EC0u,
    0x00879EC4u,
    0x00879EC8u,
    0x00879ECCu,
    0x00879ED0u,
    0x00879ED4u,
    0x00879ED8u,
    0x00879EDCu,
    0x00879EE0u,
    0x00879EE4u,
    0x00879EE8u,
    0x00879EECu,
    0x00879EF0u,
    0x00879EF4u,
    0x00879EF8u,
    0x00879EFCu,
    0x00879F00u,
    0x00879F04u,
    0x00879F08u,
    0x00879F0Cu,
    0x00879F10u,
    0x00879F14u,
    0x00879F18u,
    0x00879F1Cu,
    0x00879F20u,
    0x00879F24u,
    0x00879F28u,
    0x00879F2Cu,
    0x00879F30u,
    0x00879F34u,
    0x00879F38u,
    0x00879F3Cu,
    0x00879F40u,
    0x00879F44u,
    0x00879F48u,
    0x00879F4Cu,
    0x00879F50u,
    0x00879F54u,
    0x00879F58u,
    0x00879F5Cu,
    0x00879F60u,
    0x00879F64u,
    0x00879F68u,
    0x00879F6Cu,
    0x00879F70u,
    0x00879F74u,
    0x00879F78u,
    0x00879F7Cu,
    0x00879F80u,
    0x00879F84u,
    0x00879F88u,
    0x00879F8Cu,
    0x00879F90u,
    0x00879F94u,
    0x00879F98u,
    0x00879F9Cu,
    0x00879FA0u,
    0x00879FA4u,
    0x00879FA8u,
    0x00879FACu,
    0x00879FB0u,
    0x00879FB4u,
    0x00879FB8u,
    0x00879FBCu,
    0x00879FC0u,
    0x00879FC4u,
    0x00879FC8u,
    0x00879FCCu,
    0x00879FD0u,
    0x00879FD4u,
    0x00879FD8u,
    0x00879FDCu,
    0x00879FE0u,
    0x00879FE4u,
    0x00879FE8u,
    0x00879FECu,
    0x00879FF0u,
    0x00879FF4u,
    0x00879FF8u,
    0x00879FFCu,
    0x0087A000u,
    0x0087A004u,
    0x0087A008u,
    0x0087A00Cu,
    0x0087A010u,
    0x0087A014u,
    0x0087A018u,
    0x0087A01Cu,
    0x0087A020u,
    0x0087A024u,
    0x0087A028u,
    0x0087A02Cu,
    0x0087A030u,
    0x0087A034u,
    0x0087A038u,
    0x0087A03Cu,
    0x0087A040u,
    0x0087A044u,
    0x0087A048u,
    0x0087A04Cu,
    0x0087A050u,
    0x0087A054u,
    0x0087A058u,
    0x0087A05Cu,
    0x0087A060u,
    0x0087A064u,
    0x0087A068u,
    0x0087A06Cu,
    0x0087A070u,
    0x0087A074u,
    0x0087A078u,
    0x0087A07Cu,
    0x0087A080u,
    0x0087A084u,
    0x0087A08Cu,
    0x0087A090u,
    0x0087A094u,
    0x0087A098u,
    0x0087A09Cu,
    0x0087A0A0u,
    0x0087A0A4u,
    0x0087A0A8u,
    0x0087A0ACu,
    0x0087A0B0u,
    0x0087A0B4u,
    0x0087A0B8u,
    0x0087A0BCu,
    0x0087A0C0u,
    0x0087A0C4u,
    0x0087A0C8u,
    0x0087A0D0u,
    0x0087A0D4u,
    0x0087A0D8u,
    0x0087A0E0u,
    0x0087A0E4u,
    0x0087A0E8u,
    0x0087A0ECu,
    0x0087A0F0u,
    0x0087A0F4u,
    0x0087A0FCu,
    0x0087A100u,
    0x0087A104u,
    0x0087A108u,
    0x0087A10Cu,
    0x0087A110u,
    0x0087A114u,
    0x0087A118u,
    0x0087A11Cu,
    0x0087A120u,
    0x0087A124u,
    0x0087A128u,
    0x0087A12Cu,
};
const uint32_t fury3_iat_slot_count = 507;
