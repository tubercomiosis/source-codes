#include <Windows.h>

int main() {
	HDC desk;
	POINT cur;
	HBRUSH hbr;
	while (true) {
		desk = GetDC(NULL);
		GetCursorPos(&cur);
		hbr = CreateSolidBrush(RGB(255, 0, 0));
		SelectObject(desk, hbr);
		Rectangle(desk, cur.x + 50, cur.y + 50, cur.x - 50, cur.y - 50);
		DeleteObject(hbr);
		ReleaseDC(NULL, desk);
		Sleep(10);
	}
}
