# include<stdio.h>
int main()
{
int t,i;
scanf("%d",&t);
for(i=0;i<t;i++)
	{
		unsigned long long int n,tri;
		scanf("%llu",&n);
		if(n%2==0)
		tri=n*(n+2)*(2*n+1)/8;
		else
		tri=(n*(n+2)*(2*n+1) - 1)/8;
		printf("%llu\n",tri);
	}
return 0;
}