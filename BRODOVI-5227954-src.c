# include<stdio.h>
int main()
{
	int i=0,t,x,ans[10000]={0};
	int pos=0,j;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&x);
		x--;
		if(i == 0)
			continue;
	
		for(j=0;j<pos;j++)
		{
			if( x % ans[j] == 0 )
			{
				x=-1;
				break;
			}
		}
		if(x!=-1)
			ans[pos++]=x;
		
	}
	printf("%d\n",pos);
	return 0;
}