#include <graphics.h>
#include <stdio.h>
#include <conio.h>
void main()
{ int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
int xc,yc,x,y,r,pk ;
printf("\t \t Enter the Center : ");
scanf("\t \t %d , %d", &xc, &yc); // The two coordinates are separated by Commas
printf(" \t\t Enter radius: ");
scanf("%d", &r);
pk = (5/4) - r; //Decision Parameter
x=0;
y=r;
while(x<y)
{
if(pk<0)
{x = x+1;
y = y;
pk = pk + 2*x +1;
}
else
{ x=x+1;
y = y-1;
pk = pk+2*x - 2*y + 1;
}
putpixel(xc+x,yc+y,1); //Different Color To show the Different Octants
putpixel(xc-y,yc-x,2);
putpixel(xc+y,yc-x,3);
putpixel(xc-y,yc+x,4);
putpixel(xc+y,yc+x,5);
putpixel(xc-x,yc-y,6);
putpixel(xc+x,yc-y,7);
putpixel(xc-x,yc+y,8);
}
getch();
}// Please write CloseGraph() in case the output does not appear even with 0 errors.
