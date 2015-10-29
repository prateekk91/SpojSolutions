# include<cstdio>

# include<cmath>



int max(int a,int b,int c)

{

	return (a>b?(a>c?a:c):(b>c?b:c));

}



int main()

{

	int m,n;
	int t;

	

	int i,j,a[100][100];

	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);

		for(i=0;i<n;i++)

		{

			a[i][0] = a[i][m+1] = -100;

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

				a[i][j] = max ((a[i][j]+a[i-1][j-1]),(a[i][j]+a[i-1][j]),(a[i][j]+a[i-1][j+1]) );

			}

		}

		

		int maxim=0;

		

		for(j=1;j<=m;j++)

		{

			maxim = max(a[n-1][j],maxim,0);

		}

		printf("%d\n",maxim);

	}

		return 0;

	}		
