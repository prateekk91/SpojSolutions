# include<stdio.h>
# include<string.h>
int main()
{
	int t,i,l,count;
	char in[100];
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%s",in);
		l=strlen(in);
		for(i=0;i<l;i++)
		{
			if(in[i]=='D')
			{
				count=1;
				break;
			}
		}
		if(count!=0)
		{
			printf("You shall not pass!\n");
		}
		else
			printf("Possible\n");
	}
	return 0;
}
