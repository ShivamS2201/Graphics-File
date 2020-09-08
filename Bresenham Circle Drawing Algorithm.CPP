#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h> // For Delay
void main()
{ int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
int xc,yc,x,y,r,pk ;
printf("\t \t Enter the Center : ");
scanf("\t \t %d , %d", &xc, &yc); // Coordinates separated by commas
printf(" \t\t Enter radius: ");
scanf("%d", &r);
pk = 3 - 2r; //Decision parameter
x=0;
y=r;
while(x<=y)
{ x = x+1; //Increment C
if(pk<0)
{
pk = pk + 4*x +6;
}
else
{
pk = pk+4*(x – y) + 10;
y= y-1; //Decrement Y
}
putpixel(xc+x,yc+y,1);
delay(10);
putpixel(xc-y,yc-x,2);
delay(10);
putpixel(xc+y,yc-x,3);
delay(10);
putpixel(xc-y,yc+x,4);
delay(10);
putpixel(xc+y,yc+x,5);
delay(10);
putpixel(xc-x,yc-y,6);
delay(10);
putpixel(xc+x,yc-y,7);
delay(10);
putpixel(xc-x,yc+y,8);
}//Delay is added to see how the Algorithm Works in different Octants, Add it and see the magic.
getch();
}
