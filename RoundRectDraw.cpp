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
		RoundRect(desk, cur.x + 50, cur.y + 50, cur.x - 50, cur.y - 50, 30, 30);
		DeleteObject(hbr);
		ReleaseDC(NULL, desk);
		Sleep(10);
	}
}
