# include<stdio.h>
int main()
{
	int t,k,i;
	long long int n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%d",&n,&k);

		double exact = (-1 + sqrt(1+(8.0*n)))/2;
		//printf("exact=%lf\n",exact);
		long long int ceiling = ceil(exact);		
		long long int num_of_terms = floor(exact);
		long long int grand_total = (floor(exact)*(floor(exact)+1))/2;    //s=2a+(n-1)d  a=1,d=1,n=num+1
		//printf("grand=%lld\n",grand_total);
		long long int each = num_of_terms / k;
		//printf("each=%lld\n",each);
		long long int extra = ceiling % k;
		if(ceil(exact)!=floor(exact) && extra==0)
			extra=k;
		//printf("extra=%lld\n",extra);
		for(i=1;i<=k;i++)
		{
			if(i<extra)
			
				printf("%.0lf ",((each+1)/2.0)*(2*i+(each)*k));
			else
			if(i==extra)
				printf("%.0lf ",(each/2.0)*(2*i+(each-1)*k)+(n-grand_total));
			else
			if(i>extra)
				printf("%.0lf ",(each/2.0)*(2*i+(each-1)*k));
		}
		printf("\n");
	}
return 0;
}