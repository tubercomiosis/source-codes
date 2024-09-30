#include <Windows.h>

int main() {
	HDC hdc;
	int sw, sh;
	HPEN hp;
	while (true) {
		hdc = GetDC(NULL);
		sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
		hp = CreatePen(PS_SOLID, 15, RGB(rand () % 255, rand () % 255, rand () % 255));
		SelectObject(hdc, hp);
		ArcTo(hdc, rand () % sw, rand () % sh, rand () % sw, rand () % sh, rand () % sw, rand () % sh, rand () % sw, rand () % sh);
		DeleteObject(hp);
		ReleaseDC(NULL, hdc);
		Sleep(10);
	}
}
