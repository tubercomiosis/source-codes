{
    HDC hdc;
    HBRUSH hbsh;
    int sx = 1, sy = 1, sx1 = 1, sy1 = 1;
    int incrementation = 10;
    int x = 10, y = 10;
    while (1) {
        hdc = GetDC(0);
        x += incrementation * sx;
        y += incrementation * sy;
        hbsh = CreateSolidBrush(RGB(255, 255, 255));
        SelectObject(hdc, hbsh);
        POINT vpt[6];
        for (int t = 0; t < 6; ++t) {
            int cx = x+100, cy = y+100;
            int rad = 100;
            
            double dAngle = 2.0 * M_PI * t / 6;
            vpt[t].x = cx + static_cast<int>(rad * cos(dAngle));
            vpt[t].y = cy + static_cast<int>(rad * sin(dAngle));
        }
        Polygon(hdc, vpt, 6);
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
