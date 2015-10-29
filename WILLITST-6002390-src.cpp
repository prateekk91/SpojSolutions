# include<cstdio>
# include<algorithm>
# include<cmath>
using namespace std;
int main()
{
	long long int n;
	scanf("%lld",&n);
	long long int a=(long long int)log2(n);
	if(pow(2,a)==n)
		printf("TAK\n");
	else
		printf("NIE\n");
	return 0;
}