# include<stdio.h>
int main()
{
	long long int n,ans,x;
	while(scanf("%lld",&n)!=-1)
	{
		printf("%lld\n",(n/9)*81 + (n%9)*(n%9));
	}
	return 0;
}