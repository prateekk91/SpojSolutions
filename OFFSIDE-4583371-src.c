# include<stdio.h>

void bubblesort(int a[],int n)
{
	int temp,i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j+1]<a[j])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

int main()
{
	int a,d,i,j;
	while(1)
	{
		int c=0;
		scanf("%d%d",&a,&d);
		if(a==0 && d==0)
		break;
	
		int at[a],def[d];
		for(i=0;i<a;i++)
		scanf("%d",&at[i]);
		
		for(i=0;i<d;i++)
		scanf("%d",&def[i]);
	
		bubblesort(def,d);

		
		for(i=0;i<a;i++)
		{	
	//		printf("at[i]=%d",at[i]);
			if(at[i]<def[1])
			{
				c=1;
				break;
			}
		}
		if(c==0)
		printf("N\n");
		else
		printf("Y\n");
	}
return 0;
}			
		

