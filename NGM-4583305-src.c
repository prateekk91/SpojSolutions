# include<stdio.h>
int main()
{
	long long int n;
	while(scanf("%lld",&n)!=EOF)
	{
		if(n%10==0)
		printf("2\n");
		else
		printf("1\n%d\n",(int)(n%10));
	}
return 0;
}

