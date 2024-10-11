#include <windows.h>

VOID WINAPI SplitBlt(HDC hdc, int strength, int xSrc, int ySrc, DWORD dwSrcMode) {
	BitBlt(hdc, strength, strength, xSrc/2, ySrc/2, hdc, 0, 0, dwSrcMode);
	BitBlt(hdc, xSrc/2+1, strength, xSrc/2, ySrc/2, hdc, xSrc/2, 0, dwSrcMode);
	BitBlt(hdc, strength, ySrc/2+1, xSrc/2, ySrc/2, hdc, 0, ySrc/2, dwSrcMode);
	BitBlt(hdc, xSrc/2+1, ySrc/2+1, xSrc/2, ySrc/2, hdc, xSrc/2, ySrc/2, dwSrcMode);
}

int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
int main() {
	HDC hdc;
	while (1) {
		hdc = GetDC(0);
		SplitBlt(hdc, -5, w, h, SRCAND); // example value
		ReleaseDC(0, hdc);
		Sleep(10);
	}
}
