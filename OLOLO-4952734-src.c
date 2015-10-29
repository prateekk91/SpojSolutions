# include<stdio.h>
int main()
{
	int n;
	long long int pi,ans=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%lld",&pi);
		
		ans ^= pi;
	}
	printf("%lld\n",ans);
	return 0;
}
