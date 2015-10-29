# include<cstdio>
# include<cmath>
# include<algorithm>
using namespace std;
int main()
{
	int t,n,count;
	long long int k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%lld",&n,&k);
		count=0;
		if(k==1)
			printf("Male\n");
		else if(k==2)
			printf("Female\n");
		else
		{
			k--;
			while(k>1)
			{
				if(k&1)
					count++;
				k>>=1;
			}
			if(count&1)
				printf("Male\n");
			else
				printf("Female\n");
		}
	}
	return 0;
}