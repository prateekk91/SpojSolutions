# include<stdio.h>
#include<stdlib.h>

int main()
{
int i,n;
long int s=0;
while(1)
{
scanf("%d",&n);
if(n==0)
exit(0);
for(i=1;i<=n;i++)
{s+=(i*i);
}
printf("%ld\n",s);
s=0;
}
return 0;
}