# include<stdio.h>
int main()
{int i,a,n,d,ad;
long int b;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d%ld",&a,&b);
ad=a%10;
if(b==0)
d=1;
else
{
if(ad==1)
d=1;
if(ad==2)
{
if(b%4==0)
d=6;
if(b%4==1)
d=2;
if(b%4==2)
d=4;
if(b%4==3)
d=8;}
if(ad==3)
{if(b%4==0)
d=1;
if(b%4==1)
d=3;
if(b%4==2)
d=9;
if(b%4==3)
d=7;
}
if(ad==4)
{if(b%2==0)
d=6;
if(b%2==1)
d=4;}
if(ad==5)
d=5;
if(ad==6)
d=6;
if(ad==7)
{if(b%4==0)
d=1;
if(b%4==1)
d=7;
if(b%4==2)
d=9;
if(b%4==3)
d=3;}
if(ad==8)
{if(b%4==0)
d=6;
if(b%4==1)
d=8;
if(b%4==2)
d=4;
if(b%4==3)
d=2;}
if(ad==9)
{if(b%2==0)
d=1;
if(b%2==1)
d=9;}
if(ad==0)
d=0;}
printf("%d\n",d);}
return 0;}