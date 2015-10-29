# include<cstdio>
#include <algorithm>


using namespace std;

int ch;

inline void S(long long int & y ) 
{

	y=0;

	while((ch<'0' || ch>'9') && ch!='-' && ch!=EOF)
	ch=getchar_unlocked();

	
	do
		{
	//	sum += (ch-'0')*(ch-'0');

		y = (y<<3) + (y<<1) + ch-'0';
		}
	while((ch=getchar_unlocked())>='0' && ch<='9');

	

}
int main()
{
	int n;
	long long int pi,ans=0;
	scanf("%d",&n);
	while(n--)
	{
		S(pi);
		
		ans ^= pi;
	}
	printf("%lld\n",ans);
	return 0;
}