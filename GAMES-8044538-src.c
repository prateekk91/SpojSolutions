# include<stdio.h>
# include<math.h>
int countdigits(unsigned long long int num)
{
	int digits=0;
	while(num)
	{
		digits++;
		num/=10;
	}
	return digits;
}
int calcgcd(int a,int b)
{
	if(!b)
		return a;
	else
		return calcgcd(b,a%b);
}
int main()
{
	int a,b,digits,num,gcd;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		a=b=0;
		scanf("%d.%d",&a,&b);
		if(b==0)
			printf("1\n");
		else
		{
			digits = countdigits(b);
			num = pow(10,digits);
			gcd = calcgcd(b,num);
			printf("%d\n",num/gcd);
		}
	}
	return 0;
}
	