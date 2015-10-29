# include<stdio.h>
int main()
{
	
	int t,k,a[500001],i;
	char b[4000000]={0};
	
	a[0]=0;
	b[0]=1;
	for(i=1;i<=500000;i++)
	{
		int x=a[i-1]-i;
		
		if(x<0 || b[x]==1)
			a[i] = a[i-1]+i;
		else
			a[i] = x;
		
		b[a[i]]=1;
		
	}
	
	while(1)
	{
		scanf("%d",&k);
		if(k==-1)
			break;
		
		printf("%d\n",a[k]);
	}
return 0;
}