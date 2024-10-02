#include <Windows.h>

int main() {
	HDC hdc;
	int sw, sh;
	HPEN hp;
	while (1) {
		hdc = GetDC(NULL);
		sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
		POINT drawing[5] = {{rand () % sw, rand () % sh}, {rand () % sw, rand () % sh}, {rand () % sw, rand () % sh}};
		HPEN hp = CreatePen(PS_SOLID, 5, RGB(rand () % 255, rand () % 255, rand () % 255));
		SelectObject(hdc, hp);
		Polyline(hdc, drawing, 4);
		DeleteObject(hp);
		ReleaseDC(NULL, hdc);
		Sleep(10);
	}
}
