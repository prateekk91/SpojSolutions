# include<stdio.h>
int main()
{
	int t;
	long long int n,m;
	int ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&m);
		ans = ((n-m) & ((m-1)/2))==0;
		printf("%d\n",ans);
	}
	return 0;
}