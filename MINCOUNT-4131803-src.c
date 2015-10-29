# include<stdio.h>

int main()
{
        int T;
        scanf("%d", &T);
        while(T--){
                   long long int N; scanf("%lld", &N);
                   
                   long long int re;
                   re=(((N+1)*(N))/6);
                   printf("%lld\n", re);
        }
        return 0;
}