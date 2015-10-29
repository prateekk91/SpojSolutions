# include<stdio.h>
# include<string.h>
int main()
{
char in[4];
int quat=0,thqt=0,half=0,n,x=1;
scanf("%d",&n);
while(n--)
{
scanf("%s",in);
if(strcmp(in,"1/2")==0)
half++;
if(strcmp(in,"1/4")==0)
quat++;
if(strcmp(in,"3/4")==0)
thqt++;
}

x+=half/2;
half=half%2;
x+=thqt;
quat=quat-thqt;
if(quat<0)
quat=0;

if(half==1)
{if(quat>=2)
{x++;
quat=quat-2;
half=0;
}
}

if(half==1)
x++;

else
{
x+=quat/4;
quat=quat%4;
if(quat!=0)
x++;
}
printf("%d",x);
return 0;
}
