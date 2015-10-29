# include<cstdio>
using namespace std;
#define ll long long int
ll maxim(ll a, ll b)
{
	return (a>b?a:b);
}


int main()
{
	int t,i;
	int a[300005],n;
	long long int m;
	ll max_so_far=0,max_ending_here=0;
	scanf("%d%lld",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int k=0;
	ll x;
	for(i=0;i<n;i++)
	{
		if(max_ending_here+a[i]<=m)
			max_ending_here+=a[i];
		else
		{
			max_ending_here+=a[i];
			while(max_ending_here>m)
			{
				max_ending_here=(max_ending_here-a[k]);
				k++;
			}
			
		}
		max_so_far=maxim(max_so_far,max_ending_here);
	//printf("%lld k=%d\n",max_ending_here,k);
	}
	printf("%lld\n",max_so_far);
	return 0;
}