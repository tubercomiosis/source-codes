#include <Windows.h>

int main() {
	HDC hdc;
	int sw, sh;
	while (1) {
		hdc = GetDC(NULL);
		sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
		BitBlt(hdc, 0, 0, sw, sh, hdc, -30, 0, SRCCOPY);
		BitBlt(hdc, 0, 0, sw, sh, hdc, sw - 30, 0, SRCCOPY);
		ReleaseDC(NULL, hdc);
		Sleep(10);
	}
}
