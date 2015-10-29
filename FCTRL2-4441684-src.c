# include<stdio.h>
int main()
{
	int sum[100][200]={0},i,j,k,t,copy,rem,num,l,tc;
	sum[0][199]=1;
	for(i=2;i<=100;i++)
	{
		j=199;copy=i;
		
		while(copy)
		{
			rem=copy%10;
			copy/=10;
			
			for(k=j,l=199;(k-100)+i;k--,l--)
			{	
				
				sum[i-1][k]+=(sum[i-2][l]*rem);
				
				t=k;
				while(sum[i-1][t]>=10)
				{
					sum[i-1][t-1]+=sum[i-1][t]/10;
					sum[i-1][t]%=10;
					t--;
				}
			}
		j--;
		}
	}
	scanf("%d",&tc);
	while(tc--)
	{
	scanf("%d",&num);
	for(i=0;!sum[num-1][i];i++);
	for(;i<=199;i++)
	printf("%d",sum[num-1][i]);
	printf("\n");
	}
	return 0;
}
		