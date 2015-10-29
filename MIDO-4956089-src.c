# include<stdio.h>
int main()
{
	int n,i,lead=0,leader,in,min,sec,prevtot=0;
	int time1=0,time2=0,seconds=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d:%d",&in,&min,&sec);
		
		seconds = (min*60)+sec;
		
		
		if(lead!=0)
		{
			if(leader==1)
				time1+=(seconds-prevtot);
			else
				time2+=(seconds-prevtot);
		}
		if(time1==0&&time2==0)   //at the time of 1st goal
		{
			leader=in;
						
		}
		
		if(leader==in)
			lead++;
		else
			{
			if(lead==0)
				{
				leader=in;
				lead++;
				}
			else
				lead--;
			}
		prevtot=seconds;
	}
	if(lead!=0)
	{
		if(leader==1)
		time1 += (2880-seconds);
		else
		time2 += (2880-seconds);
	}
	
	printf("%.2d:%.2d\n%.2d:%.2d\n",time1/60,time1%60,time2/60,time2%60);
	return 0;
}