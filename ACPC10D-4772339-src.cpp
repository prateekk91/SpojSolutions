# include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
	int count=0;
	int n;
	long long int k,sum=0;
	
	int i,j;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
			break;
		count++;
		long long int a[n][5];
		for(i=0;i<n;i++)
			a[i][0]=a[i][4]=2000000;

		for(i=0;i<n;i++)
			for(j=1;j<=3;j++)
				scanf("%lld",&a[i][j]);
		
		
		a[0][3]+=a[0][2];
		a[0][1]=2000000;
		
		for(i=1;i<n;i++)
		{
			for(j=1;j<=3;j++)
			{
				a[i][j]+=min(a[i][j-1],min(a[i-1][j-1],min(a[i-1][j],a[i-1][j+1])));
			}
		}
	//	for(i=0;i<n;i++)
	//	for(j=1;j<=3;j++)
	//	printf("%lld ",a[i][j]);
	//	printf("\n");
		
		printf("%d. %lld\n",count,a[n-1][2]);
	}
	return 0;
}