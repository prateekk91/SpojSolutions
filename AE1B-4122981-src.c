# include<stdio.h>

void sort(int a[],int n,long long int scr);

int main()
{
int n,k,s;
scanf("%d%d%d",&n,&k,&s);

long long int sum=0;
long long int scr=(k*s);

int a[n],i;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
sort(a,n,scr);


return 0;
}

void sort(int a[],int n,long long int scr)
{
int i,j,temp;
long long int sum=0;
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]<a[j+1])
      {
	temp=a[j];	
	a[j]=a[j+1];
	a[j+1]=temp;
       }
   }
}

for(i=0;sum<scr;i++)
{
sum+=a[i];
}

printf("%d\n",(i));
}