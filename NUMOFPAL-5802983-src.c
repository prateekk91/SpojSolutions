# include<stdio.h>
# include<string.h>
int main()
{
	
	char s[1010];
	gets(s);
	
	int i=0,j=0,count=0;
	int len=strlen(s);
	int k,l;
	while(j<len)
	{
		k=i;
		l=j;
		while(k>=0 && l<len && s[k]==s[l])
		{
			count++;
			k--;
			l++;
		}
		i++;
		j++;
	}
	i=0;
	j=1;
	while(j<len)
	{
		k=i;
		l=j;
		while(k>=0 && l<len && s[k]==s[l])
		{
			count++;
			k--;
			l++;
		}
		i++;
		j++;
	}
	printf("%d\n",count);
	return 0;
}