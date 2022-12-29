/*
C) Write OpenGL program to draw Sun Rise and Sunset.
*/

#include <graphics.h>
#include <iostream>
using namespace std;
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd, &gm, NULL);
    int midx, midy, r = 10;
    midx = getmaxx() / 2;
    cout << midx;
    setbkcolor(BLUE);
    while (r <= 100)
    {
        cleardevice();
        line(0, 310, 160, 150);
        line(160, 150, 320, 310);
        line(320, 310, 480, 150);
        line(480, 150, 640, 310);
        line(0, 310, 640, 310);
        arc(320, 310, 30, 150, r);
        setfillstyle(SOLID_FILL, 8);
        floodfill(160, 200, WHITE);
        floodfill(480, 200, WHITE);
        setfillstyle(SOLID_FILL, BLUE);
        floodfill(50, 50, WHITE);
        setfillstyle(SOLID_FILL, GREEN);
        floodfill(400, 400, 15);
        setfillstyle(SOLID_FILL, YELLOW);
        floodfill(320, 309, 15);
        delay(100);
        r += 2;
    }
    while (r >= 10)
    {
        cleardevice();
        line(0, 310, 160, 150);
        line(160, 150, 320, 310);
        line(320, 310, 480, 150);
        line(480, 150, 640, 310);
        line(0, 310, 640, 310);
        arc(320, 310, 30, 150, r);
        setfillstyle(SOLID_FILL, 8);
        floodfill(160, 200, WHITE);
        floodfill(480, 200, WHITE);
        setfillstyle(SOLID_FILL, BLUE);
        floodfill(50, 50, WHITE);
        setfillstyle(SOLID_FILL, GREEN);
        floodfill(400, 400, 15);
        setfillstyle(SOLID_FILL, YELLOW);
        floodfill(320, 309, 15);
        delay(100);
        r -= 2;
    }
    getch();
    closegraph();
}
