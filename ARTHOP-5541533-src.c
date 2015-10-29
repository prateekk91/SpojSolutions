# include<stdio.h>
# include<math.h>
int main()
{
	int a,b,c;
	while(scanf("%d",&a)!=EOF)
	{
		scanf("%d%d",&b,&c);
		if(a+b==c)
			printf("+\n");
		else
		if(a-b==c || b-a==c)
			printf("-\n");
		else
		if(a*b==c)
			printf("*\n");
		else
		if(a/b==c || b/a==c)
			printf("/\n");
		else
		if(a%b==c || b%a==c)
			printf("%%\n");
		else
		if(pow(a,b)==c || pow(b,a)==c)
			printf("^\n");
		else
			printf("!\n");
	}
	return 0;
}