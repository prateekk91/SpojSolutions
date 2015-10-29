# include<stdio.h>
int main()
{
int n,c=0;
double dist=0,x1=0,x2,y1=0,y2;

while( (n=getchar()) > 0)
{
	if(n=='(')
	{
		scanf("%lf,%lf",&x2,&y2);
		c++;
		
		double x=(x2-x1)*(x2-x1);
		double y=(y2-y1)*(y2-y1);
		
		x1=x2;y1=y2;

		if(c!=1)
		{
		dist+= sqrt((x+y));
		printf("The salesman has traveled a total of %.3lf kilometers.\n",dist);
		}
	}
	
}
return 0;
}
	