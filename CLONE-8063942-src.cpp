# include<cstdio>
# include<cmath>
# include<map>
# include<cstring>
# include<string>
# include<iostream>
# include<vector>
using namespace std;
int main()
{
	int c[200001];
	int n,m,i,j;
	map<string,int> count;
	map<string,int>::iterator it;
	char in[21];
	while(1)
	{
		count.clear();
		scanf("%d%d",&n,&m);
		if(n==0 && m==0)
			break;
		for(i=0;i<n;i++)
			c[i]=0;
		for(i=0;i<n;i++)
		{
			scanf("%s",in);
			count[in]++;
		}
		for(it=count.begin();it!=count.end();it++)
		{
			c[(*it).second]++;
		}
		for(i=1;i<=n;i++)
			printf("%d\n",c[i]);
	}
	return 0;
}
	