#include <Windows.h>

int main() {
	HDC hdc;
	int sw, sh;
	while (1) {
		hdc = GetDC(NULL);
		sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
		LPCWSTR string = L"change this to anything you want";
		SetTextColor(hdc, RGB(rand () % 255, rand () % 255, rand () % 255));
		SetBkColor(hdc, RGB(rand () % 255, rand () % 255, rand () % 255));
		TextOutW(hdc, rand () % sw, rand () % sh, string, wcslen(string));
		ReleaseDC(NULL, hdc);
		Sleep(10);
	}
}
