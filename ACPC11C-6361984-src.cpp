# include<cstdio>
# include<cmath>
# include<cstring>
# include<algorithm>
using namespace std;
int main()
{
	int a,b,i,j,k;
	int t,n;
	int arr[1000001],maxim=0,loc,before,after;
	int sum[1000001]={0},ans;
	scanf("%d",&t);
	while(t--)
	{
		maxim=0,loc=-1;
		ans=1000000001;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
			
		}
		sum[0]=arr[0];
		for(i=1;i<n;i++)
		{
			sum[i] = sum[i-1]+arr[i];
		}
		ans = sum[n-1] - max(arr[0],arr[n-1]);
		for(i=1;i<n-1;i++)
		{
			before = sum[i-1];
			after = sum[n-1] - before - arr[i];
			if(before>after)
			{
				swap(before,after);
			}
			
				ans = min(ans,(2*before) + after);
			
		}
//		ans = min(ans,sum[n-1] - max(arr[0],arr[n-1]));
//		for(i=0;i<n;i++)
//			printf("%d\n",sum[i]);
		printf("%d\n",ans);
	}
	return 0;
}

