# include<stdio.h>

int gcd(int a,int b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}

int main()
{
	int num,i,j,gcd1,sum=0;

	scanf("%d",&num);
	int input[num];
	int diff[num-1];
	
	for(i=0; i<num;i++)
	{
		scanf("%d",&input[i]);
	}
	for(i=0; i<num-1; i++)
	{
		diff[i]=input[i+1]-input[i];
		
	}

	gcd1 = gcd(diff[0],diff[1]);
	
	for(i=0;i<num-1;i++)
	{
		gcd1= gcd(gcd1,diff[i]);
	}
	
	
	for(i=0;i<num-1;i++)
	{
		sum+=((diff[i]/gcd1)-1);
	}
	printf("%d",sum);
return 0;
}