#include <stdio.h>
#include <dos.h>
#include <graphics.h>

void drawQuardinates()
{
    line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);
    line(getmaxx() / 2, 0, getmaxx() / 2, getmaxy());
}

void draw_circle(int x, int y, int tx, int ty)
{
    putpixel(getmaxx() / 2 + x + tx, getmaxy() / 2 - (y + ty), WHITE);
    putpixel(getmaxx() / 2 + x - tx, getmaxy() / 2 - (y + ty), WHITE);
    putpixel(getmaxx() / 2 + x + tx, getmaxy() / 2 - (y - ty), WHITE);
    putpixel(getmaxx() / 2 + x - tx, getmaxy() / 2 - (y - ty), WHITE);
    putpixel(getmaxx() / 2 + x + ty, getmaxy() / 2 - (y + tx), WHITE);
    putpixel(getmaxx() / 2 + x - ty, getmaxy() / 2 - (y + tx), WHITE);
    putpixel(getmaxx() / 2 + x + ty, getmaxy() / 2 - (y - tx), WHITE);
    putpixel(getmaxx() / 2 + x - ty, getmaxy() / 2 - (y - tx), WHITE);
}

int main()
{
    int x, y, tx, ty, d, r, sa;
    int gd = DETECT, gm;
    printf("X cordinate of the center of circle : ");
    scanf("%d", &x);
    printf("Y cordinate of the center of circle : ");
    scanf("%d", &y);
    printf("Radius of the circle : ");
    scanf("%d", &r);

    printf("\n1) Bresenhams circle drawing algorithm\n2) Mid-point circle drawing algorithm\nSelect a Option : ");
    scanf("%d", &sa);
    initgraph(&gd, &gm, NULL);
    drawQuardinates();

    switch (sa)
    {
    case 1:
        tx = 0, ty = r;
        d = 3 - 2 * r;
        draw_circle(x, y, tx, ty);
        while (ty >= tx)
        {
            tx++;

            if (d > 0)
            {
                ty--;
                d = d + 4 * (tx - ty) + 10;
            }
            else
                d = d + 4 * tx + 6;
            draw_circle(x, y, tx, ty);
        }
        break;
    case 2:
        tx = 0, ty = r;
        d = 5 / 4 - r;
        draw_circle(x, y, tx, ty);
        while (ty >= tx)
        {
            tx++;
            if (d <= 0)
                d = d + 2 * tx + 1;
            else
            {
                ty--;
                d = d + 2 * tx - 2 * ty + 1;
            }

            if (ty < tx)
                break;

            draw_circle(x, y, tx, ty);

            if (x != y)
            {
                draw_circle(x, y, tx, ty);
            }
        }
        break;
    }
    getch();
    // closegraph();
    return 0;
}
