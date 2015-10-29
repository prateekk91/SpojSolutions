# include<cstdio>
# include<algorithm>
# include<cstring>
using namespace std;
int main()
{
	int t;
	int i,j;
	int m[2004][2];
	char a[2002],b[2002];
	int l1,l2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s%s",a,b);
		l1=strlen(a);
		l2=strlen(b);
		
		for(i=strlen(a);i>=0;i--)
		{
			a[i+1]=a[i];
			m[i][0]=i;
		}
		
		for(i=l2;i>=0;i--)
			b[i+1]=b[i];
		/*
		for(i=0;i<=l1;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("%d ",m[i][j]);
			}
			printf("\n");
		}
		*/
		int diag;
		for(i=1;i<=l2;i++)
		{
			m[0][1]=i;
			
			for(j=1;j<=l1;j++)
			{
				diag=m[j-1][0];
				//printf("m[%d][0]=%d ",j,m[j][0]);
				if(a[j]!=b[i])
					diag++;
				//printf("diag=%d\n",diag);
				
				m[j][1] = min(diag,min(m[j-1][1]+1,m[j][0]+1));
			}
			
			for(j=0;j<=l1;j++)
				m[j][0]=m[j][1];
		}
		printf("%d\n",m[l1][1]);
	}
	return 0;
}
				