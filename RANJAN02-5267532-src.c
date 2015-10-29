# include<stdio.h>
# define llu unsigned long long int

int main()
{
	int t,i,n;
	llu power[70];
	power[0]=1;
	power[1]=3;
	
	for(i=2;i<=70;i++)
	{
		power[i]=power[i-1]*3;
	}
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		printf("%llu\n",power[n]-1);
	}
	return 0;
}