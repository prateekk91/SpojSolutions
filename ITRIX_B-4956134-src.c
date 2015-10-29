# include<stdio.h>
int main()
{
	int t,rem,i;
	long long int n,x=4,m,x2=1;
	char ans[200];
	scanf("%d",&t);
	
	while(t--)
	{
		x2=1;
		strcpy(ans,"");
		x=4;
		scanf("%lld",&n);
		m=n;
		while(m)
		{
			
			
			rem = m%4;
			switch(rem)
			{
				case 1: strcat(ans,"2");
					break;
				case 2: strcat(ans,"3");
					break;
				case 3: strcat(ans,"5");
					break;
				case 0: strcat(ans,"7");
					break;
			}
			n-=x;
			m=ceil(n/(x*1.0));
			x*=4;
		}
		for(i=strlen(ans)-1;i>=0;i--)
			printf("%c",ans[i]);
		printf("\n");
	}
	return 0;
}