# include<cstdio>
# include<cmath>
using namespace std;
int main()
{
	int a,b;
	int t;
	int ans,i;
	scanf("%d",&t);
	while(t--)
	{
		ans=0;
		scanf("%d",&a);
		for(i=1;i<=a;i++)
		{
			scanf("%d",&b);
			if(b&1)
				ans^=i;
		}
		if(ans!=0)
			printf("Tom Wins\n");
		else
			printf("Hanks Wins\n");
	}
	return 0;
}