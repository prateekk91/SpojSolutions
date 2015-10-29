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
		r*=2;
		printf("Case %d: %lld.25\n",i,r*r);
	}
	return 0;
}