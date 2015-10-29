# include<cstdio>
#include <algorithm>

#include <cmath>

#include <cstdio>

#include <cstdlib>

#include <cstring>

#include <deque>

#include <functional>

#include <iostream>

#include <list>

#include <map>

#include <queue>

#include <stack>

#include <vector>

using namespace std;
int sign;
int ch;
int sum;
inline void S(long long int & y ) 
{

	y=0;

	while((ch<'0' || ch>'9') && ch!='-' && ch!=EOF)
	ch=getchar_unlocked();

	if (ch=='-')

		sign=-1 , ch=getchar_unlocked();

	else

		sign=1;

	do
		{
	//	sum += (ch-'0')*(ch-'0');

		y = (y<<3) + (y<<1) + ch-'0';
		}
	while((ch=getchar_unlocked())>='0' && ch<='9');

	y *= sign;

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