# include<cstdio>
# include<cmath>
# include<algorithm>
using namespace std;
int main()
{
	int t;
	double a,b,x,y;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf%lf%lf%lf",&a,&b,&x,&y);
		if(a<b)
			swap(a,b);
		if(x<y)
			swap(x,y);
		double z = ( (2*x*y*a) + (((x*x)-(y*y))* sqrt((x*x)+(y*y)-(a*a))))/((x*x)+(y*y));
		//printf("%lf\n",z);
		if( (a>=x && b>=y) || (x>a && b> ( z)))
			printf("Escape is possible.\n");
		else
			printf("Box cannot be dropped.\n");
	}
	return 0;
}