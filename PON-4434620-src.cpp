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
#define DBAR(arr,a,b) cout<<#arr<<" : ";FOR(dbar,a,b) cerr<<arr[dbar]<<" ";cerr<<endl;
#define DBAR2(arr,a,b,x,y) cout<<#arr<<endl;FOR(dbar,a,b){ FOR(dbar2,x,y)cerr<<arr[dbar][dbar2]<<" ";cerr<<endl;}
#define INF 1<<30

/*======================================Templates Ends========================*/
/* Main Code Starts from here */




/* this function calculates (a*b)%c taking into account that a*b might overflow */
ull mulmod(ull a,ull b,ull c){
    ull x = 0, y=a%c;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%c;
        }
        y = (y*2)%c;
        b /= 2;
    }
    return x%c;
}

/* This function calculates (ab)%c */
ull modulo(ull a,ull b,ull c){
    ull x=1,y=a; 		
    while(b > 0){
        if(b%2 == 1){
            x = mulmod(x,y,c);		//here overflow can occur thats why giving call to mul  mod below
        }
        y = mulmod(y,y,c); // squaring the base
        b /= 2;
    }
    return x%c;
}



/* Miller-Rabin primality test, iteration signifies the accuracy of the test */
bool Miller(ull p,int iteration){
    if(p<2){
        return false;
    }
    if(p!=2 && p%2==0){
        return false;
    }
    ull s=p-1;
    while(s%2==0){
        s/=2;
    }
    for(int i=0;i<iteration;i++){
        ull a = rand() % (p-1) + 1, temp=s;
        ull mod=modulo(a,temp,p);
        
       // DB3 ( a, temp, p )
       // DB2 ( modulo(a,temp,p), mulmod(a,temp,p) )

        while(temp!=p-1 && mod!=1 && mod!=p-1){
            mod=mulmod(mod,mod,p);
            temp *= 2;
        }
        if(mod!=p-1 && temp%2==0){
            return false;
        }
    }
    return true;
}

int main (int argc, char const* argv[])
{
	ull n;
	
//	DB ( modulo(312,1234,113) );
//	DB ( mulmod(312,1234,113) );
	
	tests(tc)
	{
		scanf("%llu",&n);
		printf(Miller(n,20)?"YES\n":"NO\n");
	}
	return 0;
}
		
