# include<stdio.h>
int main()
{
	int a,b,ans;
	char inp[5];
	scanf("%d%d",&a,&b);
	ans=(a+b)/2;
	
	while(1)
	{
		printf("%d\n",ans);
		fflush(stdout);
		scanf("%s",inp);
		if(strcmp(inp,"WIN")==0)
		{
			break;
		}
		else
		
		if(strcmp(inp,"LOW")==0)
		{
			a=ans+1;
		}
		else
			b=ans-1;
		ans=(a+b)/2;
	}
	return 0;
}