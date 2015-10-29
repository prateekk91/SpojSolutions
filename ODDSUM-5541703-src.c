# include<stdio.h>
int main()
{
	int t;
	int a,b,i,j;
	int sum;
	scanf("%d",&t);
	for(j=1;j<=t;j++)
	{
		sum=0;
		scanf("%d%d",&a,&b);
		if(!(a&1))
			a++;
		for(i=a;i<=b;i+=2)
			sum+=i;
		printf("Case %d: %d\n",j,sum);
	}
	return 0;
}