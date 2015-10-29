# include<stdio.h>
# include<string.h>
int main()
{
	int t,n,i,lxh,hhb;
	char input[4];
	scanf("%d",&t);
	while(t--)
	{
	lxh=0;hhb=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",input);
		if(strcmp(input,"lxh")==0)
		lxh++;
		else
		hhb++;
	}
	
	if((lxh&1))
	printf("lxh\n");
	else
	printf("hhb\n");
	
	}
return 0;
}