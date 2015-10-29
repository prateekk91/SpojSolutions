# include<stdio.h>
#include<stdlib.h>

int main()
{
int i,w,i1,w1;




do
{

scanf("%d%d",&i,&w);
if(i==-1&&w==-1)
break;

if((i%1000==0)&&(w%37==0))
{if(i/1000==w/37)
printf("Y\n");
else
printf("N\n");}
else
printf("N\n");
}while(w!=-1&&i!=-1);

return 0;
}