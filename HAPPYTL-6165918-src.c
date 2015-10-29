# include<stdio.h>
int main()
{
	int m,n;
	int so,de;
	int s,d;
	int e;
	int i,j;
	int start[10010];
	int end[10010];
	int count;
while(1)
{
	scanf("%d%d",&n,&m);
	if(n==0 && m==0)
		break;	
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d%d",&so,&de,&s,&d);
		start[i]=s;
		end[i]=s+d;
	}
	for(j=0;j<m;j++)
	{
		scanf("%d%d",&s,&d);
		e=s+d;
		count=0;
		for(i=0;i<n;i++)
		{
			if(!((s<=start[i]&&e<=start[i]) || (s>=end[i]&&e>=end[i])))
				count++;
		}
		printf("%d\n",count);
	}
}
	return 0;
}	