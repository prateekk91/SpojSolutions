# include<stdio.h>
int min(int a,int b)
{
	return a<b?a:b;
}
int max(int a,int b)
{
	return a>b?a:b;
}

int main()
{
	int m,n[50],k,l;
	char ans[1000001];
	
	int i,j;
	
	scanf("%d%d%d",&k,&l,&m);
	
	for(i=0;i<m;i++)
	{
		scanf("%d",&n[i]);
	}
	
	ans[1]='A';
	ans[k]='A';
	ans[l]='A';
	
	int minim=min(k,l);
	int maxim=max(k,l);
	
	for(i=2;i<minim;i++)
	{
		if(ans[i-1]=='B')
			ans[i]='A';
		else
			ans[i]='B';
	}
	
	for(i=minim+1;i<maxim;i++)
	{
		if(ans[i-1]=='B' || ans[i-minim]=='B')
			ans[i]='A';
		else
			ans[i]='B';
	}
	
	for(i=maxim+1;i<=1000000;i++)
	{
		if(ans[i-1]=='B' || ans[i-k]=='B' || ans[i-l]=='B')
			ans[i]='A';
		else
			ans[i]='B';
	}
	
	for(i=0;i<m;i++)
	{
		printf("%c",ans[n[i]]);
	}
	printf("\n");
	return 0;
}