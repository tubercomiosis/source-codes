#include <Windows.h>

COLORREF GetRandomRainbowSpectrum() {
	int color = rand () % 7;
	if (color == 0) {
		return RGB(255, 0, 0);
	}
	if (color == 1) {
		return RGB(255, 150, 0);
	}
	if (color == 2) {
		return RGB(255, 255, 0);
	}
	if (color == 3) {
		return RGB(0, 255, 0);
	}
	if (color == 4) {
		return RGB(0, 255, 255);
	}
	if (color == 5) {
		return RGB(0, 0, 255);
	}
	if (color == 6) {
		return RGB(255, 0, 255);
	}
}

int main() { // N17Pro3426 if you skid this, you're unfollowed
	HDC hdc;
	int sw, sh;
	HFONT hfnt;
	while (1) {
		hdc = GetDC(NULL);
		sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
		hfnt = CreateFontA(40, 20, rand () % 36, 0, FW_BOLD, true, false, false, ANSI_CHARSET, 0, 0, 0, 0, "Arial");
		LPCSTR string = "change this text";
		SelectObject(hdc, hfnt);
		SetTextColor(hdc, GetRandomRainbowSpectrum());
		SetBkColor(hdc, RGB(0, 0, 0));
		TextOutA(hdc, rand () % sw, rand () % sh, string, strlen(string));
		DeleteObject(hfnt);
		ReleaseDC(NULL, hdc);
		Sleep(10);
	}
}
