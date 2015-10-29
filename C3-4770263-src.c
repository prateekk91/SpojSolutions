# include<stdio.h>
unsigned long long int sum(unsigned long long int a,unsigned long long int b)
{
 	return (a+b);
}
int main()
{
	unsigned long long int a,b;
	scanf("%llu%llu",&a,&b);
	printf("%llu",sum(a,b));
	return 0;
}