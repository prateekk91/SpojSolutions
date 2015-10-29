# include<stdio.h>
int main()
{
int t,mygen,sgen;
char name[20];
scanf("%d%d",&t,&mygen);
while(t--)
{
scanf("%s%d",name,&sgen);
if(mygen==sgen)
printf("Welcome %s\n",name);
else
printf("Welcome %s, ;)\n",name);
}
return 0;
}