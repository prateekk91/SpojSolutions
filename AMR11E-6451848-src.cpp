# include<cstdio>
# include<cmath>
using namespace std;


int check(int n)
{
	int i=2,j,count,c=-1;
	count=0;
//	printf("n=%d\n",n);
	while(n>1)
	{
		while(n%i==0)
		{
			if(i!=c)
				count++;
			c=i;
			n=n/i;
		}
			if(c==0)i++;
		if(c!=0)
		{
			c=0;
		}
		if(i*i>n)
		{
			if(n!=1)
				count++;
			break;
		}
		
		
		
	}
//	count--;
//	printf("count=%d\n",count);
	if(count>2)
			return 1;
	else
			return 0;

}

int main()
{
	int t,i,j,k;
	int n;
	int arr[1001];
	j=1;
	for(i=2;j<=1000;i++)
	{
		if(check(i))
			arr[j++] = i;
	}
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		printf("%d\n",arr[n]);
	}
	return 0;
}

