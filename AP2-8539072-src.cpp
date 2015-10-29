# include<cstdio>
# include<cmath>
# include<algorithm>
using namespace std;
int main()
{
	int t;
	long long int x,y,s,terms,a,l,d,i;
	double mid;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld%lld",&x,&y,&s);
		terms = (s*2)/(x+y);
		d = ((2*(s-2*(x+y))/(terms-4))-(2*x))/(terms-5);
		a = (x - (2*d));
		l = (y + (2*d));
		printf("%lld\n",terms);
		for(i=0;i<terms-1;i++)
			printf("%lld ",(a+(i*d)));
		printf("%lld\n",l);
	}
	return 0;
}
		
	