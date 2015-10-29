# include<stdio.h>
struct stack
{
	int data[2000];
	int top;
}s;

void push(int n)
{
	s.data[++s.top]=n;
}
int pop()
{
	return s.data[s.top--];
}
int main()
{
	s.top=-1;
	int i,j,count;
	int n;
	while(1)
	{	
		s.top=-1;
		count=1;
		scanf("%d",&n);
		if(n==0)
		break;
		int input[n],output[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&input[i]);
			if(input[i]==count)
				{
				output[count-1]=input[i];
				count++;
				while(s.top!=-1 && s.data[s.top]==count)
				{
				output[count-1]=pop();
				count++;
				}

				}
				
			else
			   {
								
				push(input[i]);
			   }
		}
		while(s.top>=0 && s.data[s.top]==count)
		{
			output[count-1]=pop();
			count++;
		}
		if(s.top==-1)
		printf("yes\n");
		else
		printf("no\n");
	}
return 0;
}
