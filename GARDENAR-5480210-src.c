# include<stdio.h>
# include<math.h>
int main()
{
	int t;	
	double a,b,c;
	double ans;
	double s;
	
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf%lf%lf",&a,&b,&c);
		s=(a+b+c)/2;
		
		ans = 0.5* ( (0.25*sqrt(3)*((a*a)+(b*b)+(c*c))) + 3*sqrt(s*(s-a)*(s-b)*(s-c)) );
		printf("%.2lf\n",ans);
	}
	return 0;
}
		