# include<cstdio>
# include<cmath>
# include<algorithm>
# include<cstring>
# include<string>
using namespace std;
int main()
{
	int t;
	long long int n,i,j;
	int count;
	while(1)
	{
		scanf("%lld",&n);
		if(n==0)
			break;
		for(i=2;i*i<=n;i++)
		{
			count=0;
			while(n%i==0)
			{
				count++;
				n/=i;
			}
			if(count)
			{
				printf("%lld^%d",i,count);
				if(n>1)
					printf(" ");
				count=0;
			}
			
		}
		if(n>1)
			printf("%lld^%d\n",n,1);
		else
			printf("\n");
	}
	return 0;
}
