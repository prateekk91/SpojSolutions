# include<stdio.h>
int main()
{
	int t;
	long long int a,b;
	
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&a,&b);
		
		if(a<=b)
		{
		if(a&1)
		  printf("R\n");
		else
		  printf("L\n");
		}
		
		else
		{
		if(b&1)
		  printf("D\n");
		else
		  printf("U\n");
		}
	}
return 0;
}
		
