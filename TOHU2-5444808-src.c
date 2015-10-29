# include<stdio.h>

int main()
{
	int i,j;
	char ch[100];
	char ans[150];
	int t;
	int flag;
	char c;
	scanf("%d",&t);
	while(t--)
	{
		flag=0;

		for(i=1;i<=99;i++)
		{
			scanf("%d %c",&j,&c);
			ch[j]=c;
		}
		
		for(i=65;i<=122;i++)
		{
			ans[i]=0;
		}
	
		for(i=9;i<=81;i+=9)
		{
			ans[ch[i]]++;
		}
		
		for(i=65;i<=122;i++)
		{
			if(ans[i]>1)
			{
				flag=ans[i];
				break;
			}
		}
		
		if(flag==9)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
			
