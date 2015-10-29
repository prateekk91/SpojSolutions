# include<stdio.h>
# include<string.h>
int main()
{
	char s[900000];
	int i,j,l;
	int count;
	while(gets(s))
	{
		count=0;
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			if( (s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122) )
			{
				count++;
				while ( (s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122) )
					i++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}