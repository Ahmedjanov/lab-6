#include "headline.h"
#include <stdio.h>
#include <graphics.h>
#include <conio.h>


int main(void)
{
   int GrDr, GrMod, rez ;

    GrDr=DETECT ;

   initgraph(&GrDr,&GrMod," ") ; // GrDr - графический драйвер;
                                                         //GrMod -графический режим;
// третий параметр- путь до графического       //драйвера;

   rez=graphresult() ;
   if(rez != grOk)
{
    printf("\n ООError graph modeи") ;
   return(1) ;
 }

setcolor(0);
 setfillstyle(1,8);
 bar(0,0,639,479);
 float i;
 for(i=9;i<=629;i+=624/5)
 {
     line(i,0,i,384);
 }
for(i=385/7;i<=385;i+=385/10.5)
{
    line(9,i,629,i);
}
line(0,390,639,390);

setbkcolor(8);
outtextxy(39,19,"Author");
outtextxy(174,19,"Book");
outtextxy(285,19,"Publishers");
outtextxy(400,10,"The year of");
outtextxy(402,30,"publishing");
outtextxy(540,19,"Prices");


scrin(2,8,8,8);
position();


closegraph() ;
return(0) ;
}

void scrin(int x1,int x2, int x3, int x4)
{
button(70,415,195,450,x1,"Open");
button(196,415,320,450,x2,"Save");
button(321,415,445,450,x3,"Sort");
button(446,415,570,450,x4,"Exit");
}

void button(int x, int y,int x1,int y1,int colour, char *st)
{
    setcolor(0);
    setfillstyle(1,colour);
    rectangle(x,y,x1,y1);
    bar(x+1,y+1,x1,y1);
    setbkcolor(colour);
    outtextxy(x+30,y+10,st);
}
