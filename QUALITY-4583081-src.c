# include<stdio.h>
int main()
{
	int a,b,c,d,e,f,i=0,solved;
	unsigned long long int time;	
	while(scanf("%d",&a)!=EOF)
	{	solved=0;	
		i++;
		time=0;
		scanf("%d%d%d%d%d",&b,&c,&d,&e,&f);
		if( a!=0 )
			{time+= (a+ ((d-1)*20*60));solved++;}
		if(b!=0){
			time+= (b+ ((e-1)*20*60));solved++;}
		if(c!=0){
			time+= (c+ ((f-1)*20*60));solved++;}
		printf("team %d: %d, %llu\n",i,solved,time);
	}
return 0;
}
