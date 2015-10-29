# include<stdio.h>
int main()
{
	int t,i,j;
	short int agnes[2100],tom[2100];
	int len_agnes,len_tom,ans;
	
	scanf("%d",&t);
	while(t--)
	{
		ans=0;
		len_agnes=0;
		len_tom=0;
		int n;
		while(1)
		{
			scanf("%d",&n);
			if(n==0)
				break;
			agnes[++len_agnes]=n;
		}
		while(1)
		{
			len_tom=0;
			while(1)
			{
				scanf("%d",&n);
				if(n==0)
					break;
				tom[++len_tom]=n;
			}
			if(len_tom==0)
				break;
			int a[len_agnes+1][len_tom+1];
			for(i=0;i<=len_agnes;i++)
				a[i][0]=0;
			for(j=0;j<=len_tom;j++)
				a[0][j]=0;
				
			for(i=1;i<=len_agnes;i++)
			{
				for(j=1;j<=len_tom;j++)
				{
					if(agnes[i]==tom[j])
						a[i][j]=a[i-1][j-1]+1;
					else
					if(a[i-1][j]>=a[i][j-1])
						a[i][j]=a[i-1][j];
					else
						a[i][j]=a[i][j-1];
				}
			}
			if(a[len_agnes][len_tom]>=ans)
			{
				ans = a[len_agnes][len_tom];
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
			
	