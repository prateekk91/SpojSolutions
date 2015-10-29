# include<stdio.h>
int main()
{
	int t;
	int v;
	int sum,avg,i;
	while(scanf("%d",&t)!=EOF)
	{
		
		if(t==0)
			break;
		sum=0;
		for(i=0;i<t;i++)
		{
			scanf("%d",&v);
			sum += v;
		}
		avg = sum/t;
		printf("%d\n",avg);
	}
	return 0;
}