# include<cstdio>
# include<cmath>
# include<algorithm>
using namespace std;
int main()
{
	int t;
	int n,i,j=0;
	int a[20];
	a[0]=0;
	a[1]=a[2]=1;
	for(i=3;i<=10;i++)
		a[i] = pow(i,i-2);
	while(1)
	{
		scanf("%d",&n);
		j++;
		if(n==0)
			break;
		printf("Case %d, N = %d, # of different labelings = %d\n",j,n,a[n]);
	}
	return 0;
}
	
