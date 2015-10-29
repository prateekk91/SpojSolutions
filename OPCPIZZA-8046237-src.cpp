# include<cstdio>
# include<cmath>
# include<algorithm>
using namespace std;
int main()
{	
	int t;
	int i,j,n,m;
	int a[100001],count;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			int x = m-a[i];
			if(binary_search(a,a+n,x))
				count++;
		}
		printf("%d\n",count/2);
	}
	return 0;
}
	