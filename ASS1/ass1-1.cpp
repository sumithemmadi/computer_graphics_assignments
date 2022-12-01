#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void drawQuardinates(){
    line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
    line(getmaxx()/2,0,getmaxx()/2,getmaxy());
}
int main()
{
    int gd = DETECT, gm;
    int dx, dy, p, i, end, SA;
    float x1, x2, y1, y2, x, y, step;

    printf("Enter Value of X1: ");
    scanf("%f", &x1);
    printf("Enter Value of Y1: ");
    scanf("%f", &y1);
    printf("Enter Value of X2: ");
    scanf("%f", &x2);
    printf("Enter Value of Y2: ");
    scanf("%f", &y2);

    printf("\n1) DDA - Line drawing algorithm \n2) Bresenhams Line drawing algorithm\n\nSelect a Option : ");
    scanf("%d", &SA);
    initgraph(&gd, &gm, NULL);
    drawQuardinates();

    dx = abs(x1 - x2);
    dy = abs(y1 - y2);

    switch (SA)
    {
    case 1:
        p = 2 * dy - dx;
        if (x1 > x2)
        {
            x = x2;
            y = y2;
            end = x1;
        }
        else
        {
            x = x1;
            y = y1;
            end = x2;
        }
        putpixel(getmaxx()/2 + x,getmaxy()/2 - y, 10);
        while (x < end)
        {
            x = x + 1;
            if (p < 0)
            {
                p = p + 2 * dy;
            }
            else
            {
                y = y + 1;
                p = p + 2 * (dy - dx);
            }
            putpixel(getmaxx()/2 + x,getmaxy()/2 - y, 10);
        }
        break;
    case 2:
        if (dx >= dy)
            step = dx;
        else
            step = dy;

        dx = dx / step;
        dy = dy / step;

        x = x1;
        y = y1;

        i = 1;
        while (i <= step)
        {
            putpixel(getmaxx()/2 + x,getmaxy()/2 - y, 5);
            x = x + dx;
            y = y + dy;
            i = i + 1;
        }
    }
    getch();
    closegraph();
    return 0;
}