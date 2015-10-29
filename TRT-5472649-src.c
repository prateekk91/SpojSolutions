# include<stdio.h>

long long int max(long long int a,long long int b)
{
	//printf("\na=%lld b=%lld\n",a,b);
	return (a>b?a:b);
}

int main()
{
	int n;
	long long int arr[2][2010];
	int trt[2010];
	int i,j;

	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&trt[i]);
		arr[1][i]=n*trt[i];
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			//printf("trt[%d]=%d,\n",j-i-1,trt[j-i-1]);
			arr[i&1][j] = max( (arr[(i+1)&1][j] + (trt[j-i-1]*(n-i-1))),(arr[(i+1)&1][j-1] + (trt[j]*(n-

i-1))) );
			//printf("%d ",arr[i&1][j]);
		}
		//printf("\n");
	}
	printf("%lld\n",arr[n&1][n-1]);
	
	return 0;
}