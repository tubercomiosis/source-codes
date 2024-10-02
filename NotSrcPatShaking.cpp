#include <Windows.h>

int main() {
	HDC hdc;
	int sw, sh;
	HBRUSH hb;
	while (1) {
		hdc = GetDC(NULL);
		sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
		hb = CreateSolidBrush(RGB(rand () % 255, rand () % 255, rand () % 255));
		SelectObject(hdc, hb);
		BitBlt(hdc, rand () % 15, rand () % 15, sw, sh, hdc, rand () % 15, rand () % 15, NOTSRCERASE);
		PatBlt(hdc, 0, 0, sw, sh, PATINVERT);
		DeleteObject(hb);
		ReleaseDC(NULL, hdc);
		Sleep(10);
	}
}
