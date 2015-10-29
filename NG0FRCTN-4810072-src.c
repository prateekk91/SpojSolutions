# include<stdio.h>
int main()
{
	int i,j;
	long long int n,parent,node,N,D;
	char route[100];
	while(1)
	{
		i=0;
		N=D=1;
		scanf("%lld",&n);
		if(n==0)
			break;

		
		node=n;
		while(node!=1)
		{
			parent = node/2;
			if(node&1)
				route[i++]='r';
			else
				route[i++]='l';
			node=parent;
		}
		route[i]='\0';

		for(i=i-1;i>=0;i--)
		{
			if(route[i]=='r')
				N+=D;
			else
				D+=N;
		}
		printf("%lld/%lld\n",N,D);
	}
	return 0;
}