#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

void drawQuardinates()
{
    line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);
    line(getmaxx() / 2, 0, getmaxx() / 2, getmaxy());
}

int main()
{
    int gm;
    int gd = DETECT;
    int x1, x2, x3, y1, y2, y3, nx1, nx2, nx3, ny1, ny2, ny3, c;
    int sx, sy, xt, yt, r;
    float t;
    printf("\n Enter the points of triangle :");

    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);

    // getch();
    printf("\n 1.Transaction\n 2.Rotation\n 3.Scalling\n 4.exit");
    printf("\nSelect a option:");

    scanf("%d", &c);

    switch (c)
    {
    case 1:
        printf("\n Enter the translation factor : ");
        scanf("%d%d", &xt, &yt);
        initgraph(&gd, &gm, NULL);
        drawQuardinates();
        line(getmaxx() / 2 + x1, getmaxy() / 2 - y1, getmaxx() / 2 + x2, getmaxy() / 2 - y2);
        line(getmaxx() / 2 + x2, getmaxy() / 2 - y2, getmaxx() / 2 + x3, getmaxy() / 2 - y3);
        line(getmaxx() / 2 + x3, getmaxy() / 2 - y3, getmaxx() / 2 + x1, getmaxy() / 2 - y1);
        nx1 = x1 + xt;
        ny1 = y1 + yt;
        nx2 = x2 + xt;
        ny2 = y2 + yt;
        nx3 = x3 + xt;
        ny3 = y3 + yt;
        line(getmaxx() / 2 + nx1, getmaxy() / 2 - ny1, getmaxx() / 2 + nx2, getmaxy() / 2 - ny2);
        line(getmaxx() / 2 + nx2, getmaxy() / 2 - ny2, getmaxx() / 2 + nx3, getmaxy() / 2 - ny3);
        line(getmaxx() / 2 + nx3, getmaxy() / 2 - ny3, getmaxx() / 2 + nx1, getmaxy() / 2 - ny1);
        getch();

    case 2:
        printf("\n Enter the angle of rotation :");
        scanf("%d", &r);
        initgraph(&gd, &gm, NULL);
        drawQuardinates();
        line(getmaxx() / 2 + x1, getmaxy() / 2 - y1, getmaxx() / 2 + x2, getmaxy() / 2 - y2);
        line(getmaxx() / 2 + x2, getmaxy() / 2 - y2, getmaxx() / 2 + x3, getmaxy() / 2 - y3);
        line(getmaxx() / 2 + x3, getmaxy() / 2 - y3, getmaxx() / 2 + x1, getmaxy() / 2 - y1);
        t = 3.14 * r / 180;
        nx1 = abs(x1 * cos(t) - y1 * sin(t));
        ny1 = abs(x1 * sin(t) + y1 * cos(t));
        nx2 = abs(x2 * cos(t) - y2 * sin(t));
        ny2 = abs(x2 * sin(t) + y2 * cos(t));
        nx3 = abs(x3 * cos(t) - y3 * sin(t));
        ny3 = abs(x3 * sin(t) + y3 * cos(t));
        line(getmaxx() / 2 + nx1, getmaxy() / 2 - ny1, getmaxx() / 2 + nx2, getmaxy() / 2 - ny2);
        line(getmaxx() / 2 + nx2, getmaxy() / 2 - ny2, getmaxx() / 2 + nx3, getmaxy() / 2 - ny3);
        line(getmaxx() / 2 + nx3, getmaxy() / 2 - ny3, getmaxx() / 2 + nx1, getmaxy() / 2 - ny1);
        getch();

    case 3:
        printf("\n Enter the scalling factor :");
        scanf("%d%d", &sx, &sy);
        initgraph(&gd, &gm, NULL);
        drawQuardinates();
        line(getmaxx() / 2 + x1, getmaxy() / 2 - y1, getmaxx() / 2 + x2, getmaxy() / 2 - y2);
        line(getmaxx() / 2 + x2, getmaxy() / 2 - y2, getmaxx() / 2 + x3, getmaxy() / 2 - y3);
        line(getmaxx() / 2 + x3, getmaxy() / 2 - y3, getmaxx() / 2 + x1, getmaxy() / 2 - y1);
        nx1 = x1 * sx;
        ny1 = y2 * sy;
        nx2 = x2 * sx;
        ny2 = y2 * sy;
        nx3 = x3 * sx;
        ny3 = y3 * sy;
        line(getmaxx() / 2 + nx1, getmaxy() / 2 - ny1, getmaxx() / 2 + nx2, getmaxy() / 2 - ny2);
        line(getmaxx() / 2 + nx2, getmaxy() / 2 - ny2, getmaxx() / 2 + nx3, getmaxy() / 2 - ny3);
        line(getmaxx() / 2 + nx3, getmaxy() / 2 - ny3, getmaxx() / 2 + nx1, getmaxy() / 2 - ny1);
        getch();

    case 4:
        break;
    default:
        printf("Enter the correct choice");
    }
    closegraph();
}