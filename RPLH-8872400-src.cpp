# include<cstdio>
# include<cmath>
# include<algorithm>
using namespace std;
int main()
{
	int t,i;
	double d,s,a,g=9.806,ans;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%lf%lf",&d,&s);
		ans = (g*d)/(s*s);
		printf("Scenario #%d: ",i);
		if(ans>1)
			printf("-1\n");
		else
			printf("%.2lf\n",(asin(ans)/2)*180/(2*acos(0.0)) );
	}
	return 0;
}