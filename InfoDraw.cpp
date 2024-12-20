#include <Windows.h>

int main() {
	HDC desk;
	POINT cur;
	int w, h;
	while (true) {
		desk = GetDC(NULL);
		w = GetSystemMetrics(SM_CXICON), h = GetSystemMetrics(SM_CYICON);
		GetCursorPos(&cur);
		DrawIcon(desk, cur.x - w, cur.y - h, LoadIconA(NULL, IDI_ASTERISK)); // this identifier can also be aliased with IDI_INFORMATION
		ReleaseDC(NULL, desk);
		Sleep(10);
	}
}
