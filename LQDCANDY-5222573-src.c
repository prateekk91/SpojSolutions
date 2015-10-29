# include<stdio.h>
# include<math.h>
int main()
{
	int t,i;
	double logn;
	unsigned long long int tot,times,n;
	
	scanf("%d",&t);
	
	while(t--)
	{
		
		scanf("%llu",&n);
		
		tot = (pow(2,ceil(log2(n*1.0))));
	
		printf("%llu ",tot);

		if(n==tot)
		{
			printf("0\n");
		}
		
		else
		{
			double x = tot / 2;
			
			while ((unsigned long long int)n % (unsigned long long int)x != 0)
				x /= 2;
			
			times = (unsigned long long int) (( (log2(tot) - log2(x)) ));
			printf("%llu\n",times);
			//printf("\n\n x=%lf n=%lf tot=%ld log(tot)=%lf\n\n",x,n,tot,log(tot));
		}
	}
return 0;
}