# include<stdio.h>
int main()
{
	unsigned long long int fact[15];
	
	int i,n,k,inp;
	fact[0]=fact[1]=1;
	for(i=2;i<15;i++)
	{
		fact[i]=fact[i-1]*i;
	}
//	for(i=0;i<15;i++)
//		printf("%llu\n",fact[i]);
	while(scanf("%d",&n)!=EOF)
	{
		scanf("%d",&k);
		int max=0;
		
		unsigned long long int div=1;
		for(i=0;i<k;i++)
		{
			scanf("%d",&inp);
			div *= fact[inp];
			
		}
		//printf("max=%d n=%d k=%d",max,n,k);
		unsigned long long int ans = (fact[n] / div);
		printf("%llu\n",ans);
	}
	return 0;
}