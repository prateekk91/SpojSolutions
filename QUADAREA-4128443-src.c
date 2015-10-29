# include<stdio.h>
# include<math.h>

int main()
{
int t,i;
double a,b,c,d;
scanf("%d",&t);

for(i=0;i<t;i++)
{
scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
double s=(a+b+c+d)/2;
double ans=sqrt((s-a)*(s-b)*(s-c)*(s-d));
printf("%.2lf\n",ans);
}

return 0;
}