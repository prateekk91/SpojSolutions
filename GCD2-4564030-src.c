int m(char b[], int n, int l)
{
  int i,t=b[0]-48,r=t;
  for(i=1;i<l;)
  {
    if(t<n)
    {
      t = t*10+(b[i]-48);
      r=t;
      i++;
    }
    else
    {
      r=t%n;
      t=r;
    }
  }
  if(t>=n)
    r=t%n;
  return r;
}
int g1(int a, char b[], int l)
{
  int i=2,c=a,g=1,f,s=1;
  if(a==2)
  {
    if(m(b,a,l)==0)
      return 2;
    return 1;
  }
  for(;i*i<=a;i++)
    if(c%i==0)
    {
      f=i;
      while(c%i==0)
      {
        if(m(b,f,l)==0)
          s=f;
        f*=i;
        c/=i;
      }
      g*=s;
      s=1;
    }
  if(c>1)
    if(m(b,c,l)==0)
      g*=c;
  return g;
}
int g2(int a, int b){
if(b==0)return a;return g2(b,a%b);}
int main(){
int a,t,l;char b[260];
scanf("%d",&t);
while(t--){
scanf("%d %s\n",&a,b);
l=strlen(b);
if(!a)printf("%s\n",b);
else if(a==1)puts("1");
else if (l<10)printf("%d\n",g2(a,atoi(b)));
else printf("%d\n",g1(a,b,l));}
return 0;}

