# include<stdio.h>
int main()
{
long long int t;
unsigned long long int ans,n;
scanf("%lld",&t);
while(t--)
{
scanf("%llu",&n);

if(n%4==1)
ans=(((n-1)/4)*1000)+192;
if(n%4==2)
ans=(((n-1)/4)*1000)+442;
if(n%4==3)
ans=(((n-1)/4)*1000)+692;
if(n%4==0)
ans=(((n-1)/4)*1000)+942;
printf("%llu\n",ans);
}
return 0;
}