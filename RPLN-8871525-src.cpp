# include<cstdio>
# include<cmath>
# include<algorithm>
# define INF 1000000001
using namespace std;
long long int tree[300000];
long long int arr[100001];
void build(int n,int b,int e)
{
	if(b>e)
		return;
	if(b==e)
	{
		tree[n] = arr[b];
		return;
	}
	build(2*n,b,(b+e)/2);
	build(2*n+1,(b+e)/2+1,e);
	tree[n] = min(tree[n*2],tree[n*2+1]);
}
long long int query(int n,int b,int e,int i,int j)
{
	if(b>j || e<i)
		return INF;
	if(b>=i && e<=j)
		return tree[n];
	long long int p1 = query(2*n,b,(b+e)/2,i,j);
	long long int p2 = query(2*n+1,(b+e)/2+1,e,i,j);
	//printf("b=%d e=%d p1=%lld p2=%lld\n",b,e,p1,p2);
	if(p1==INF)
		return p2;
	if(p2==INF)
		return p1;
	return min(p1,p2);
}		
int main()
{
	int t;
	int n,q;
	int i,j,k,a,b;
	scanf("%d",&t);
	for(k=1;k<=t;k++)
	{
		scanf("%d%d",&n,&q);
		for(i=0;i<n;i++)
			scanf("%lld",&arr[i]);
		build(1,0,n-1);
		printf("Scenario #%d:\n",k);
//		for(i=0;i<3*n;i++)
//			printf("%d ",tree[i]);
		for(i=0;i<q;i++)
		{
			scanf("%d%d",&a,&b);
			if(b<a)
				swap(a,b);
			long long int ans = query(1,0,n-1,a-1,b-1);
			printf("%lld\n",ans);
		}
	}
	return 0;
}