# include<stdio.h>
int main()
{int t;
scanf("%d",&t);
int i;
for(i=0;i<t;i++)
{
	int n,c=5,z=0;
	scanf("%d",&n);
	while((n/c)!=0)
	{
	z+=(n/c);
	c=c*5;
	}
	printf("%d\n",z);
}
return 0;
}
	