# include<stdio.h>

/*==================code for taking fast integer input========================*/
int sign;
int ch;
inline void S( int x ) {
	x=0;
	while((ch<'0' || ch>'9') && ch!='-' && ch!=EOF)	ch=getchar_unlocked();
	if (ch=='-')
		sign=-1 , ch=getchar_unlocked();
	else
		sign=1;
	do
		x = (x<<3) + (x<<1) + ch-'0';
	while((ch=getchar_unlocked())>='0' && ch<='9');
	x*=sign;
}
/*============================================================================*/


int main()
{
int n,b,i,j;
while(1)
{	
	int flag=0;
	scanf("%d%d",&n,&b);
	if(n==0&&b==0)
		break;
	
	int barray[b],yes[n+1];
	
	for(i=0;i<n+1;i++)
	yes[i]=0;

	for(i=0;i<b;i++)
	{
		scanf("%d",&barray[i]);
		
		
	}
	for(i=0;i<b;i++)
	{
	int value=barray[i];
	
	}
	
	
	
	for(i=0;i<b;i++)
	{
		for(j=i;j<b;j++)
		{
		int value=abs(barray[i]-barray[j]);
		yes[value]=1;
		}
	}
	for(i=0;i<n+1;i++)
	{
		if(yes[i]==0)
		{
		printf("N\n");
		flag=1;
		break;
		}
	}
	
	if(flag==0)
	printf("Y\n");

}
return 0;
}
