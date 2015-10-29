# include<cstdio>
# include<cmath>
# include<algorithm>
# define MOD 1000000007
using namespace std;
int main()
{
	int t,n;
	int m[70];
	int i,j;
	long long int ans=1;
	scanf("%d",&t);
	while(t--)
	{
		ans=1;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&m[i]);
		sort(m,m+n);
		for(i=0;i<n;i++)
		{
			ans = ans*(m[i]-i);
			ans%=MOD;
		}
		printf("%lld\n",ans);
	}
	printf("KILL BATMAN\n");
	return 0;
}