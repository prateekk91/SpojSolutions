# include<stdio.h>

long long int max(long long int a,long long int b)
{
	return a>=b?a:b;
}

long long int min(long long int a,long long int b)
{
	return a<=b?a:b;
}

long long int gcd(long long int a,long long int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main()
{
	int t;
	long long int s1,s2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&s1,&s2);
		long long int ans = max(s1,s2) - min(s1,s2);
		if(ans<0)
			ans *= -1;
		if(s1<0)
			s1 *= -1;
		if(s2<0)
			s2 *= -1;
		
		
		ans = ans / gcd(s1,s2);
		
		printf("%lld\n",ans);
		
	}
	return 0;
}