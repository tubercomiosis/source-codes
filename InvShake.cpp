#include <Windows.h>

int main() {
	HDC hdc;
	int sw, sh;
	while (1) {
		hdc = GetDC(NULL);
		sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
		BitBlt(hdc, rand () % 5, rand () % 5, sw, sh, hdc, rand () % 5, rand () % 5, NOTSRCCOPY);
		ReleaseDC(NULL, hdc);
		Sleep(10);
	}
}
