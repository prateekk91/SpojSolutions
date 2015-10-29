# include<stdio.h>
int main()
{
	long long int m,n,sum=0,x;
	int i;
	while(1)
	{
		sum=0;
		scanf("%lld%lld",&n,&m);
		if(n==-1 && m==-1)
			break;
		for(i=n;i>=1;i--)
		{
			scanf("%lld",&x);
			sum+=(x*i);
		}
		sum*=m;
		printf("%lld\n",sum);
	}
	return 0;
}