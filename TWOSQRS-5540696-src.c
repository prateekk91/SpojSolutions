#include<stdio.h>
# include<math.h>
void sum(long long int n);
int main()
{
int i,n;
long long int num;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%lld",&num);
while(!(num&1))
{
	num>>=1;
}
sum(num);
}
return 0;
}

void sum(long long int n)
{
int i;
int d1=0,d3=0;
long long int j=sqrt(n);
for(i=1;i<=j;i+=2)
{if(n%i==0)
{
if((i&3)==1)
d1++;
if((i&3)==3)
d3++;
int tmp = n/i; 
if(tmp!=i){
if((tmp&3)==1)
d1++;

if((tmp&3)==3)
d3++;}
}
}

if((d1-d3)>0)
printf("Yes\n");
else
printf("No\n");

}

