# include<stdio.h>
//# include<cmath>
# include<malloc.h>
//using namespace std;

void mul(long long int m1[][2],long long int m2[][2])
{
	long long int temp[2][2];
	
	temp[0][0]=(m1[0][0]%1000000007*m2[0][0]%1000000007 + m1[0][1]%1000000007*m2[1][0]%1000000007)%1000000007;
	temp[0][1]=(m1[0][0]%1000000007*m2[0][1]%1000000007 + m1[0][1]%1000000007*m2[1][1]%1000000007)%1000000007;
	temp[1][0]=(m1[1][0]%1000000007*m2[0][0]%1000000007 + m1[1][1]%1000000007*m2[1][0]%1000000007)%1000000007;
	temp[1][1]=(m1[1][0]%1000000007*m2[0][1]%1000000007 + m1[1][1]%1000000007*m2[1][1]%1000000007)%1000000007;
	m1[0][0]=temp[0][0];
	m1[0][1]=temp[0][1];
	m1[1][1]=temp[1][1];
	m1[1][0]=temp[1][0];
}


void power(long long int arr[][2],int n)
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
	long long int arr[2][2];
//	long long int (*arr)[2]=ar;
	long long int temp[2][2]={{0}};
	arr[0][0]=arr[0][1]=arr[1][0]=1;
	arr[1][1]=0;
	power(arr,n);
	return arr[1][0]%1000000007;
}
int main()
{
	int t;
	long long int m,n,a,b,i,j;
	long long int sum;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&m,&n);
		if(m==0)
			i = 1;
		else
			i = fibo(m+1);
		if(n==0)
			j = 1;
		else
			j = fibo(n+2);
		sum = (j - i) % 1000000007;
		if(sum<0)
			sum+=1000000007;
//		printf("i = %lld j=%lld\n",i,j);
		
		printf("%lld\n",sum);
	}
	return 0;
}