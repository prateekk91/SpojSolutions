# include<stdio.h>
int main()
{
	int a[10],sum1=0,sum2=0,i;
	for(i=0;i<10;i++)
	{
		sum2=sum1;
		
		scanf("%d",&a[i]);
		if(sum1<100)
			sum1+=a[i];
		if(abs(sum2-100) < abs(sum1-100))
			{
			sum1-=a[i];
			break;
			}
	}
	printf("%d\n",sum1);
	return 0;
}
