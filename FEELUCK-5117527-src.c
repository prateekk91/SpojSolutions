# include<stdio.h>
int main()
{
	int t,i,j,rank[10];
	char in[10][500];
	scanf("%d",&t);
	for(j=1;j<=t;j++)
	{
		int max=0;
		for(i=0;i<10;i++)
		{
			scanf("%s%d",in[i],&rank[i]);
			if(rank[i]>max)
				max=rank[i];
		}
		printf("Case #%d:\n",j);
		for(i=0;i<10;i++)
		{
			if(rank[i]==max)
				printf("%s\n",in[i]);
		}
	}
	return 0;
}