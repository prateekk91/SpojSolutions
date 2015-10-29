# include<stdio.h>
int main()
{
	int n;
	int id,m;
	int a[100000]={0};
	int b[100];
	scanf("%d",&n);
	int i,j,k;
	int count=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&id);
		b[i]=id;
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%d",&id);
			a[id]=1;
		}
	}
	for(i=0;i<n;i++)
	{
		a[b[i]]=0;
	}
	for(i=0;i<100000;i++)
	{
		if(a[i]==1)
			count++;
	}
	
	printf("%d\n",count);
	return 0;
}