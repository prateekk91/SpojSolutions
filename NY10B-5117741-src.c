# include<stdio.h>
# include<math.h>
	

int main()
{
	int t,n,b,x,y;
	
	scanf("%d",&t);
	while(t--)
	{
		int num1[100]={0},num2[100]={0};
		int sum[100],ans;	
		ans=0;
		scanf("%d%d%d%d",&n,&b,&x,&y);
		

		int i=99;
		
		while(x)
		{
			num1[i--] = x % b;
		
			x /= b;
		}
			
		i=99;
		
		while(y)
		{
			num2[i--] = y % b;
		
			y /= b;
		}
		
		for(i=0;i<100;i++)
			sum[i] = (num1[i] + num2[i]) % b;
		
		i=0;
		int j=99;
		while(j)
		{
			if(sum[j]!=0)
				ans += (pow(b,i)*sum[j]);
			i++;
			j--;
		}
		
		printf("%d %d\n",n,ans);
	}
	return 0;
}