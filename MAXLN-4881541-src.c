# include<stdio.h>
# include<math.h>
int main()
{
	int t,i;
	long long int r;
	double x,y;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%lld",&r);
		x = sqrt((4*r*r)-0.25);
		y = sqrt((4*r*r)-(x*x));
		printf("Case %d: %.2lf\n",i,(x*x)+y);
	}
	return 0;
}