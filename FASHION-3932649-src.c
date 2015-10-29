# include<stdio.h>

void sort(int a[],int n);
void sum(int a[],int b[],int n);


int main()
{
int n,t,i,j;


scanf("%d",&t);
for(i=0;i<t;i++)
{
	scanf("%d",&n);
	int a[n],b[n];
	for(j=0;j<n;j++)
		{scanf("%d",&a[j]);
		}
	for(j=0;j<n;j++)
		{scanf("%d",&b[j]);
		}
	sort(a,n);
	sort(b,n);
	sum(a,b,n);
}
return 0;
}
void sort(int a[],int n)
{
int i,j,temp;
for(i=0;i<n;i++)
{for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}

void sum(int a[],int b[],int n)
{
int i,sum=0;
for(i=0;i<n;i++)
{
sum+=(a[i]*b[i]);
}
printf("%d\n",sum);
}
