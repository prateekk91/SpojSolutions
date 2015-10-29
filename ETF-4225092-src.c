# include<stdio.h>
int main()
{
int t,n;
scanf("%d",&t);
while(t--)
{
	long long int eu=1;
	scanf("%d",&n);
	int i=2,c=0;
	while(n>1)
	{
	while(n%i==0)
	{
	c++;
	n=n/i;
	}
	if(c==0)i++;
	if(c!=0)
	{eu*=(pow(i,c)-pow(i,c-1));
	
	c=0;}
	if(i*i>n)
	{if(n!=1)eu*=(n-1);break;}
	}
	printf("%lld\n",eu);
}
return 0;
}