#include<graphics.h>
int main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm,NULL);
int midx,midy,r=10;
midx=getmaxx()/2;
while(r<=50)
{
cleardevice();
setcolor(WHITE);
line(0,310,160,150);
line(160,150,320,310);
line(320,310,480,150);
line(480,150,640,310);
line(0,310,640,310);
arc(midx,310,225,133,r);
floodfill(midx,300,15);
if(r>20)
{
setcolor(7);
floodfill(2,2,15);
setcolor(6);
floodfill(150,250,15);
floodfill(550,250,15);
setcolor(2);
floodfill(2,450,15);
}
delay(50);
r+=2;
}
getch();
closegraph();
}
