# include<stdio.h>

int checkdate(int d1,int m1,int y1,int c1,int d2,int m2,int y2,int c2)
{
	if(d2-d1==1)
		{
		if(m1==m2 && y1==y2)
			return c2-c1;
		}
	if(d2==1)
		{
			if(d1==30)
			{
				switch(m1)
				{
				case 4:
				case 6:
				case 9:
				case 11: if(y1==y2 && m2-m1==1)
					return c2-c1;
				}
			}
			if(d1==31)
			{
				switch(m1)
				{
					case 1:
					case 3:
					case 5:
					case 7:
					case 8:
					case 10: if(y1==y2 && m2-m1==1)
						return c2-c1;
				}
				if(m1==12 && m2==1 && y2-y1==1)
					return c2-c1;
			}
			if(d1==28)
			{
				if(m1==2 && m2==3 && y1==y2 && !((y1%4==0 && y1%100!=0)||y1%400==0))
					return c2-c1;
			}
			if(d1==29)
			{
				if(m1==2 && m2==3 && y1==y2 && ((y1%4==0 && y1%100!=0)||y1%400==0))
					return c2-c1;
			}
		}
	return 0;
}
	
	
	
	

			

int main()
{
	int i,n,d1,m1,y1,d2,m2,y2,c1,c2,days,ret;
	long long int sum;
	while(1)
	{	ret=0;
		days=0;
		sum=0;
		scanf("%d",&n);
		if(n==0)
		break;
		else
		scanf("%d%d%d%d",&d1,&m1,&y1,&c1);
		for(i=1;i<n;i++)
		{
			scanf("%d%d%d%d",&d2,&m2,&y2,&c2);
			ret=checkdate(d1,m1,y1,c1,d2,m2,y2,c2);
			sum+=ret;
			if(ret!=0)
			days++;
			d1=d2;
			m1=m2;
			y1=y2;
			c1=c2;
		}
		printf("%d %lld\n",days,sum);
	}
return 0;
}
		
