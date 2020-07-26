#pragma once

#include <Windows.h>

#ifdef __cplusplus
extern "C" {
#endif

HFONT WINAPI HookedCreateFontIndirectW(
	const LOGFONTW* lplf
);

HFONT WINAPI HookedCreateFontIndirectA(
	const LOGFONTA* lplf
);

void QueryAndLoadFontW(const wchar_t* name);
void QueryAndLoadFontA(const char* name);

#ifdef __cplusplus
}
#endif

#ifdef UNICODE
#define HookedCreateFontIndirect HookedCreateFontIndirectW
#define QueryAndLoadFont QueryAndLoadFontW
#else
#define HookedCreateFontIndirect HookedCreateFontIndirectA
#define QueryAndLoadFont QueryAndLoadFontA
#endif