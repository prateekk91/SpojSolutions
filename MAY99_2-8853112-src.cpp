# include<cstdio>
# include<cmath>
# include<algorithm>
using namespace std;
int main()
{
	int t;
	int rem[100];
	char arr[] = {'m','a','n','k','u'};
	unsigned long long int a[100];
	a[0]=1;
	int i,j,k;
	unsigned long long int mul=5;
	for(i=1;i<=26;i++)
	{
		a[i] = (a[i-1]+mul);
		mul*=5;
	//	printf("%llu\n",mul);
	}
	long long int n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(i=0;;i++)
			if(a[i]>n)
				break;
		i--;
		unsigned long long int x = n - a[i];
		int digits = i;
		//printf("x = %llu\n",x);
		//printf("digits = %d\n",digits);
		
		for(i=0;i<100;i++)
			rem[i]=0;
		i=0;
		while(x)
		{
			rem[i++] = x%5;
			x/=5;
		}
		i--;
		for(j=0;j<digits-i;j++)
			printf("%c",arr[0]);
		for(;i>=0;i--)
		{
		//	printf("%d ",rem[i]);
			printf("%c",arr[rem[i]]);
		}
		printf("\n");
	}
	return 0;
}
