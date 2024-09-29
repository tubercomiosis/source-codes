#include <Windows.h>

int main() {
	HDC desk;
	int sw, sh;
	HBRUSH hbr;
	while (true) {
		desk = GetDC(NULL);
		sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
		hbr = CreateSolidBrush(RGB(rand () % 255, rand () % 255, rand () % 255));
		SelectObject(desk, hbr);
		Pie(desk, rand () % sw, rand () % sh, rand () % sw, rand () % sh, rand () % sw, rand () % sh, rand () % sw, rand () % sh);
		DeleteObject(hbr);
		ReleaseDC(NULL, desk);
		Sleep(10);
	}
}
