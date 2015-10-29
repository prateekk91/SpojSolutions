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
	int t,n,l,j;
	char a[20],s[100];
	map<string,int> m;
	map<string,int>::iterator i;
	scanf("%d",&t);
	while(t--)
	{
		m.clear();
		s[0]=0;
		scanf("%d",&n);
		while(n--)
		{
			s[0]=0;
			for(j=0;j<6;j++){
				scanf("%s",a);
				strcat(s,a);
				strcat(s," ");
			}
			m[s]++;
		}
		for(i=m.begin();i!=m.end();i++)
		{
			cout<<(*i).first<<(*i).second<<endl;
		}
		cout<<endl;
	}
	return 0;
}