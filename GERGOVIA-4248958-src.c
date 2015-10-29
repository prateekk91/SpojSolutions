# include<stdio.h>
int main()
{
int i,t;
int a[100000];
long long int sum=0;
while(1)
{
scanf("%d",&t);
if(t==0)
break;
for(i=0;i<t;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<t;i++)
{
a[i]+=a[i-1];
sum+=abs(a[i-1]);
}
printf("%lld\n",sum);sum=0;
}
return 0;
}