# include<stdio.h>
int main()
{
	int t;
	int time[22];
	time[0]=0;
	time[1]=106;
	time[2]=211;
	time[3]=317;
	time[4]=422;
	time[5]=528;
	time[6]=633;
	time[7]=738;
	time[8]=844;
	time[9]=949;
	time[10]=1055;
	
	int i;
	for(i=11;i<22;i++)
		time[i]=time[i-11]+1200;

	scanf("%d",&t);
	int starth,startm,endh,endm;
	int startt,endt;
	while(t--)
	{
		int count=0;
		scanf("%d:%d",&starth,&startm);
		scanf("%d:%d",&endh,&endm);
		
		startt=starth*100+startm;
		endt=endh*100+endm;
		
		for(i=0;i<22;i++)
		{
			if(time[i]>startt&&time[i]<=endt)
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}