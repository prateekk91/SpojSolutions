# include<stdio.h>
int main()
{
	int len;
	int last;
	char ch[2000];
	while(scanf("%s",ch)!=EOF)
	{
		last = ch[strlen(ch)-1]-'0';
		if(last==5 || last==0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}