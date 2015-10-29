# include<stdio.h>
int main()
{
int i,tc,n,tot;
scanf("%d",&tc);
while(tc--)
{
	tot=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		tot+=(a[i]/(i+1));
	}
	if(tot&1)
	{
		printf("ALICE\n");
	}
	else
	printf("BOB\n");
}
return 0;
}