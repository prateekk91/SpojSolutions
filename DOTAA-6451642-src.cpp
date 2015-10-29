# include<cstdio>
# include<cmath>
using namespace std;
int main()
{
	int t,m,n,d,h;
	scanf("%d",&t);
	int ans;
	while(t--)
	{
		ans=0;
		scanf("%d%d%d",&n,&m,&d);
		while(n--)
		{
			scanf("%d",&h);
			ans += ceil(h/(d*1.0)) - 1;
		}
		if(ans >= m)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
