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
/*========================================Templates=============================================*/
// datatypes
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld; 
typedef double db; 
typedef float ft;
typedef unsigned int uint;
int gcd( int a, int b ) {  if( !b ) return a;  return gcd( b, a % b ); }


#define tests(tc) int tc;scanf("%d",&tc);while(tc--)
#define REP(i,n) for(int i=0;i<(n);++i)
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define FORN(i,a,b,n) for(int i=(a);i<=(b);i+=n)
#define FORR(i,a,b) for(int i=(a);i>=(b);--i)
#define FORRN(i,a,b,n) for(int i=(a);i>=(b);i-=n)
#define CLEAR(arr,v)		memset(arr,v,sizeof(arr))
#define DB(x) cerr<<#x<<" : "<<x<<endl<<flush;
#define DB2(x,y) cerr<<#x<<" : "<<x<<" "<<#y<<" : "<<y<<endl<<flush;
#define DB3(x,y,z) cerr<<#x<<" : "<<x<<" "<<#y<<" : "<<y<<" "<<#z<<" : "<<z<<endl<<flush;
#define DB4(w,x,y,z) cerr<<#w<<" : "<<w<<" "<<#x<<" : "<<x<<" "<<#y<<" : "<<y<<" "<<#z<<" : "<<z<<endl<<flush;
#define DB5(v,w,x,y,z) cerr<<#v<<" : "<<v<<" "<<#w<<" : "<<w<<" "<<#x<<" : "<<x<<" "<<#y<< \
" : "<<y<<" "<<#z<<" : "<<z<<endl<<flush;
#define DBAR(arr,a,b) cout<<#arr<<" : ";FOR(dbar,a,b) cerr<<arr[dbar]<<" ";cerr<<endl;
#define DBAR2(arr,a,b,x,y) cout<<#arr<<endl;FOR(dbar,a,b){ FOR(dbar2,x,y)cerr<<arr[dbar][dbar2]<<" ";cerr<<endl;}
#define INF 1<<30
//#define DEBUG

/*======================================Templates Ends========================*/
/* Main Code Starts from here */



int cnt=0;

int mod(ll a, ll p, ll m) {
	
	//DB4(cnt++,a,p,m);

	if(p == 1)
		return a;


	ll tmp  = mod(a, p/2, m);

	//DB(tmp)
	if(p&1) {
		return ( tmp * (tmp * a)%m ) % m;
	}

	else {
		return (  tmp * tmp ) % m;
	}
	
}

/*==================code for taking fast integer input========================*/
int sign;
int ch;
inline void S( int &x ) {
	x=0;
	while((ch<'0' || ch>'9') && ch!='-' && ch!=EOF)	ch=getchar_unlocked();
	if (ch=='-')
		sign=-1 , ch=getchar_unlocked();
	else
		sign=1;
	do
		x = (x<<3) + (x<<1) + ch-'0';
	while((ch=getchar_unlocked())>='0' && ch<='9');
	x*=sign;
}
/*============================================================================*/


int main()
{
	int a,b;
	tests(tc) {
		S(a);
		S(b);
		int gc = gcd(a,b);
		int fact = 0;
		//int num = min(a,b);
		int Ggc = sqrt(gc);
		//DB2(gc, Ggc)
		FOR(i,1,Ggc) {
			if(gc%i==0) {
				//DB3(a,b,i);
				fact = fact + 2;
			}
			
		}
		if(Ggc*Ggc == gc)
			fact--;	
		printf("%d\n",fact);
	}
	
   return 0;
}

