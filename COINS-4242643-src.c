
#include <stdio.h>

 

#define MAX(a,b) (a>b)?a:b

#define MIN_MEMOISED_LEVEL 100

#define MAX_MEMOISED_LEVEL 10000000

 

unsigned int memoized[MAX_MEMOISED_LEVEL-MIN_MEMOISED_LEVEL+1];

 

unsigned int getNoOfCoins(unsigned int n)

{

unsigned int a,b,c;

if(n == 0)

return 0;

if((n >= MIN_MEMOISED_LEVEL) && (n<= MAX_MEMOISED_LEVEL) && (memoized[n- MIN_MEMOISED_LEVEL] != 0))

return memoized[n- MIN_MEMOISED_LEVEL];


a = getNoOfCoins(n/2);

b = getNoOfCoins(n/3);

c = getNoOfCoins(n/4);

if((n >= MIN_MEMOISED_LEVEL) && (n<= MAX_MEMOISED_LEVEL))

{

memoized[n- MIN_MEMOISED_LEVEL] = MAX(a+b+c,n);

return memoized[n- MIN_MEMOISED_LEVEL];

}

else

return MAX(a+b+c,n);

}

int main()

{

unsigned int t,n;

for(t=10;t > 0; t--)

{

unsigned int noOfDollers;

scanf("%u",&n);

if((n >= 0) && (n<= 1000000000))

{

printf("%u\n",getNoOfCoins(n));

}

else

{

printf("0\n");

}

}

return 0;

}