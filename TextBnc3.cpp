#include <windows.h>

int w = GetSystemMetrics(0), h = GetSystemMetrics(1);

int main() {
	HDC hdc;
	int sx = 1, sy = 1, sx1 = 1, sy1 = 1;
	int incrementation = 10;
	int x = 10, y = 10;
	HFONT hfnt;
	while (1) {
		hdc = GetDC(0);
		x += incrementation * sx;
		y += incrementation * sy;
		hfnt = CreateFontA(43, 32, 0, 0, FW_THIN, false, true, false, ANSI_CHARSET, 0, 0, 0, 0, "Arial");
		SelectObject(hdc, hfnt);
		SetBkMode(hdc, 0);
		SetTextColor(hdc, RGB(0, 0, 255));
		LPCSTR string = "any text";
		TextOutA(hdc, x, y, string, strlen(string));
		if (y >= GetSystemMetrics(1)) {
			sy = -1;
		}
		if (x >= GetSystemMetrics(0)) {
			sx = -1;
		}
		if (y == 0) {
			sy = 1;
		}
		if (x == 0) {
			sx = 1;
		}
		DeleteObject(hfnt);
		ReleaseDC(0, hdc);
		Sleep(10);
	}
}
