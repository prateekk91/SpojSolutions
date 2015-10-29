# include<stdio.h>
int main()
{
	int t,ans;
	double n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf",&n);
		ans = (ceil(log(n)/log(2)))+1;
		printf("%d\n",ans);
	}
	return 0;
}