# include <stdio.h>
# define infinity 1000000000

int main()
{
	int r,n,i,j,max,ratio,r1;
	while(1)
	{
		
		scanf("%d%d",&n,&r);
		if(n==0 && r==0)
		break;
		int ing[n];
		int maximum[r];
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&ing[i]);
			
		}
		
		for(j=0 ; j<r ; j++)
		{
			max = infinity;
			for( i=0 ; i<n ; i++ )
			{
				scanf("%d",&r1);
				
				if(r1==0)
				ratio = infinity;
				else
				ratio = ( (ing[i]*10) / r1);
				if( ratio < max)
				max = ratio;
							}
		maximum[j] = max;
		
		}
		
		max=maximum[0];
		r1=1;
		for(i=0;i<r;i++)
		{
			if( maximum[i] > max )
			{
				max = maximum[i];
				r1 = i+1;
			}
		}
		
		printf("%d %d\n",r1,max);
	}

	return 0;
}
				