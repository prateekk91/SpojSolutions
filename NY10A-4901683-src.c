# include<stdio.h>
# include<string.h>
int main()
{
	int t,n,i,x;
	int inc[8][2] = {0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7};
	
	char in[41],initial[4]="abc";
	scanf("%d",&t);
	while(t--)
	{
		int out[8]={0};
		scanf("%d",&n);
		scanf("%s",in);
		
		initial[0]=in[0];initial[1]=in[1];initial[2]=in[2];
		
		if(strcmp(initial,"TTT")==0)
		{
			out[0]++;
			x = 0;
		}	
		if(strcmp(initial,"TTH")==0)
		{
			out[1]++;
			x = 1;
		}
		if(strcmp(initial,"THT")==0)
		{
			out[2]++;
			x = 2;
		}
		if(strcmp(initial,"THH")==0)
		{
			out[3]++;
			x = 3;
		}
		if(strcmp(initial,"HTT")==0)
		{
			out[4]++;
			x = 4;
		}
		if(strcmp(initial,"HTH")==0)
		{
			out[5]++;
			x = 5;
		}
		if(strcmp(initial,"HHT")==0)
		{
			out[6]++;
			x = 6;
		}	
		if(strcmp(initial,"HHH")==0)
		{
			out[7]++;
			x = 7;
		}
		
		for(i=3;i<40;i++)
		{
			if(in[i]=='T')
				x = inc[x][0];
			else
				x = inc[x][1];
			out[x]++;
		}
		printf("%d ",n);
		for(i=0;i<7;i++)
		
			printf("%d ",out[i]);
		printf("%d\n",out[7]);
	}
return 0;
}	