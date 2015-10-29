# include<stdio.h>
# include<math.h>
int main()
{
double x;
int l;
while(1)
{
scanf("%d",&l);
if(l==0)
break;
x=(l*l)/(2*M_PI);
printf("%.2lf\n",x);
}
return 0;
}