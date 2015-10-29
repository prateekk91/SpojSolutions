# include<iostream>
# include<cstdio>
# include<cmath>
# include<algorithm>
# include<map>
# include<string>
# include<cstring>
using namespace std;
int main()
{
	int t,i,j;
	char a[100000],b[100000];
	int n;
	scanf("%d",&t);
	for(j=1;j<=t;j++)
	{
		map<string,string> m;
		map<string,int>  count;
		map<int,string> pos;
		scanf("%d",&n);
		for(i=0;i<n-1;i++)
		{
			scanf("%s%s",a,b);
			pos[i] = a;
			count[a]++;
			count[b]++;
			m[a]=b;
		}
		for(i=0;i<n-1;i++)
		{
			if(count[pos[i]] == 1)
				break;
		}
		printf("Scenario #%d:\n",j);
		string temp = pos[i];
		for(i=0;i<n;i++)
		{
			cout<<temp<<"\n";
			temp = m[temp];
		}
	}
	return 0;
}
		
		