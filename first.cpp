#include "headline.h"
#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <unistd.h>


void position()
{

    int x=1,y=1,z=1,c=1,n=1,k=0,m=0,cc=0;
    void *buff;
    void *bufff;
unsigned size;
size = imagesize(9,60,625,405);
buff = malloc(size);
bufff = malloc(size);
getimage(9,60,625,405,buff);
    char key;
    do
    {

        key=getch();
    switch(key)
        {
    case 75: //left
            {            getimage(9,60,625,405,bufff);


            x--;
            if(x==0)
            x=4;
            result(x,0,0,0,0,0);
            m=0;
            k=0;
            break;
            }
    case 77: //right
            {            getimage(9,60,625,405,bufff);
            x++;
            if(x==5)
            x=1;
            result(x,0,0,0,0,0);
            m=0;
            k=0;
            break;
            }
case 72: //up
            {
            y++;
            if(y==4)
            y=1;
            z++;
            if(z==3)
            z=1;
            c++;
            if(c==3)
            c=1;
            n++;
            if(n==6)
            n=1;
            if(m==1)
            result(x,y,z,c,n,k);
                break;
            }
        case 80: //down
            {
            y--;
            if(y==0)
            y=3;
            z--;
            if(z==0)
            z=2;
            c--;
            if(c==0)
            c=2;
            n--;
            if(n==0)
            n=5;
            if(m==1)
            result(x,y,z,c,n,k);
            break;
            }
        case 13: //enter
            {

                result(x,y,z,c,n,k);

                if(m==1)
                    {
            if(x==1)
                {
        if(y==1)
{
putimage(9,60,buff,COPY_PUT);
m=0;
read(y);

}
if(y==2)
{putimage(9,60,buff,COPY_PUT);
m=0;
   read(y);
}
if(y==3)
{putimage(9,60,buff,COPY_PUT);
m=0;
read(y);
}
                }
            if(x==2)
                {

if(z==1)
{
m=0;
 save(z);
putimage(9,60,bufff,COPY_PUT);
}

if(z==2)
{
    m=0;
    save(z);
    putimage(9,60,bufff,COPY_PUT);
}
                }
            if(x==3)
                {
        if(k==1)
                {

if(c==1)
{putimage(9,60,buff,COPY_PUT);
    m=0;
    sort(c,cc);
}
if(c==2)
{putimage(9,60,buff,COPY_PUT);
    m=0;
    sort(c,cc);
}
k=0;
                }
                else
                k=1;
                result(x,0,0,c,0,k);
                cc=n;
    }
                }
                else
m=1;
                if(x==4)
                {

 remove("sorted_1.txt");
 remove("sorted_2.dat");                   //clean();
        key='e';
                }

                break;
            }

            break;
                }
        }
    while(key!='e');
}
//////////////////////////////////////////
void result(int x, int y,int z,int c,int n,int k)
{
switch(x)
    {
    case 1:
        {

            scrin(2,8,8,8);


        break;
        }
    case 2:
        {

 scrin(8,2,8,8);

            break;
        }
    case 3:
    {
            scrin(8,8,2,8);

            break;
    }
    case 4:
        {
            scrin(8,8,8,4);
            break;
        }
    }
    if(x==1)
    {
        switch(y)
    {
    case 1:
        {
button(70,370,250,405,4,"Orginal file");
button(70,330,250,365,8,"Text file");
button(70,290,250,325,8,"Random access file");
        break;
        }
        case 2:
        {
button(70,370,250,405,8,"Orginal file");
button(70,330,250,365,4,"Text file");
button(70,290,250,325,8,"Random access file");
        break;
        }
        case 3:
        {
button(70,370,250,405,8,"Orginal file");
button(70,330,250,365,8,"Text file");
button(70,290,250,325,4,"Random access file");
        break;
        }
            break;
        }
    }
    if(x==2)
    {
        switch(z)
            {
        case 1:
                {
        button(196,370,376,405,4,"Text file");
        button(196,330,376,365,8,"Random access file");
            break;
                }
        case 2:
                {
        button(196,370,376,405,8,"Text file");
        button(196,330,376,365,4,"Random access file");
            break;
                }
            }
    }
    if(x==3)
    {
        if(k==1)
            {
        switch(c)
            {
        case 1:
                {
        button(506,250,625,285,4,"Ascending");
        button(506,290,625,325,8,"Descending");
                break;
                }
        case 2:
                {
        button(506,250,625,285,8,"Ascending");
        button(506,290,625,325,4,"Descending");
                break;
                }
            }
            }
        if(k==0)
        {
        switch(n)
        {
    case 1:
        {
            m(2,8,8,8,8);
            break;
        }
    case 2:
        {
            m(8,2,8,8,8);
            break;
        }
    case 3:
        {
            m(8,8,2,8,8);
            break;
        }
    case 4:
        {
            m(8,8,8,2,8);
            break;
        }
    case 5:
        {
            m(8,8,8,8,2);
            break;
        }
        }
    }
    }
}
//////////////////////////////////////
void m(int x,int x1,int x2 ,int x3, int x4)
{
    button(316,370,506,405,x,"Author");
    button(316,330,506,365,x1,"Book");
    button(316,290,506,325,x2,"Publishers");
    button(316,250,506,285,x3,"The year of publishing");
    button(316,210,506,245,x4,"Prices");
}

