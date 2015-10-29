#include<stdio.h>
int main()
{
int t,i;
scanf("%d",&t);
for(i=0;i<t;i++)
{
	int x,y;
	scanf("%d%d",&x,&y);
	if(x%2==1&&y%2==1)
	{
		if(x==y||x-y==2)
		printf("%d\n",(x+y)-1);
		else
		printf("No Number\n");
	}
	
	else
	if(x%2==0&&y%2==0)
	{
		if(x==y||x-y==2)
		printf("%d\n",(x+y));
		else
		printf("No Number\n");
	}
	else
	printf("No Number\n");
}
return 0;
}