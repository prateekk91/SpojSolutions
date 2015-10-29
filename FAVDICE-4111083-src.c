# include<stdio.h>
int main()
{
int t,i;
scanf("%d",&t);
for(i=0;i<t;i++)
{
	float n,k,e=0;
	scanf("%f",&n);
	k=n;
	while(k>=1)
	{
	e+=(n/k);
	k--;
	}
	printf("%.2f\n",e);
}
return 0;
}