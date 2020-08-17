#include <graphics.h>
#include <stdio.h>
#include <conio.h>
// Make the trees, Clouds **SONAM code
//GOOD LUCK MAN :)

void main()
{ int gd = DETECT, gm;
  //Arrays for
  //sun rays
  int ray[10] = {122,120,115,120,106,110,122,120};
  int ray1[10] = {127,113,106,88,111,87,127,113};
  int ray2[10] = {137,105,125,82,129,79,137,105};
  int ray3[10] = {150,107,147,80,152,80,150,107};
  int ray4[10] = {165,107,179,82,183,85,165,107};
  int ray5[10] = {175,116,199,98,201,100,175,116};
  int ray6[10] = {184,127,213,120,212,115,184,127};
  int ray7[10] = {185,139,210,145,215,140,185,139};
  //House
  int tri[10]= {330,270,360,210,390,270,330,270};
  int rectf[10] = {330,270,330,350,390,350,390,270,350,270};
  int rects[10] = {390,350,510,350,510,270,390,270};
  int rectu[10] = {390,270,510,270,480,210,360,210,390,270};
  int w1[10] = {415,300,415,280,440,280,440,300};
  int w2[10] = {455,300,455,280,480,280,480,300};
  int door[10] = {350,350,370,350,370,320,350,320,350,350};
  int chimney[10] = {375,200,375,220,390,220,390,200,375,200};
  //Mountains
  int mount1[10] = {0,180,90,100,160,170,145,180};
  int mount2[10] = {145,180,250,100,340,180};
  int mount3[10] = {340,180,400,90,460,180,520,85,580,180};
  int mount4[20] = {570,170,610,75,640,150,640,180,580,180,570,170};
  int mount_b[20] = {460,180,340,180,145,180,0,180};
  int mount_bottom[40] = {0,210,115,240,117,250,230,310,225,315,260,340,360,490,0,490,0,210};

  //TREE
  int tree[10]  = {545,230,560,245,530,245,545,230};
  int trunck1[16] = {540,240,550,240,550,255,540,255,540,240};


initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
//CLOUDS
setfillstyle(SOLID_FILL,15);

ellipse(365,40,35,170,15,10);
ellipse(380,45,320,105,10,10);
ellipse(350,50,60,195,14,10);
line(337,52,387,52);


ellipse(255,40,35,170,15,10);
ellipse(270,45,320,105,10,10);
ellipse(240,50,60,195,14,10);
line(226,52,277,52);
floodfill(256,42,15);

floodfill(366,42,15);

//SKY
setfillstyle(SOLID_FILL, 5);

floodfill(2,2,WHITE);

//Garden
setfillstyle(SOLID_FILL, GREEN);

line(0,180,640,180);
floodfill(440,307,15);

//HUT
setfillstyle(INTERLEAVE_FILL, BROWN);

drawpoly(4, tri);
drawpoly(5, rectu);
drawpoly(5,rectf);
drawpoly(4,rects);

fillpoly(5,rectu);
fillpoly(4, tri);

setfillstyle(SOLID_FILL, 4);

fillpoly(5,rectf);
fillpoly(4,rects);
drawpoly(6, door);



//SUN
setfillstyle(SOLID_FILL,RED);
circle(150,140,30);
floodfill(152,142,15);

setfillstyle(SOLID_FILL,YELLOW);
setcolor(YELLOW);
drawpoly(4,ray);
fillpoly(4,ray);
drawpoly(4,ray1);
fillpoly(4,ray1);
drawpoly(4,ray2);
fillpoly(4,ray2);
drawpoly(4,ray3);
fillpoly(4,ray3);
drawpoly(4,ray4);
fillpoly(4, ray4);
drawpoly(4,ray5);
fillpoly(4,ray5);
drawpoly(4,ray6);
fillpoly(4,ray6);
drawpoly(4,ray7);
fillpoly(4, ray7);

//HUT COLOR
setfillstyle(CLOSE_DOT_FILL,4);
setcolor(BLACK);
fillpoly(5, door);
drawpoly(4,w1);
fillpoly(4,w1);
drawpoly(4,w2);
fillpoly(4, w2);

setfillstyle(LTSLASH_FILL, BROWN);

drawpoly(5, chimney);
fillpoly(5,chimney);

//mountains
setfillstyle(CLOSE_DOT_FILL, BROWN);
setcolor(BLACK);
drawpoly(4,mount1);
drawpoly(3, mount2);
drawpoly(5,mount3);
drawpoly(6,mount4);


fillpoly(4,mount1) ;
fillpoly(3,mount2);
fillpoly(6,mount4);
fillpoly(5,mount3);
fillpoly(3,mount_b);

setcolor(BLACK);
drawpoly(9,mount_bottom);
fillpoly(9,mount_bottom);
setcolor(WHITE);
line(117,249,117,325);
line(225,315,225,490);

//WATER
setfillstyle(INTERLEAVE_FILL,BLUE);
setcolor(BLUE);
sector(0,500,0,97,230,200);


setfillstyle(SOLID_FILL, WHITE);
//BIRDS
setcolor(BLACK);
//B1
arc(450,55,0,62,10);
arc(471,55,134,192,10);
//B2
arc(460,50,0,62,10);
arc(481,50,134,192,10);
//B3
arc(470,57,0,62,10);
arc(491,57,134,192,10);
//B4
arc(500,20,0,62,10);
arc(521,20,134,192,10);
//B5
arc(510,26,0,62,10);
arc(531,26,134,192,10);


//TREE
//arc(540,240,330,40,20 );
//arc(600,240,130,210,20 ) ;
setfillstyle(SOLID_FILL, GREEN);
setcolor(BLACK);
//drawpoly(4,tree);
//drawpoly(5, trunck1);
getch();
}