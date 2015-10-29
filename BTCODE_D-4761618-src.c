# include<stdio.h>
# include<math.h>

long long int min(long long int a,long long int b)
{
	return (a<b?a:b);
}


int main()
{
	int m,n,t,i,j;
	scanf("%d",&t);
	long long int a[100][100],b[100][100],c[100][100],ans[100][100]={0};
	
	while(t--)
	{
		scanf("%d%d",&m,&n);
		
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%lld",&a[i][j]);
			}
		}
		
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%lld",&b[i][j]);
			}
		}

		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%lld",&c[i][j]);
			}
		}

		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				ans[i][j] = min(a[i][j],b[i][j])*c[i][j];
			}
		}
		
		long long int maxim=0,maximum=0;
		
		for(i=0;i<m;i++)
		{	
			maxim=0;
			
			for(j=0;j<n;j++)
			{
				if(ans[i][j] > maxim)
				maxim = ans[i][j];
			}
			maximum += maxim;
		}
	
		printf("%lld\n",maximum);
	}
	return 0;
}