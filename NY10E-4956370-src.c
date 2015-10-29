# include<stdio.h>

int main()

{

	int n,start,stop,i;

	unsigned long long int arr[75],ans[75];

	arr[0]=1;

	arr[1]=1;

	arr[2]=2;

	arr[3]=6;

	arr[4]=24;

	arr[5]=120;

	arr[6]=720;

	arr[7]=5040;

	arr[8]=40320;

	

	

	for(i=9;i<75;i++)

	{

		

		arr[i] = (i*arr[i-1])/(i-8);

		

	}

	ans[0]=0;

	ans[1]=10;

	for(i=2;i<=64;i++)

	{

		ans[i] = ans[i-1]+(arr[8+i]/arr[8]);

	}

	

	

	scanf("%d",&n);

	

	

	for(i=1;i<=n;i++)

	{

		scanf("%d%d",&start,&stop);

		

		printf("%d %llu\n",i,ans[stop]);

	}



return 0;

}