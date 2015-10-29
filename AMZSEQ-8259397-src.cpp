# include<cstdio>
# include<cmath>
# include<algorithm>
using namespace std;
int main()
{
	int t;
	int i,j;
	int a[10001],b[10001];
	a[0]=b[0]=0;
	a[1]=b[1]=1;
	for(i=2;i<=24;i++)
	{
		a[i] = a[i-1]+b[i-1];
		b[i] = a[i]+a[i-1];
	}
	scanf("%d",&j);
	int ans = (2*a[j])+b[j];
	printf("%d\n",ans);
	return 0;
}