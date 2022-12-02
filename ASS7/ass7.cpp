
#include <graphics.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int ball_y;
int j = 100,i = 0;
int score = 0;
char arr[10];
void fun_draw(int i)
{
	sprintf(arr,"SCORE : %d ",score);
	outtextxy(500,50,arr);
	rectangle(100,100,1000,600);
	line(800,100,800,600);
	line(700,100 + i,700,100 + 200 + i);
}
void circle_draw(int j)
{
	setcolor(YELLOW);
	circle(j,ball_y,20);
	setcolor(WHITE);
}

int main()
{
	initwindow(1200, 800);
	ball_y = 300;
	while (!kbhit())
	{
		delay(100);
		cleardevice();
		fun_draw(i);
		circle_draw(j);
		if(i + 300 == 600)
		i = 0;
		else
		i+=10;
		if(j == 1000)
		j = 100;
		j+=10;
		if(j == 700)
		{
			if(i + 80 <= ball_y and i+220 >=ball_y)
			{
				score++;
				j = 100;
			}
		}
	}
	getchar();
	return 0;
}