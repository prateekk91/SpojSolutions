# include<stdio.h>

unsigned long long int gcd(unsigned long long int a,unsigned long long int b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}


unsigned long long int lcm(unsigned long long int a,unsigned long long int b)
{
	unsigned long long int ans=(a*b);
    
	return (ans/gcd(a,b));
}






int main()
{
	unsigned long long int w,h;
	unsigned long long int num;
	while(1)
	{
		scanf("%llu%llu",&w,&h);
		if(w==0 && h==0)
		break;
		num= lcm(w,h);
		
	
		printf("%llu\n",((num/h)*(num/w)));
	}
return 0;
}
