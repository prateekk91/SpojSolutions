# include<cstdio>
# include<cmath>
# include<algorithm>
using namespace std;
int a[1000001];
int main()
{
	int t,n,i;
	scanf("%d",&t);
	a[0]=0;
	a[1]=2;
	for(i=2;i<=1000000;i++)
	{
		a[i] = (a[i-1]+(3*(i-1))+2)%1000007;
	}
	while(t--)
	{
		scanf("%d",&n);
		printf("%d\n",a[n]);
	}
	return 0;
}