# include<stdio.h>
# include<cmath>
# include<malloc.h>
using namespace std;
long long int arr[2][2];
void mul(long long int m1[][2],long long int m2[][2])
{
	long long int temp[2][2];
	
	temp[0][0]=(m1[0][0]*m2[0][0] + m1[0][1]*m2[1][0])%1000000007;
	temp[0][1]=(m1[0][0]*m2[0][1] + m1[0][1]*m2[1][1])%1000000007;
	temp[1][0]=(m1[1][0]*m2[0][0] + m1[1][1]*m2[1][0])%1000000007;
	temp[1][1]=(m1[1][0]*m2[0][1] + m1[1][1]*m2[1][1])%1000000007;
	m1[0][0]=temp[0][0];
	m1[0][1]=temp[0][1];
	m1[1][1]=temp[1][1];
	m1[1][0]=temp[1][0];
}


void power(long long int arr[][2],long long int n)
{
	long long int temp[2][2];
	temp[0][0]=arr[0][0];
	temp[0][1]=arr[0][1];
	temp[1][0]=arr[1][0];
	temp[1][1]=arr[1][1];
	if(n==1)
		return;
	if(n%2==0)
	{
		power(arr,n/2);
		mul(arr,arr);
	}
	else
	{
		power(arr,n/2);
		mul(arr,arr);
		mul(arr,temp);
	}
		
		
	
}

long long int fibo(long long int n)
{
	
//	long long int (*arr)[2]=ar;
	long long int temp[2][2]={{0}};
	arr[0][0]=arr[0][1]=arr[1][0]=1;
	arr[1][1]=0;
	power(arr,n);
	return (arr[1][0])%1000000007;
}
int main()
{
	int t;
	long long int m,n,a,b,i,j;
	long long int sum;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&m);
		
		sum = (  fibo(2*m) * (arr[0][0])   )% 1000000007;
		
		printf("%lld\n",sum);
	}
	return 0;
}
