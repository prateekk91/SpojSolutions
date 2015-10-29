# include<stdio.h>
int main()
{
int i,n,x1,x2,y1,y2;
long a,ar=0;
scanf("%d",&n);

for(i=0;i<n;i++)
{
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
a=(x2-x1)*(y2-y1);
ar+=a;
}
printf("%d",ar);
return(0);
}
