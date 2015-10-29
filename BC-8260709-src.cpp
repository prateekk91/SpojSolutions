# include<cstdio>
# include<cmath>
# include<algorithm>
using namespace std;
int main()
{
	int t;
	long long int a,b,c,mixim;
	long long int ansh,ansk;
	long long int ar[3];
	scanf("%d",&t);
	int i;
	for(i=1;i<=t;i++)
	{
		ansk=0;
		scanf("%lld%lld%lld",&a,&b,&c);
		ansh = (a*b*c)-1;
		ar[0] = a;
		ar[1]=b;
		ar[2]=c;
		sort(ar,ar+3);
		while(ar[0]!=1||ar[1]!=1|| ar[2]!=1)
		{
			//printf("%lld %lld %lld\n",ar[0],ar[1],ar[2]);
			ar[2] = (long long int)ceil(ar[2]/2.0);
			ansk++;
			sort(ar,ar+3);
		}
		printf("Case #%d: %lld %lld\n",i,ansh,ansk);
	}
	return 0;
}