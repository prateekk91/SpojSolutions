# include<cstdio>
# include<cmath>
# include<algorithm>
# include<stack>
using namespace std;
int main()
{
	int i,j,k,n,t;
	long long int a[100001];
	long long int area[100001];
	stack<int> s;
	while(!s.empty()) s.pop();
	while(1)
	{
		while(!s.empty()) s.pop();
		for(i=0;i<=100000;i++)
			area[i]=0;
		scanf("%d",&n);
		if(n==0)
			break;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			t = -1;
			while(!s.empty())
			{
				if(a[i]<=a[s.top()])
				{
					s.pop();
				}
				else
					break;
			}
			if(!s.empty())
				t = s.top();
			else
				t = -1;
			area[i] = i-t-1;
			s.push(i);
		}
		while(!s.empty()) s.pop();
		for(i=n-1;i>=0;i--)
		{
			while(!s.empty())
			{
				if(a[i]<=a[s.top()])
					s.pop();
				else
					break;
			}
			if(!s.empty())
				t = s.top();
			else
				t = n;
			area[i] += t-i-1;
			s.push(i);
		}
		long long int max=-1;
		for(i=0;i<n;i++)
		{
			area[i] = a[i]*(area[i]+1);
			if(area[i]>max)
				max = area[i];
		}
		printf("%lld\n",max);
	}
	return 0;
}
			
	