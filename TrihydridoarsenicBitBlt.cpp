#include <Windows.h> // this code was rewritten by me, Tubercomi

int main() {
	HDC hdc;
	int sw, sh;
	while (1) {
		hdc = GetDC(NULL);
		sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
		BitBlt(hdc, 1, -1, sw, sh, hdc, -2, 2, SRCERASE);
		ReleaseDC(NULL, hdc);
		Sleep(10);
	}
}
