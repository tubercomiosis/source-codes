#include <Windows.h>

int main() {
	HDC desk;
	int sw, sh;
	HPEN h;
	while (true) {
		desk = GetDC(NULL);
		sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
		h = CreatePen(PS_SOLID, 15, RGB(rand () % 255, rand () % 255, rand () % 255));
		SelectObject(desk, h);
		LineTo(desk, rand () % sw, rand () % sh);
		DeleteObject(h);
		ReleaseDC(NULL, desk);
		Sleep(10);
	}
}
