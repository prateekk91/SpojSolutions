# include<stdio.h>
int main()
{
unsigned long long int n,i,t,j;
scanf("%llu",&t);
for(j=0;j<t;j++)
{
	
	scanf("%llu",&n);
	
	unsigned long long int sum=0,ele[n];
	for(i=0;i<n;i++)
	{
	scanf("%llu",&ele[i]);
	sum+=ele[i]%n;if(sum%n==0)sum=0;
	}
	if(sum%n==0)
	printf("YES\n");
	else
	printf("NO\n");
	}
	
return 0;
}