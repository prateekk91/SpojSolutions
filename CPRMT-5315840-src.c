# include<stdio.h>
# include<string.h>
int main()
{
	char a[1000],b[1000];
	int i;
	char c;
	
	while(scanf("%s",a)!=EOF)
	{
		int count[200]={0};
	
	int ans[200]={0};
	
		scanf("%s",b);
		
		for(i=0;i<strlen(a);i++)
		{
			count[a[i]]++;
		}
//		for(i=97;i<=122;i++)
//		{
//			printf("%c%d ",i,count[i]);
//		}

		for(i=0;i<strlen(b);i++)
		{
			if(count[b[i]]>0)
			{
				ans[b[i]]++;
				count[b[i]]--;
			}
		}
//		for(i=97;i<=122;i++)
//		{
//			printf("%c%d ",i,ans[i]);
//		}
		for(i=97;i<=122;i++)
		{
			while(ans[i]-->0)
				printf("%c",i);
		}
		printf("\n");
	}
	return 0;
}