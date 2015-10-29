# include<stdio.h>
int main()
{
	float in;
	do
	{
		scanf("%f",&in);
		if(in==0)
		break;
		
		int n=2;
		
	float sum=0.00;
	while(sum<=in)
	{
	sum+=(1.00/n);
	n++;
	}
	printf("%d card(s)\n",(n-2));
	}
	while(in!=0);
return 0;
}
	