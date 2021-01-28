#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
void main()
{
int *points,*points3d, *npoints, *npoints3d;
int n,p,i,ch,Tx,Ty,Sx,Sy;
float ang;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
n = 4; // Taking figure to be a cube/cuboid.
p = n*2 + 2; // to calcultae
//memory allocation so that points donot get allocated randomly
points = (int *)malloc(sizeof(int)*p);
points3d = (int *)malloc(sizeof(int)*p);
printf("\n Enter the coordinates: \n");
for(i = 0; i < p; i+=2)
{
scanf("%d,%d",&points[i],&points[i+1]);// use comma to enter
points3d[i]=points[i]-20;
points3d[i+1]=points[i+1]+20;
}
while(ch != 4)
{
printf("\n \t\t1.For Translation\n\t\t2.For Scaling\n\t\t3.For Rotation\n\t\t4.Exit\n\t\tEnter the choice: ");
scanf("%d", &ch);
switch(ch)
{
case 1: clrscr();
cleardevice();
setcolor(WHITE);
drawpoly(n+1, points);
drawpoly(n+1, points3d);
for(i = 0; i < p; i+=2)
{ line(points[i],points[i+1],points3d[i],points3d[i+1]);
}
printf("Enter the translation factors\n ");
scanf("%d%d", &Tx, &Ty);
npoints = (int *)malloc(sizeof(int)*p);
npoints3d = (int *)malloc(sizeof(int)*p);
for(i = 0; i<p; i+=2)
{
npoints[i] = points[i] + Tx;
npoints[i+1] = points[i+1] + Ty;
npoints3d[i] = points3d[i] + Tx;
npoints3d[i+1] = points3d[i+1] + Ty;
}
setcolor(RED);
drawpoly(n+1, npoints);
drawpoly(n+1, npoints3d);
for(i = 0; i < p; i+=2)
{ line(npoints[i],npoints[i+1],npoints3d[i],npoints3d[i+1]);
}
free(npoints);
free(npoints3d);
gotoxy(400,400);
printf("Translation done");
break;
case 2 : clrscr();
cleardevice();
setcolor(WHITE);
drawpoly(n+1,points);
drawpoly(n+1, points3d);
for(i = 0; i < p; i+=2)
{ line(points[i],points[i+1],points3d[i],points3d[i+1]);
}
printf("Enter the scaling factors:\n");
scanf("%d%d", &Sx, &Sy);
npoints = (int *)malloc(sizeof(int)*p);
npoints3d = (int *)malloc(sizeof(int)*p);
for(i = 0; i<p; i+=2)
{
npoints[i] = points[i]*Sx;
npoints[i+1] = points[i+1]*Sy;
npoints3d[i] = points3d[i]*Sx;
npoints3d[i+1] = points3d[i+1]*Sy;
}
setcolor(GREEN);
drawpoly(n+1,npoints);
drawpoly(n+1,npoints3d);
for(i = 0; i < p; i+=2)
{ line( npoints[i],npoints[i+1],npoints3d[i],npoints3d[i+1]);
}
free(npoints);
free(npoints3d);
break;
case 3 : clrscr();
cleardevice();
setcolor(WHITE);
drawpoly(n+1, points);
drawpoly(n+1, points3d);
for(i = 0; i < p; i+=2)
{ line(points[i],points[i+1],points3d[i],points3d[i+1]);
}
printf("Enter the angle for rotation\n");
scanf("%f", &ang);
ang = (float)(ang*3.14)/(float)180;
npoints = (int *)malloc(sizeof(int)*p);
npoints3d = (int *)malloc(sizeof(int)*p);
for(i = 0; i<p; i+=2)
{
npoints[i]=points[0]+(points[i]-points[0])*cos(ang)-(points[i+1]-points[1])*sin(ang);
npoints[i+1] =points[1]+(points[i]-points[0])*sin(ang)+(points[i+1]-points[1])*cos(ang);
npoints3d[i]=points3d[0]+(points3d[i]-points3d[0])*cos(ang)-(points3d[i+1]-points3d[1])*sin(ang);
npoints3d[i+1] =points3d[1]+(points3d[i]-points3d[0])*sin(ang)+(points3d[i+1]-points3d[1])*cos(ang);
}
setcolor(GREEN);
drawpoly(n+1, npoints);
drawpoly(n+1, npoints3d);
for(i = 0; i < p; i+=2)
{ line(npoints[i],npoints[i+1],npoints3d[i],npoints3d[i+1]);
}
free(npoints);
free(npoints3d);
break;
case 4 :
closegraph();
clrscr();
printf("Thank You");
break;
}
}
free(points);
getch();
closegraph();}
