# include<cstdio>
# include<algorithm>
# include<cmath>
# include<cstring>
int main()
{
	int i,j=0,l;
	char s[100000];
	int count;
	while(scanf("%s",s)!=-1)
	{
		l=strlen(s);
		j++;
		count=0;
		for(i=0;s[i]=='0' && i<l;i++);
		
		if(s[i]=='1')
			count++;
		for(i=i+1;i<l;i++)
		{
			count += ( (s[i]-'0') ^ (s[i-1]-'0') );
		}
		printf("Game #%d: %d\n",j,count);
	}
	return 0;
}
	