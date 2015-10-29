# include<stdio.h>
int main()
{
	long long int n;
	long long int ans;
	while(1)
	{
		scanf("%lld",&n);
		if(n==0)
			break;
		n--;
		
		ans = 7*n + (3*n*(n-1))/2;
		ans += 5;
		printf("%lld\n",ans);
	}
	return 0;
}