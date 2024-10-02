#include <Windows.h>

int main() {
	HDC hdc;
	int sw, sh;
	while (1) {
		hdc = GetDC(NULL);
		sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
		BitBlt(hdc, rand () % 15, rand () % 15, sw, sh, hdc, rand () % 15, rand () % 15, NOTSRCERASE);
		ReleaseDC(NULL, hdc);
		Sleep(10);
	}
}
