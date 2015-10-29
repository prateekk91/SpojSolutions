# include<stdio.h>
# include<string.h>
struct stack
{
	char c[2500];
	int top;
}s;

void push(char ch)
{
	s.c[++s.top]=ch;
}
char pop()
{
	return s.c[s.top--];
}
int main()
{
	char ch[2500];
	int count;
	char c1,c2;
	int i,j=0;
	while(scanf("%s",ch)!=-1)
	{
		j++;
		count=0;
		s.top=-1;
		
		if(strstr(ch,"-"))
			break;
		
		int l=strlen(ch);
		for(i=0;i<l;i++)
		{
			if(ch[i]=='{')
				push(ch[i]);
			else
			if(ch[i]=='}')
			{
				if(s.top!=-1)
				{
					if(s.c[s.top]=='{')
						pop();
					else
						push('}');
				}
				else
					push('}');
			}
		}
		while(s.top!=-1)
		{
			c1=pop();
			c2=pop();
			if(c1==c2)
				count+=1;
			else
				count+=2;
		}
		printf("%d. %d\n",j,count);
		
	}
	return 0;
}
					
