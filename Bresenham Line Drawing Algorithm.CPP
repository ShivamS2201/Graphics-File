#include <graphics.h>
#include <stdio.h>
#include <conio.h>
void main()
{ int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
int x1, x2, y1, y2 ;
float dx, dy,x,y, pk,m;
printf("\t \t Enter the starting point: ");
scanf("\t \t %d , %d", &x1, &y1);// use comma to separate
printf(" \t \t Enter the endpoint: ");
scanf("\t \t %d ,%d",&x2,&y2);
printf("\t \t S %d %d \n \t \tE %d %d ", x1, y1, x2, y2);
dx = x2-x1;
dy = y2-y1;
m =dy/dx;
if(m<1)
{ printf("Slope: %d", m);
pk = 2*dy - dx;
x = x1;
y = y1;
while(x<x2)
{ if(pk>=0)
{ putpixel(x,y, RED);
y = y + 1;
pk = pk + 2*dy - 2*dx;
}
else
{putpixel(x,y,BLUE);
pk = pk+2*dy;
}
x = x+1;
}
}
else
{printf("Slope : %d", m);
}
getch();
}
