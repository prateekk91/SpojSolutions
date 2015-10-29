#include<stdio.h>
int main()
{int t,i,s=0,x;
scanf("%d",&t);
for(i=0;i<t;i++)
{scanf("%d",&x);
if(x>0)
s+=x;
}printf("%d",s);
return 0;}