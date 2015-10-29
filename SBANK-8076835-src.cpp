# include<cstdio>
# include<cmath>
# include<map>
# include<algorithm>
# include<cstring>
# include<string>
# include<iostream>
using namespace std;
int main()
{
	int t,n,l,j,k;
	char a[20],s[35],c;
	map<string,int> m;
	map<string,int>::iterator i;
	scanf("%d",&t);
	while(t--)
	{
		m.clear();
		s[0]=0;
		scanf("%d",&n);
		while((c=getchar_unlocked())==' ' || c=='\t' || c=='\n')
			continue;
		while(n--)
		{
			s[0]=c;
			for(k=1;k<31;k++)
				s[k] = getchar();
			s[k]=0;
			m[s]++;
			if(n)
				while((c=getchar_unlocked())==' ' || c=='\t' || c=='\n')
					continue;
		}
		for(i=m.begin();i!=m.end();i++)
		{
			cout<<(*i).first<<" "<<(*i).second<<endl;
		}
		printf("\n");
	}
	return 0;
}
