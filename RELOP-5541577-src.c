# include<stdio.h>
int main()
{
	int t;
	int a,b;
	scanf("%d",&t);
	while(scanf("%d",&a)!=EOF)
	{
		scanf("%d%d",&b);
		if(a>b)
			printf(">\n");
		if(a<b)
			printf("<\n");
		else
		if(a==b)
			printf("=\n");
	}
	return 0;
}