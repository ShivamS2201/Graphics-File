#include <graphics.h>
#include <stdio.h>
#include <conio.h>
void main()
{ int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
int x1, x2, y1, y2 ;
float dx, dy,x,y,m;
printf("\t \t Enter the starting point: ");
scanf("\t \t %d , %d", &x1, &y1);
printf(" \t \t Enter the endpoint: ");
scanf("\t \t %d ,%d",&x2,&y2);
printf("\t \t S %d %d \n \t \t E %d %d ", x1, y1, x2, y2);
dy = (y2-y1);
dx = (x2-x1);
if((dx)>(dy))
{m = dx;
}
else
{m = dy;
}
}
dx = dx / m;
dy = dy / m;
putpixel(x,y,GREEN);
for(i= 0; i<m;i++)
{ putpixel(x,y,GREEN);
x = x + dx;
y = y + dy ;
}
getch();
closegrapgh();
}
