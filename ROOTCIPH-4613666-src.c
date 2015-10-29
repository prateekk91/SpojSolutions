# include<stdio.h>
int main()
{
	long long int a,b,c;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld%lld",&a,&b,&c);
		long long int ans = (a*a) - (2*b);
		printf("%lld\n",ans);
	}
	return 0;
}