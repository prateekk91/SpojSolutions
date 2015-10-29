# include<cstdio>
# include<cmath>
# include<cstring>
# include<queue>
using namespace std;
int main()
{
	int t,i,j,k;
	long long int a,b,sum,max=0,cur,sum2;
	int arr[200000];
	scanf("%d",&t);
	while(t--)
	{
		cur=0;
		max=0;
		sum=0;
		queue<int> q;
		scanf("%lld%lld",&a,&b);
		for(i=0;i<a;i++)
		{
			
			scanf("%d",&arr[i]);
//			printf("sum2=%lld cur=%lld max=%lld\n",sum2,cur,max);
			if(arr[i]>b)
			{
				while(!q.empty())
					q.pop();
				sum=0;
				cur=0;
				if(cur>max)
				{
				 	max=cur;
				 	sum2=sum;
				 }
			}
			else
			if(arr[i]<=b)
			{
				if( (arr[i]+sum)<=b)
				{
					q.push(arr[i]);
					cur++;
					sum+=arr[i];
					if(cur>max)
					{
						 max=cur;
						  sum2=sum;
					}
					
				}
				else
				{
					while( (arr[i]+sum)>b)
					{
						sum -= q.front();
						q.pop();
						cur--;
					}
					q.push(arr[i]);
						cur++;
					sum+=arr[i];
				}
				if(cur==max && sum<sum2)
					sum2=sum;
				
			}
			
		}
		
		printf("%lld %lld\n",sum2,max);
	}
	return 0;
}			

