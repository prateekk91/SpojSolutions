# include<cstdio>
# include<cmath>
# include<algorithm>
using namespace std;
int main()
{
	int t,i,j,k;
	int n,p;
	int arr[20][20];
	int cond1,cond2,cond3;
	int count1,count2,count3;
	
	scanf("%d",&t);
	for(k=1;k<=t;k++)
	{
		count1=count2=count3=1;
		
		scanf("%d%d",&n,&p);
		for(i=0;i<n;i++)
		{
			for(j=0;j<p;j++)
			{
				scanf("%d",&arr[i][j]);
			}
		}
		
		for(i=0;i<n;i++)
		{
			cond2=0;
			cond3=1;
			for(j=0;j<p;j++)
			{
				cond2 |= arr[i][j];
				cond3 &= arr[i][j];
			}
			if(cond2==0)
				count2=0;
			if(cond3==1)
				count3=0;
		}
		
		for(j=0;j<p;j++)
		{
			cond1=0;
			for(i=0;i<n;i++)
			{
				cond1 |= arr[i][j];
			}
			if(cond1==0)
				count1=0;
		}
		printf("Case %d: %d\n",k,( (count1*4)+(count2*2)+count3) );
	}
	return 0;
}
//Case 1: 4
