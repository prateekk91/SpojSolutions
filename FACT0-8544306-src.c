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
                      printf("%lld^%d ",i,cnt);
                      cnt=0;
                  }
             }
             if(n>1)
                printf("%lld^%d ",n,1);
             printf("\n");
         scanf("%lld",&n);
    }
    return 0;
}




