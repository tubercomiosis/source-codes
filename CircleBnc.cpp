#include <windows.h>

int w = GetSystemMetrics(0), h = GetSystemMetrics(1);

int main() {
	HDC hdc;
	HBRUSH hbsh;
	int sx = 1, sy = 1, sx1 = 1, sy1 = 1;
	int incrementation = 10;
	int x = 10, y = 10;
	while (1) {
		hdc = GetDC(0);
		x += incrementation * sx;
		y += incrementation * sy;
		hbsh = CreateSolidBrush(RGB(0, 0, 255));
		SelectObject(hdc, hbsh);
		Ellipse(hdc, x, y, x+100, y+100);
		if (y >= GetSystemMetrics(1)) {
			sy = -1;
		}
		if (x >= GetSystemMetrics(0)) {
			sx = -1;
		}
		if (y == 0) {
			sy = 1;
		}
		if (x == 0) {
			sx = 1;
		}
		DeleteObject(hbsh);
		ReleaseDC(0, hdc);
		Sleep(10);
	}
}
