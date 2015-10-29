#include<stdio.h>
# include<math.h>
int sum(int num);
int main()
{
int i,n,num;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&num);
sum(num);
}
return 0;
}

int sum(int num)
{
int i,sum=0;

int j=sqrt(num);
for(i=1;i<=j;i++)
{if(num%i==0)
{if((i*i)==num)
sum+=i;
else
sum+=(i+(num/i));}
}
printf("%d\n",sum-num);
return 0;
}