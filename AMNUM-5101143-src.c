# include<stdio.h>
int main()
{
	unsigned long long int n;
	scanf("%llu",&n);
	char ans[5000];
	int i=0;
	while(n)
	{
		if(n&1)
			ans[i++]='5';
		else
			ans[i++]='6';
		n = (n-1)/2;
	}
	for(i--;i>=0;i--)
	{
		printf("%c",ans[i]);
	}
	printf("\n");
	return 0;
}