# include<stdio.h>
# include<string.h>
int main()
{
	long long int multiplier[8]={1,20,360,7200,7200*20,7200*20*20,7200*20*20*20,7200*20*20*20*20};
	
	char in[10000];
	int n;
	int i;
	
	int dash,dot;
	long long int ans;
	
	while(1)
	{
		ans=0;
		scanf("%d",&n);
		if(n==0)
			break;
		getchar();
		while(n--)
		{
			dash=dot=0;
			gets(in);
			
			for(i=0;i<=strlen(in);i++)
			{
				if(in[i]=='.')
					dot++;
				else
				if(in[i]=='-')
					dash++;
			}
			ans += (dot+(dash*5)) * multiplier[n];
		//	printf("%lld\n",ans);
		}	
		printf("%lld\n",ans);
	}
	return 0;
}