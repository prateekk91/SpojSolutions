# include<stdio.h>
int main()
{
	int t,n,i,count=0,ele;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d",&n);
		int in[n];
		for(i=0;i<n;i++)
			scanf("%d",&in[i]);
		ele=in[0];
		count=1;
		for(i=1;i<n;i++)
		{
			if(in[i]==ele)
				count++;
			else
			{
				if(count==0)
				{
					ele=in[i];
					count=1;
				}
				else
				count--;
			}
		}
		count=0;
		for(i=0;i<n;i++)
		{
			if(in[i]==ele)
				count++;
		}
		if(count>n/2)
			printf("YES %d\n",ele);
		else
			printf("NO\n");
	}
return 0;
}