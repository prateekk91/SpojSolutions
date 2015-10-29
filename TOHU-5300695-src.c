# include<stdio.h>
int main()
{
	int t;
	double n,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf",&n);
		//printf("%.11lf\n",(1/((n+1)*(n+2))));
		ans = 0.5 * (0.5 - (1.0/((n+1.0)*(n+2.0))))- (1.0/6.0) + (2.0/3.0);
		printf("%.11lf\n",ans);
	}
	return 0;
}