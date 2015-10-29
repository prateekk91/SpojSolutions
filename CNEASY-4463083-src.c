# include<stdio.h>
# include<math.h>


	
int main()
{
	int tc,marks,i,j;
	long long int ans,temp;
	double degrees,max;
	char place[50];
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%d",&marks);
		double degree[marks];
			
		for(i=0;i<marks;i++)
		{
			scanf("%s%lf",place,&degrees);
			degree[i]=degrees;		
		}
		
		for(i=0;i<marks;i++)
		{
			for(j=i;j<marks;j++)
			{
				if( degree[i] > degree[j] )
				{
					temp = degree[j];
					degree[j] = degree[i];
					degree[i] = temp;
				}
			}
		}
		
		
		max = (360-degree[marks-1]) + degree[0];
	

		for(i=0;i<marks-1;i++)
		{
			if( (degree[i+1]-degree[i]) > max)
				
				max= (degree[i+1]-degree[i]);
				
		}
		
		ans = ceil( (72*(360-max)*60) / 360 );
		printf("%lld\n",ans);
	}
return 0;
}