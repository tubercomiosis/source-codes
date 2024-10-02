#include <Windows.h>

int main() {
	HDC hdc;
	int sw, sh;
	while (1) {
		hdc = GetDC(NULL);
		sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
		BitBlt(hdc, 0, -30, sw, sh, hdc, 0, 0, SRCCOPY);
		BitBlt(hdc, 0, sh - 30, sw, sh, hdc, 0, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		Sleep(10);
	}
}
