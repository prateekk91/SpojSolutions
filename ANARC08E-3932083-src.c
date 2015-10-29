# include<stdio.h>
#include<stdlib.h>

int main()
{
  int a,b;
   while(1)
     {
	scanf("%d%d",&a,&b);
	if(a==-1&&b==-1)
	exit(0);

	if(a==1||b==1)
	 
		printf("%d+%d=%d\n",a,b,(a+b));
	else
		printf("%d+%d!=%d\n",a,b,(a+b));
    }
return 0;
}