# include<stdio.h>
int main()
{
	int b,g;
	do
	{
		scanf("%d%d",&g,&b);
		if(b==-1&&g==-1)
		break;
		else
		{
			if(b==0)printf("%d\n",g);
			else
			if(g==0) printf("%d\n",b);
			else
			if(b==g)
			printf("1\n");
			else
			if(b>g)
				{
				if(b%(g+1)==0)
				printf("%d\n",(b/(g+1)));
				else
				printf("%d\n",(b/(g+1)+1));
				}
			else
			{
				if(g%(b+1)==0)
				printf("%d\n",g/(b+1));
				else
				printf("%d\n",(g/(b+1)+1));
			}
		}
	}
	while(b!=-1&&g!=-1);
return 0;
}
			
