# include<cstdio>
# include<algorithm>
using namespace std;

int main()
{
	int t,i,cost;
	int n;
	int a[20][3];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		cost=0;
		for(i=0;i<n;i++)
		{
			scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
		}
		for(i=1;i<n;i++)
		{
			a[i][0]+=min(a[i-1][1],a[i-1][2]);
			a[i][1]+=min(a[i-1][0],a[i-1][2]);
			a[i][2]+=min(a[i-1][0],a[i-1][1]);
		}
		
		printf("%d\n",min(a[n-1][0],min(a[n-1][1],a[n-1][2])));
	}
	return 0;
}