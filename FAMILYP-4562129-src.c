# include<stdio.h>

# include<math.h>

int main()
{

	int n,b;

	double a;

	while(scanf("%d",&n)!=EOF)

	{
	
		a=(-1+sqrt(1+(8.0*n)))/2;

		b=((int)ceil(a)%26);

		printf("TERM %d IS %c\n",n,(b-1+'A'));

	}
return 0;
}
