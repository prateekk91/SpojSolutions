# include<cstdio>
# include<cmath>

int min(int a,int b,int c)
{
	return (a<b?(a<c?a:c):(b<c?b:c));
}

int main()
{
	int m,n;
	scanf("%d%d",&n,&m);
	int i,j,a[n][m+2];
	
	for(i=0;i<n;i++)
	{
		a[i][0] = a[i][m+1] = 1000;
	}
	
	for(i=0;i<n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=1;i<n;i++)
	{	
		for(j=1;j<=m;j++)
		{
			a[i][j] = min ((a[i][j]+a[i-1][j-1]),(a[i][j]+a[i-1][j]),(a[i][j]+a[i-1][j+1]) 

);
		}
	}
	
	int minim=100000;
	
	for(j=1;j<=m;j++)
	{
		minim = min(a[n-1][j],minim,100000);
	}
	printf("%d\n",minim);
	
	return 0;
}