# include<stdio.h>
int main()
{
int n,b,i,j;
while(1)
{	
	int flag=0;
	scanf("%d%d",&n,&b);
	if(n==0&&b==0)
		break;
	
	int barray[b],yes[n+1];
	
	for(i=0;i<n+1;i++)
	yes[i]=0;

	for(i=0;i<b;i++)
	{
		scanf("%d",&barray[i]);
		
		
	}
	for(i=0;i<b;i++)
	{
	int value=barray[i];
	
	}
	
	
	
	for(i=0;i<b;i++)
	{
		for(j=i;j<b;j++)
		{
		int value=abs(barray[i]-barray[j]);
		yes[value]=1;
		}
	}
	for(i=0;i<n+1;i++)
	{
		if(yes[i]==0)
		{
		printf("N\n");
		flag=1;
		break;
		}
	}
	
	if(flag==0)
	printf("Y\n");

}
return 0;
}
