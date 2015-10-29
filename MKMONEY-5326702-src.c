# include<stdio.h>
# include<math.h>
int main()
{
	double p,r,t;
	
	int i=0,j=0;
	double ans;

	while(1)
	{
		scanf("%lf%lf%lf",&p,&r,&t);
		if(p==0 && r==0 && t==0)
			break;

		j++;
		ans=p;

		for(i=0;i<t;i++)
		{
			ans +=  ((int)floor(ans*r/t))/100.0;
			//printf("%lf\n",ans);
		}
		printf("Case %d. $%.2lf at %.2lf%% APR compounded %.0lf times yields $%.2lf\n",j,p,r,t,ans);
	}
return 0;
}