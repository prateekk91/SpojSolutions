# include<stdio.h>
int main()
{
	int t;
	long long int n;
	int x;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%d",&n,&x);
		if(x==0)
			printf("Airborne wins.\n");
		else
			printf("Pagfloyd wins.\n");
	}
	return 0;
}