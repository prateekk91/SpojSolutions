# include<stdio.h>
# include<stdlib.h>
int main()
{
	int t,n,i,j,k=0;
	int cubes[101];
	scanf("%d",&t);
	if(t==0)
		exit(0);
	unsigned short int cubeful[1000010]={0};
	for(i=1;i<=100;i++)
	{
		cubes[i]=(i*i*i);
	}
	
	int flag=0;
	for(i=2;i<=100;i++)
	{
		
		for(j=cubes[i];j<=1000009;j+=cubes[i])
		{
			cubeful[j]=1;
		}
		
	}
	//for(i=990000;i<=1000000;i++)
	//	printf("%d ",cubeful[i]);

	for(i=1;i<=1000009;i++)
	{
		if(cubeful[i]==1){
			
			cubeful[i]=++k;
			if(cubeful[i]==0)
				cubeful[i]=1;
		}
		
	}

	
	//for(i=0;i<1000000&&cubeful[i]<=65535;i++)
	//	if(cubeful[i]==65535)
	//		printf("cu=%d i=%d next_cu=%d nexti=%d\n",cubeful[i],i,cubeful[i+1],i+1);
	
	//printf("my=%u",cubeful[779776]);	
	int find=0;
	for(i=1;i<=t;i++)
	{
		find=0;
		scanf("%d",&n);
		

		if(cubeful[n]!=0)
			printf("Case %d: Not Cube Free\n",i);
		else
		{
			if(n<8)
				printf("Case %d: %d\n",i,n);
			else
			{
				for(j=n;cubeful[j]==0;j--){}
				if(n<=389888)
				printf("Case %d: %d\n",i,n-cubeful[j]);
				else
				if(n<=779784)
				printf("Case %d: %d\n",i,n-cubeful[j]-65536);
				else
				printf("Case %d: %d\n",i,n-cubeful[j]-(2*65536));
			}
		}	





/*		int a=0,b=170000,mid;
		mid=(a+b)/2;
		while(1)
		{
			if(n==cubeful[mid])
			{
				printf("Case %d: Not Cube Free\n",i);
				find=1;
				break;
			}
			if(n>cubeful[mid])
				a=mid;
			else
			if(n<cubeful[mid])
				b=mid;
			mid=(a+b)/2;
			if(mid==a || mid==b)
				break;
			
		}
		if(find==0)
			printf("Case %d: %d\n",i,n-b+1);

*/
	}
return 0;
}