# include<cstdio>
# include<cstring>
using namespace std;
int main()
{
	int i,j,k,g1,g2;
	int t,count;
	char win[4],t1[4],t2[4],arr[20][4];
	int arr2[20];
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<20;i++)
		{
			strcpy(arr[i],"");
			arr2[i]=0;
		}
		
		i=j=0;
		for(k=0;k<16;k++)
		{
			count=0;
			scanf("%s%s%d%d",t1,t2,&g1,&g2);
		
			if(g1>g2)
			{
				strcpy(win,t1);
			}
			else
				strcpy(win,t2);
			for(i=0;i<j;i++)
			{
				if(strcmp(arr[i],win)==0)
				{
					arr2[i]++;
					count=1;
				}
			}
			if(count==0)
			{
				strcpy(arr[j],win);
				arr2[j]++;
				j++;
			}
		}
		int max=0,ans=0;
		for(i=0;i<16;i++)
		{
			if(arr2[i]>max)
			{
				ans=i;
				max=arr2[i];
			}
		}
		printf("%s\n",arr[ans]);
	}
	return 0;
}
	