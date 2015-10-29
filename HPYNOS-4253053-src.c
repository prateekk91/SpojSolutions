# include<stdio.h>

int sumsq(unsigned long long int n)
{
int m=0,rem=0;
while(n!=0)
{
rem=n%10;
m+=(rem*rem);
n=n/10;
}
return m;
}

int main()
{
int c=0;
unsigned long long int n;
scanf("%llu",&n);
while(n!=1||n!=4)
{
if(n==4)
{printf("-1\n");break;}
if(n==1)
{printf("%d",c);break;}
n=sumsq(n);
c++;
}
return 0;
}