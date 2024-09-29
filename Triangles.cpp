#include <Windows.h>

int main() {
	HDC desk;
	int sw, sh;
	HBRUSH hbr;
	while (true) {
		desk = GetDC(NULL);
		sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
		hbr = CreateSolidBrush(RGB(rand () % 255, rand () % 255, rand () % 255));
		POINT v[] = {
		{rand () % sw, rand () % sh}, 
		{rand () % sw, rand () % sh},
		{rand () % sw, rand () % sh}
		};
		SelectObject(desk, hbr);
		Polygon(desk, v, sizeof(v) / sizeof(v[0]));
		DeleteObject(hbr);
		ReleaseDC(NULL, desk);
		Sleep(10);
	}
}
