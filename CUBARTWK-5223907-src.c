# include<stdio.h>
int main()
{
	int h,w,i,n,blocks;
	
	
	while(1)
	{
		blocks=0;
		int ar1[21]={0};	
		
		scanf("%d%d",&h,&w);
		
		if(h==0 && w==0)
			break;
	
		for(i=0;i<h;i++)
		{
			scanf("%d",&n);
			ar1[n]++;
			blocks += n;
			//printf("%d\n",blocks);
		}
	
		for(i=0;i<w;i++)
		{
			scanf("%d",&n);
			if(ar1[n]<=0)
				blocks += n;
			else
				ar1[n]--;
			//printf("%d\n",blocks);
		}
		printf("%d\n",blocks);
	}
return 0;
}	
			
			
		
		
			

