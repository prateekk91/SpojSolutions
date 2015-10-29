    #include<stdio.h>
    #include<math.h>

    int main()
    {
    int n,p,x;
    double p1;
    long long i,j;
    for(;;)
    {
    scanf("%de%d",&n,&p);
    if (n==0&&p==0) break;
    if(n==0)printf("0\n");
    else{
    p1=pow(10.0,(double)p);
    x=(int)floor(log10(n*p1)/log10(2.0));
    i = (long long int)pow(2.0,(double)x);
    j=(long long int)((n*p1)-i)*2+1;
    printf("%lld\n",j);
    }}
    return 0;
    }
