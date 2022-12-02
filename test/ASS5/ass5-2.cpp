#include <graphics.h>
#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    float x1, y1, y2, x2;
    initgraph(&gd, &gm, NULL);
    float X = getmaxx();
    float Y = getmaxy();
    float cx1 = X / 3;
    float cy1 = Y / 3;
    line(cx1, 0, cx1, Y);
    line(0, cy1, X, cy1);
    float cx2 = (2 * X) / 3;
    float cy2 = (2 * Y) / 3;
    line(cx2, 0, cx2, Y);
    line(0, cy2, X, cy2);
    cout << "X min: 0 X max: " << X << "Y min:0 Y max: " << Y << endl;
    cout << "Display Window size: X min: " << cx1 << " Y min: " << cy1 << " X max: " << cx2 << " Y max: " << cy2 << endl;
    cout << "Enter values of x1 y1 = ";
    cin >> x1 >> y1;
    cout << "Enter values of x2 y2 = ";
    cin >> x2 >> y2;
    line(x1, y1, x2, y2);
    float dx = (x2 - x1);
    float dy = (y2 - y1);
    float m = dy / dx;
    int ch;
    float nx1, ny1, nx2, ny2;
    nx1 = x1;
    ny1 = y1;
    nx2 = x2;
    ny2 = y2;
    if (x1 > cx1 && y1 > cy1 && x2 < cx2 && y2 < cy2)
    {
        cout << "Complete line is visible" << endl;
    }
    else if ((x1 < cx1 && x2 < cx1) || (x1 > cx2 && x2 > cx2) || (y1 < cy1 && y2 < cy1) || (y1 > cy2 && y2 > cy2))
    {
        cout << "The line is not visible" << endl;
    }
    else
    {
        if (nx1 < cx1)
        {
            float dx1 = nx1, dy1 = ny1, dx2 = nx2, dy2 = ny2;
            while (dx1 != cx1)
            {
                dx = (dx1 + dx2) / 2;
                dy = (dy1 + dy2) / 2;
                if (dx > cx1)
                {
                    dx2 = dx;
                    dy2 = dy;
                }
                else
                {
                    dx1 = dx;
                    dy1 = dy;
                }
                if ((int)(dx1 + 0.5) == (int)(dx2 + 0.5) && (int)(dy1 + 0.5) == (int)(dy2 + 0.5))
                    break;
            }
            nx1 = dx1;
            ny1 = dy1;
            // cout<<"x1: "<<nx1<<" y1: "<<ny1<<endl;
        }
        if (nx2 > cx2)
        {
            float dx1 = nx1, dy1 = ny1, dx2 = nx2, dy2 = ny2;
            while (dx2 != cx2)
            {
                dx = (dx1 + dx2) / 2;
                dy = (dy1 + dy2) / 2;
                if (dx > cx2)
                {
                    dx2 = dx;
                    dy2 = dy;
                }
                else
                {
                    dx1 = dx;
                    dy1 = dy;
                }
                if ((int)(dx1 + 0.5) == (int)(dx2 + 0.5) && (int)(dy1 + 0.5) == (int)(dy2 + 0.5))
                    break;
            }
            nx2 = dx2;
            ny2 = dy2;
            // cout<<"x2: "<<nx2<<" y2: "<<ny2<<endl;
        }
        if (ny1 < cy1)
        {
            float dx1 = nx1, dy1 = ny1, dx2 = nx2, dy2 = ny2;
            while (dy1 != cy1)
            {
                dx = (dx1 + dx2) / 2;
                dy = (dy1 + dy2) / 2;
                if (dy > cy1)
                {
                    dx2 = dx;
                    dy2 = dy;
                }
                else
                {
                    dx1 = dx;
                    dy1 = dy;
                }
                if ((int)(dx1 + 0.5) == (int)(dx2 + 0.5) && (int)(dy1 + 0.5) == (int)(dy2 + 0.5))
                    break;
            }
            nx1 = dx1;
            ny2 = dy1;
            // cout<<"x1: "<<nx1<<" y1: "<<ny1<<endl;
        }
        if (ny2 > cy2)
        {
            float dx1 = nx1, dy1 = ny1, dx2 = nx2, dy2 = ny2;
            while (dy2 != cy2)
            {
                dx = (dx1 + dx2) / 2;
                dy = (dy1 + dy2) / 2;
                if (dy > cy2)
                {
                    dx2 = dx;
                    dy2 = dy;
                }
                else
                {
                    dx1 = dx;
                    dy1 = dy;
                }
                if ((int)(dx1 + 0.5) == (int)(dx2 + 0.5) && (int)(dy1 + 0.5) == (int)(dy2 + 0.5))
                    break;
            }
            nx2 = dx2;
            ny2 = dy2;
            // cout<<"x2: "<<nx2<<" y2: "<<ny2<<endl;
        }
    }
    setcolor(RED);
    line(nx1, ny1, nx2, ny2);
    getch();
    closegraph();
    return 0;
}