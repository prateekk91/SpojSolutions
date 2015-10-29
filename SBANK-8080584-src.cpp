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

	char s[40];
	char c;

	map<string,int> m;

	map<string,int>::iterator i;

	scanf("%d",&t);

	while(t--)

	{

		m.clear();

		//s[0]=0;

		scanf("%d\n",&n);

		while(n--)

		{
			//gets(s);
			//m[s]++;

			s[0]=c;

			for(k=0;k<31;k++)

				s[k] = getchar_unlocked();

			s[k]=0;

			m[s]++;

			getchar_unlocked();

			getchar_unlocked();		
		}
		
		//printf("done");
		
		//}

		for(i=m.begin();i!=m.end();i++)

		{

			printf("%s %d\n",(*i).first.c_str(),(*i).second);
			//cout<<i->first<<" "<<i->second<<endl;

		}

		printf("\n");

	}

	return 0;

}
