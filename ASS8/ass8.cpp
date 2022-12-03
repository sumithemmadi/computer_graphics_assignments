#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
#include<bits/stdc++.h>
#include<ctime>

#define PI 3.14

using namespace std;

int main(){
	
	int gd=DETECT,gm,s;
    initgraph(&gd,&gm,NULL);
    
    
    while(1){
    	
    	setactivepage(1);
    	setvisualpage(1);
    	cleardevice();
    	
    	circle(315,250,200);
        circle(315,250,3);
    
    outtextxy(315+175*sin(1*PI/6), 250-175*cos(PI/6),"1");
    outtextxy(315+175*sin(2*PI/6), 250-175*cos(2*PI/6),"2");
    outtextxy(315+175*sin(3*PI/6), 250-175*cos(3*PI/6),"3");
    outtextxy(315+175*sin(4*PI/6), 250-175*cos(4*PI/6),"4");
    outtextxy(315+175*sin(5*PI/6), 250-175*cos(5*PI/6),"5");
    outtextxy(315+175*sin(6*PI/6), 250-175*cos(6*PI/6),"6");
    outtextxy(315+175*sin(7*PI/6), 250-175*cos(7*PI/6),"7");
    outtextxy(315+175*sin(8*PI/6), 250-175*cos(8*PI/6),"8");
    outtextxy(315+175*sin(9*PI/6), 250-175*cos(9*PI/6),"9");
    outtextxy(315+175*sin(10*PI/6),250-175*cos(10*PI/6),"10");
    outtextxy(315+175*sin(11*PI/6),250-175*cos(11*PI/6),"11");
    outtextxy(315+175*sin(12*PI/6),250-175*cos(12*PI/6),"12");
    
    time_t now = time(0);
    tm *ltm = localtime(&now);
    
    cout<<ltm->tm_hour<<" "<<ltm->tm_min<<" "<<ltm->tm_sec<<" ";
    
    setcolor(RED);
    line(315,250,315+75*(sin(ltm->tm_hour*PI/6)), 250-75*(cos(ltm->tm_hour*PI/6)));
    
    setcolor(GREEN);
    line(315,250,315+125*sin(ltm->tm_min*PI/30), 250-125*cos(ltm->tm_min*PI/30));
    
    setcolor(WHITE);
    line(315,250,315+150*sin(ltm->tm_sec*PI/30), 250-150*cos(ltm->tm_sec*PI/30));
    
    delay(1000);
    
    if(GetAsyncKeyState(VK_RETURN)) break;

	}	
	getch();
	closegraph();
	
	return 0;
}