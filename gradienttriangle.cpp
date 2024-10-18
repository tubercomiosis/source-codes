#include <windows.h>


int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);


int main() { // you must link the msimg32 library (or must you)
    HDC hdc = GetDC(0);
    while (1) {
        TRIVERTEX vtx[3];
        vtx[0].x = rand () % w; vtx[0].y = rand () % h;
        vtx[1].x = rand () % w; vtx[1].y = rand () % h;
        vtx[2].x = rand () % w; vtx[2].y = rand () % h;
        vtx[0].Red = 0xff00; vtx[0].Green = 0; vtx[0].Blue = 0; vtx[0].Alpha = 0xff00;
        vtx[1].Red = 0; vtx[1].Green = 0xff00; vtx[1].Blue = 0; vtx[1].Alpha = 0xff00;
        vtx[2].Red = 0; vtx[2].Green = 0; vtx[2].Blue = 0xff00; vtx[2].Alpha = 0xff00;
        GRADIENT_TRIANGLE gt;
        gt.Vertex1 = 0;
        gt.Vertex2 = 1; gt.Vertex3 = 2;
        GradientFill(hdc, vtx, 4, &gt, 1, GRADIENT_FILL_TRIANGLE);
        Sleep(10);
    }
}
