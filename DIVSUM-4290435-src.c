# include<stdio.h>
int main()
{
int t;
long long int n,m,eu;
scanf("%d",&t);
while(t--)
{
	eu=1;
	scanf("%lld",&n);    
	m=n;
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
	{eu*=(pow(i,c+1)-1)/(i-1);
	
	c=0;}
	if(i*i>n)
	{if(n!=1)eu*=1+n;break;}
	}
	printf("%lld\n",(eu-m));
}
return 0;
}