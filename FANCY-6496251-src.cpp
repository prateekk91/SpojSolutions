# include<cstdio>
# include<cmath>
# include<algorithm>
# include<cstring>
using namespace std;
int main()
{
	int i,j,t;
	int arr[40];
	arr[0]=1;
	for(i=1;i<40;i++)
		arr[i] = 2*arr[i-1];
	char in[40];
	int l,count;
	long long int ans;
	char c = 10;
	scanf("%d",&t);
	while(t--)
	{
		count=1;
		ans = 1;
		c = 10;
		scanf("%s",in);
		l = strlen(in);
		for(i=0;i<l;i++)
		{
			if(c!=in[i])
			{
				ans *= arr[count-1];
				count=1;
				c = in[i];
				
			}
			else
				count++;
		}
		ans *= arr[count-1];
		printf("%lld\n",ans);
	}
	return 0;
}

