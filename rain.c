#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
  int gd = DETECT, gm;
  int x,y,i;
  initgraph(&gd, &gm, " ");
  x= getmaxx()/2;
  y= getmaxy()/2;
  for(i=30; i<200; i++)
  {
    delay(100);
    setcolor(x,y,0,180,i-10);
  }
  getch();
}
