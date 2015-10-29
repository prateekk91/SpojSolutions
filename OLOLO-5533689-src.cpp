# include<cstdio>
#include <algorithm>


using namespace std;

int ch;

inline void S(int & y ) 
{

	y=0;

	while((ch<'0' || ch>'9')&& ch!=EOF)
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
	int pi,ans=0;
	S(n);
	while(n--)
	{
		S(pi);
		
		ans ^= pi;
	}
	printf("%d\n",ans);
	return 0;
}