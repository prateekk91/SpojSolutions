# include<stdio.h>
int main()
{
	char in[100000];
	int i;
	while(gets(in))
	{
		
			
		for(i=0;i<strlen(in);i++)
		{
			if(in[i]>=65 && in[i]<=90)
				printf("%c",in[i]+32);
			else
				printf("%c",in[i]);
		}
		printf("\n");
	}
	return 0;
}