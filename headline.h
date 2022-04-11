#ifndef HEADLINE_H_INCLUDED
#define HEADLINE_H_INCLUDED


struct book
{
 char name[20];
 char avtor[20];
 char izdat[10];
 char sex;
 int year;
 float cost;
}static labr[10],book1[10],book2[10];

void m(int x,int x1,int x2 ,int x3, int x4);
void scrin(int x1, int x2, int x3, int x4);
void button(int x, int y,int x1,int y1,int colour, char *st);
void result(int x, int y, int z,int c,int n,int k);
void position();
int read(int a);
int sort(int c, int n);
int save(int format);

#endif
