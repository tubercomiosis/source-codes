#include <Windows.h>

int main() {
	HDC hdc;
	int sw, sh;
	while (1) {
		hdc = GetDC(NULL);
		sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
		BitBlt(hdc, rand () % 2, rand () % 2, sw, sh, hdc, rand () % 2, rand () % 2, SRCAND);
		ReleaseDC(NULL, hdc);
		Sleep(10);
	}
}
