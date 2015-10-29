# include<stdio.h>
#include<math.h>
int main()
{
long long int n;
while(1)
{
scanf("%lld",&n);
if(n==-1)
break;
double an=(n-1.00)/3;
long long int t;
int flag=0;
for(t=0;;t++)
{

if((double)(t*(t+1))==an)
{flag=1;
break;
}
if((t*(t+1))>an)break;
}
if(flag==0)
printf("N\n");
else
printf("Y\n");
}
return 0;
}