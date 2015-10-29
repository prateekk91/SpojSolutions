# include<stdio.h>
# include<math.h>
int main()
{
	int t,v;
	double tsa;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&v);
		
		tsa = (3*sqrt(3)/2) * (double)pow((4*v),(double)(2/3.0));
		printf("%.10lf\n",tsa);
	}
	return 0;
}