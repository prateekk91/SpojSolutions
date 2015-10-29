# include<cstdio>
# include<cstring>
using namespace std;
int main()
{
	int count=0;
	int match=0;
	int l1,l2,i,j;
	char s[600],t[600];
	while(1)
	{
		scanf("%s%s",s,t);
		if(s[0]=='*' && t[0]=='*')
			break;
		
		l1=strlen(t);
		match=0;
		count=0;
//		printf("%s %s\n",s,t);
		for(i=0;s[i];i++)
		{
			match=0;
			while( (s[i]==t[i]) && i<l1)
				i++;
			
			while( (s[i]!=t[i]) && i<l1)
			{
				match++;
				i++;
			}
			if(match)
			{
//				printf("i=%d\n",i-1);
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}