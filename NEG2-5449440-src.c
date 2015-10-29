# include<stdio.h>
# include<stdlib.h>

int main()
{
	long long int in;
	long long int x = -2;
	char ans[100];
	int i=0,j;
	int rem;

	scanf("%lld",&in);
	if(in==0)
	{
		printf("0\n");
		exit(0);
	}
	
	
	while(in!=0)
	{
		rem = in % -2;
		in /= x ;
		//printf("rem=%d in=%d\n",rem,in);
		
		if(rem==-1)
		{
			in++;
			rem=1;
			ans[i++]=1;	
		}
		else
			ans[i++]= rem;
		
		
	}
	i=i-1;
	while(ans[i]==0)
		i--;

	for(;i>=0;i--)
	{
		printf("%d",ans[i]);
	}
	printf("\n");
	return 0;
}