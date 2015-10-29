# include<cstdio>
# include<cmath>
# include<stack>
# include<algorithm>
using namespace std;

int main()
{
	stack<int> s;
	int t,i,j,n,m,h;
	int arr[50001];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int ans[50001],done;
	ans[n-1] = n;
	done=0;
	s.push(n-1);
	for(i=n-1;i>=0;i--)
	{
		done=0;
		while(!s.empty() && !done)
		{
			if(arr[s.top()] <= arr[i])
				s.pop();
			else
				done=1;
		}
		if(s.empty())
			ans[i] = n;
		else
			ans[i] = s.top();
		s.push(i);
	}
	int a,b,count=0;
	for(i=0;i<m;i++)
	{
		scanf("%d%d",&a,&b);
		if(ans[a-1]>=b-1)
			count++;
	}
	printf("%d\n",count);
	return 0;
}
