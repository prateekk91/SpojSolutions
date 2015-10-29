# include<stdio.h>

# include<math.h>

int main()

{

	int t;

	int i,j,k;

	int p,n;

	int c,rank[9];

	int sum=0;

	int calc,arr[9];

	scanf("%d",&t);

	while(t--)

	{

		for(i=0;i<9;i++)

			rank[i]=0;

		sum=0;





		scanf("%d",&p);

		scanf("%d",&c);

		for(i=0;i<c;i++)

		{

			scanf("%d",&n);

			rank[n]++;

		}

		

//		for(i=1;i<=8;i++)

//			printf("%d\n",rank[i]);

//		scanf("%d",&i);

		int low=0,high=10000000;

		

		int mid=(low+high)/2;

		

		

		int prev_sum=0,prev_mid=mid;
		int count=0;

		while(1)

		{

			sum=0;

//			printf("mid=%d low=%d high=%d\n",mid,low,high);

			for(i=1;i<=8;i++)

			{

				int x=mid/i;

				calc = (-1+sqrt(1+8*x)) /2;

				sum += calc*rank[i];

				arr[i]=rank[i]>0?calc:0;

//				printf("calc=%d\n",calc);

			}

//			printf("sum=%d\n",sum);

			if(sum==p)

				break;

					

			else

			if(sum<p)

				low = mid+1;

			else
				high=mid-1;

			

			if(prev_sum==sum)
				count++;
			else
				count=0;
			if(count>=100)
			{
				sum=0;
				mid=low;
				for(i=1;i<=8;i++)

				{

					int x=mid/i;

					calc = (-1+sqrt(1+8*x)) /2;

					sum += calc*rank[i];

					arr[i]=rank[i]>0?calc:0;

//					printf("calc=%d\n",calc);

				}
				break;
			}

		

			mid = (low+high)/2;

			prev_sum=sum;

		}

//		for(i=1;i<=8;i++)

//			printf("%d ",arr[i]);

		int max=0;

		for(i=1;i<=8;i++)

		{

			int each = ((arr[i]*(arr[i]+1))/2)*i;

			if(each>max)

				max=each;

		}

		printf("%d\n",max);

	}

	return 0;

}	

			