#include <Windows.h>

int main() {
	HDC hdc;
	int sw, sh;
	HFONT hfnt;
	while (1) {
		hdc = GetDC(NULL);
		sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
		hfnt = CreateFontA(43, 32, 0, 0, FW_THIN, false, true, false, ANSI_CHARSET, 0, 0, 0, 0, "Arial");
		LPCSTR string = "change this text";
		SelectObject(hdc, hfnt);
		SetTextColor(hdc, RGB(rand () % 255, rand () % 255, rand () % 255));
		SetBkMode(hdc, 0);
		TextOutA(hdc, rand () % sw, rand () % sh, string, strlen(string));
		DeleteObject(hfnt);
		ReleaseDC(NULL, hdc);
		Sleep(10);
	}
}
