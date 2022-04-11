#include "headline.h"
#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <unistd.h>
#include <malloc.h>

int read(int a)
{
         setbkcolor(8);
    int i,k=0;
	FILE *F;
    int n = sizeof(labr)/sizeof(labr[0]);
    char str[n];
switch(a)
{
case 1:
    {
        k=0;
            if ((F = fopen("Orginal.txt","r")) == NULL)
        {
            outtextxy(200,69,"Error occured while opening file");
            printf("Error occured while opening file\n");
        return 1;
        }
     else{
       i=0;

         while((fscanf(F, "%s %s %s %c %d %f\n", labr[i].avtor,labr[i].name,labr[i].izdat,&labr[i].sex,&labr[i].year, &labr[i].cost))!=EOF)
    {
     outtextxy(19,(69+k),labr[i].name);
     outtextxy(149,(69+k),labr[i].avtor);
     outtextxy(299,(69+k),labr[i].izdat);
     sprintf(str,"%c",labr[i].sex);
     outtextxy(409,(69+k),str);
     sprintf(str,"%d",labr[i].year);
     outtextxy(439,(69+k),str);
     sprintf(str,"%0.2f",labr[i].cost);
     outtextxy(524,(69+k),str);
        i++;
        k+=36;
    }
     }
     fclose(F);

        break;
    }
case 3:
    {

        k=0;
            if ((F = fopen("sorted_2.dat","r")) == NULL)
        {
            outtextxy(200,69,"Error occured while opening file");
        printf("Error occured while opening file\n");
        return 1;
        }
     else{
       i=0;
   //fwrite(&labr[i],sizeof(struct book),1,F)
   //fread(lab2,sizeof(struct book),10,F);

         for(i=0;i<n-1;i++)
         {
                     fread(&book2[i],sizeof(struct book),10,F);
     outtextxy(19,(69+k),book2[i].name);
     outtextxy(149,(69+k),book2[i].avtor);
     outtextxy(299,(69+k),book2[i].izdat);
     sprintf(str,"%c",book2[i].sex);
     outtextxy(409,(69+k),str);
     sprintf(str,"%d",book2[i].year);
     outtextxy(439,(69+k),str);
     sprintf(str,"%0.2f",book2[i].cost);
     outtextxy(524,(69+k),str);
        k+=36;
    }
     }
     fclose(F);

        break;
    }
case 2:
    {
        k=0;
            if ((F = fopen("sorted_1.txt","r")) == NULL)
        {
                    outtextxy(200,69,"Error occured while opening file");

        printf("Error occured while opening file\n");
        return 1;
        }
     else{
       i=0;

         for(i=0;i<n-1;i++)
    {
     fread(&book1[i],sizeof(struct book),10,F);
        //fscanf(F, "%s %s %s %c %d %f\n", lab1[i].avtor,lab1[i].name,lab1[i].izdat,&lab1[i].sex,&lab1[i].year, &lab1[i].cost);
     outtextxy(19,(69+k),book1[i].name);
     outtextxy(149,(69+k),book1[i].avtor);
     outtextxy(299,(69+k),book1[i].izdat);
     sprintf(str,"%c",book1[i].sex);
     outtextxy(409,(69+k),str);
     sprintf(str,"%d",book1[i].year);
     outtextxy(439,(69+k),str);
     sprintf(str,"%0.2f",book1[i].cost);
     outtextxy(524,(69+k),str);
        k+=36;
    }
     }
     fclose(F);

        break;
    }
}
	}
///////////////////////////////////////////////
int sort(int c, int cc)
{
    setbkcolor(8);
    int i,j;
    struct book labr1;
    int k=0;
int n = sizeof(labr)/sizeof(labr[0]);
char str[n];

  FILE *F;
  if((F=fopen("Orginal.txt","r"))==NULL)
  {
              outtextxy(200,60,"Error opening file");

      printf("Error occured while opening file\n");
      return 1;
  }
  else
  {
      i=0;

         while((fscanf(F, "%s %s %s %c %d %f\n", labr[i].avtor,labr[i].name,labr[i].izdat,&labr[i].sex,&labr[i].year, &labr[i].cost))!=EOF)
    {
        i++;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            switch(c)
            {
    case 2:
        {
          switch(cc)
          {
    case 1:
        {
         if(labr[j].avtor > labr[i].avtor)
    {
        labr1=labr[j];
        labr[j]=labr[i];
        labr[i]=labr1;
    }
            break;
        }
    case 2:
        {
     if(labr[j].name > labr[i].name)
    {
        labr1=labr[j];
        labr[j]=labr[i];
        labr[i]=labr1;
    }
            break;
        }
    case 3:
        {
     if(labr[j].izdat > labr[i].izdat)
    {
        labr1=labr[j];
        labr[j]=labr[i];
        labr[i]=labr1;
    }
            break;
        }
    case 4:
        {
         if(labr[j].year > labr[i].year)
    {
        labr1=labr[j];
        labr[j]=labr[i];
        labr[i]=labr1;
    }
            break;
        }
    case 5:
        {
         if(labr[j].cost > labr[i].cost)
    {
        labr1=labr[j];
        labr[j]=labr[i];
        labr[i]=labr1;
    }
            break;
        }
          }

    break;
        }
    case 1:
        {
           switch(cc)
          {
      case 1:
        {
         if(labr[j].avtor < labr[i].avtor)
    {
        labr1=labr[j];
        labr[j]=labr[i];
        labr[i]=labr1;
    }
            break;
        }
    case 2:
        {
     if(labr[j].name < labr[i].name)
    {
        labr1=labr[j];
        labr[j]=labr[i];
        labr[i]=labr1;
    }
            break;
        }
    case 3:
        {
     if(labr[j].izdat < labr[i].izdat)
    {
        labr1=labr[j];
        labr[j]=labr[i];
        labr[i]=labr1;
    }
            break;
        }
    case 4:
        {
         if(labr[j].year < labr[i].year)
    {
        labr1=labr[j];
        labr[j]=labr[i];
        labr[i]=labr1;
    }
            break;
        }
    case 5:
        {
         if(labr[j].cost < labr[i].cost)
    {
        labr1=labr[j];
        labr[j]=labr[i];
        labr[i]=labr1;
    }
            break;
        }
          }

    break;
        }
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
     outtextxy(19,(69+k),labr[i].name);
     outtextxy(149,(69+k),labr[i].avtor);
     outtextxy(299,(69+k),labr[i].izdat);
     sprintf(str,"%c",labr[i].sex);
     outtextxy(409,(69+k),str);
     sprintf(str,"%d",labr[i].year);
     outtextxy(439,(69+k),str);
     sprintf(str,"%0.2f",labr[i].cost);
     outtextxy(524,(69+k),str);
        k+=36;

    }
}
}
///////////////////////////////////////////
int save(int format)
{
    setbkcolor(8);
    FILE *F;
    int i=0,w=0;
    int n= sizeof(labr)/sizeof(labr[0]);
    if(format==1)
        {
    if((F=fopen("sorted_1.txt","w"))==NULL)
    {
                outtextxy(200,60,"Error opening or making file");

        printf("Error opening or making file");
        return 1;
    }
    else
        for(i=0;i<10;i++)
            {
    fwrite(&labr[i],sizeof(struct book),1,F);
    //fprintf(F,"%s %s %s %c %d %f\n",labr[i].avtor,labr[i].name,labr[i].izdat,&labr[i].sex,&labr[i].year, &labr[i].cost);
        }
fclose(F);
}
        else if(format==2)
{
    if((F=fopen("sorted_2.dat","w"))==NULL)
    {
        outtextxy(200,60,"Error opening or making file");
        printf("Error opening or making file");
        return 1;
    }
    else
        for(i=0;i<10;i++)
            {
    fwrite(&labr[i],sizeof(struct book),1,F);
            }
fclose(F);
}

}
