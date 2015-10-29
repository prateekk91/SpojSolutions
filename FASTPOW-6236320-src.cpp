# include<cstdio>
# include<cmath>
long long int power(int a,int b,int c);

long long int power(int a,int b,int c)
{
	if(b==1)
		return a%c;

	long long int temp;
	temp = power(a,b/2,c) % c;
	if(b&1)
		return (temp * temp * (a%c))%c;
	else
		return (temp*temp)%c;
}
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%lld\n",power(a,b,c));
	return 0;
}