# include<stdio.h>
int main(){int t,n,i;scanf("%d",&t);while(t--){scanf("%d",&n);
if(n==0)
printf("NOT POSSIBLE\n");
else
{for(i=n-1;i>=0;i--)printf("%d ",i);}
printf("\n");}
return 0;
}