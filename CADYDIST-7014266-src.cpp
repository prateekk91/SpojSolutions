# include<cstdio>
# include<cmath>
# include<algorithm>
using namespace std;
int main()
{
	
	unsigned long long int n,str[100001],cost[100001],i,ans;
	
	while(1)
	{
		ans=0;
		scanf("%llu",&n);
		if(n==0)
			break;
		for(i=0;i<n;i++)
			scanf("%llu",&str[i]);
		for(i=0;i<n;i++)
			scanf("%llu",&cost[i]);
		sort(str,str+n);
		sort(cost,cost+n);

		
		for(i=0;i<n;i++)
		{
			ans += str[i] * cost[n-i-1];
		}
		printf("%llu\n",ans);
	}
	return 0;
}