#include<stdio.h>  

int main()
{
    int cnt;
    long long int n,i;
    scanf("%lld",&n);
    while(n)
    {
    	     for(i=2;i*i<=n;++i)
             {
             	cnt=0;
                  while(n%i==0)
                  {
                      n/=i;
                      ++cnt;
                  }
                  if(cnt)
                  {   
                      printf("%lld^%d",i,cnt);
                      if(n>1)
                      	printf(" ");
                      cnt=0;
                  }
             }
             if(n>1)
                printf("%lld^%d\n",n,1);
             else 
             	printf("\n");
         
         scanf("%lld",&n);
    }
    return 0;
}



