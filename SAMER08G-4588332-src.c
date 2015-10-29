# include<stdio.h>
int main()
{
	int n,i,j;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
			break;
		int c[n],p[n];
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&c[i],&p[i]);
		}
		int flag=0;
		int original[n];
		for(i=0;i<n;i++)
		original[i]=0;
		
		for(i=0;i<n;i++)
		{
			if( (i+p[i]<0 || i+p[i]>=n) || (original[i+p[i]]!=0) )
				{
					flag=1;
					break;
				}
			original[i+p[i]]=c[i];
		}
		if(flag==1)
		printf("-1\n");
		else
		{
			for(i=0;i<n;i++)
			printf("%d ",original[i]);
			printf("\n");
		}
	}
return 0;
}
