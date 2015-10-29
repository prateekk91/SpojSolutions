# include<cstdio>
# include<cstring>
using namespace std;

int main()
{
	int t;
	long long int s[100];
	s[0]=0;
	s[1]=3;
	s[2]=9;
	int i;
	
//	long long int j=2;
	for(i=3;i<=30;i++)
	{
		s[i] = (2*s[i-1])+s[i-2];
//		j*=2;
	}
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&i);
		printf("%lld\n",s[i]);
	}
	return 0;
}