# include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int i,j,c=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=sqrt(i);j++)
		{
			if(i%j==0)
			c++;
		}
	}
  printf("%d",c);

return 0;
}