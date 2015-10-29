# include<stdio.h>
# include<string.h>
int main()
{
	int max_count,count;
	int t;
	char in[200000];
	int i,j;
	int c=0,c1=0;;
	
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		gets(in);
		max_count=0;
		count=0;
		c=c1=0;
		for(i=0;i<strlen(in);i++)
		{
			while(in[i]==' ' || in[i]=='\r' || in[i]=='\t')i++;
			
		//	printf("%d ",i);
			while(in[i]>='a' && in[i]<='z'){i++;
				c++;}
			if(c1==0)
				c1=c;
			
			
			if(c==c1 && c!=0)
			{	count++;
				
			}
			else
			{
				if(count>max_count)
				{
					max_count=count;
					
				}
				if(c)
				count=1;
				c1=c;
			}
			if(count>max_count)
				{
					max_count=count;
					
				}
		//	printf("count=%d c=%d\n",count,c);
			
			c=0;	
		}if(max_count!=0)
		printf("%d\n",max_count);
		else
			t++;
	}
	return 0;
}