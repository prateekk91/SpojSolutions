# include<stdio.h>
# include<math.h>
int main()
{

	int n,m;
	int i,j,count;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
			break;
		m=n;
		printf("%d = ",n);
		count=1;
		i=2;
		j=sqrt(n);
//		if((j*j)==n)
//			count++;
		while(i<=j)
		{
			
//			if((j*j)==n)
//					count--;
				
			while(n%i==0 && i<=j )
			{
//				printf("n=%d",n);
//				count++;
				printf("%d * ",i);
				n/=i;
				j=sqrt(n);
			}
			i++;
		}
		j=sqrt(m);
//		if((j*j)==m)
//			count--;
		for(i=2;i<=j;i++)
		{
			if(m%i==0)
				count++;
		}
		printf("%d\n",n);
		printf("With %d marbles, %d different rectangles can be constructed.\n",m,count);

	}
	return 0;
}
