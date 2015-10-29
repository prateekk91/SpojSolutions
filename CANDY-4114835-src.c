# include<stdio.h>
int main()
{
int n,i;
do
{
	
	scanf("%d",&n);
	if(n==-1)
	break;
	int sum=0,diff[n],ele[n];
	for(i=0;i<n;i++)
	{
	scanf("%d",&ele[i]);
	sum+=ele[i];
	}
	if(sum%n!=0)
	printf("-1\n");
	else
	{
	int t=sum/n;
	sum=0;
	for(i=0;i<n;i++)
	{
	diff[i]=(t>ele[i])?(t-ele[i]):(ele[i]-t);
	sum+=diff[i];
	}
	printf("%d\n",sum/2);}
}
	while(n!=-1);
return 0;
}