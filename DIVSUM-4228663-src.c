#include<stdio.h>
#include<math.h>

int main()

{int a,b,k,n,m;
long int i,t,j, sum;
scanf("%ld",&t);
for(i=1;i<=t;i++)
{sum=0;

scanf("%ld",&j);
if(j==1)
{printf("0\n");
}
else
{a=(int)sqrt(j);
for(k=a;k>0;k--)
{b=j%k;
if(b==0);
break;
}
for(n=1;n<=k;n++)
{if((j%n)==0)
{m=j/n;
sum=sum+n+m;
}}
if((a*a)==j)
sum-=a;
printf("%ld\n",sum-j);

}
}

return(0);
}
