#include <Windows.h>

int main() {
	HDC desk;
	POINT cur;
	int w, h;
	while (true) {
		desk = GetDC(NULL);
		w = GetSystemMetrics(SM_CXICON), h = GetSystemMetrics(SM_CYICON);
		GetCursorPos(&cur);
		DrawIcon(desk, cur.x - w, cur.y - h, LoadIconA(NULL, IDI_EXCLAMATION)); // also aliased by IDI_WARNING
		ReleaseDC(NULL, desk);
		Sleep(10);
	}
}
