# include<cstdio>
# include<cmath>
# include<algorithm>
using namespace std;
int main()
{
	int n,m,i,j;
	int x,y;
	int p[50][50];
	int ans[50][50];
	scanf("%d%d",&n,&m);
	scanf("%d%d",&x,&y);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	
	
	
	for(j=0;j<=m;j++)
		ans[0][j]=-20000;
	for(i=0;i<=n;i++)
		ans[i][0]=-20000;
	x--;
	y--;
	ans[1][1]=p[x][y];
	
	/*
	printf("array p:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
	printf("\nArray ans:\n");
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			printf("%d ",ans[i][j]);
		}
		printf("\n");
	}
	*/
	for(i=0;i<(n-x);i++)
	{
		for(j=0;j<(m-y);j++)
		{
			if(!(i==0 && j==0))
				ans[i+1][j+1] = max(ans[i][j+1],ans[i+1][j]) - p[i+x][j+y];
//			printf("%d ",ans[i+1][j+1]);
		}
//		printf("\n");
	}
	if(ans[n-x][m-y]<0)
		printf("N\n");
	else
		printf("Y %d\n",ans[n-x][m-y]);
	return 0;
}	