# include<stdio.h>

long long int gcd(long long int a,long long int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}


int main()
{
	int t;
	long long int xs,ys,xd,yd,gcd1,gcd2;
	
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld%lld%lld",&xs,&ys,&xd,&yd);
		xd=xd<0?-xd:xd;
		yd=yd<0?-yd:yd;
		xs=xs<0?-xs:xs;
		ys=ys<0?-ys:ys;
		
		gcd1 = gcd(xs,ys);
		gcd2 = gcd(xd,yd);
		
		//printf("%lld %lld %lld %lld %lld %lld",xs,ys,xd,yd,gcd1,gcd2);
		while(gcd1>0 && gcd1<gcd2)
			gcd1*=2;
		if(gcd1==gcd2)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
