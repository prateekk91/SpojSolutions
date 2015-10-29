# include<stdio.h>
# include<string.h>

int main()
{
	int t,i,max,diff,count;
	char ch[1010];
	char arr[100]={0};
	
	scanf("%d",&t);
	char c=getchar();
	while(t--)
	{
		max=0;
		

		
		i=0;
		while((c=getchar())!='\n')
			ch[i++]=c;
		ch[i]='\0';

		for(i=65;i<=97;i++)
		{
			arr[i]=0;
		}
		
		for(i=0;i<strlen(ch);i++)
		{
			//printf("%c\n",ch[i]);
			if(ch[i]==' ' || ch[i]=='\t')
				continue;
			else
				arr[ch[i]]++;
			if(arr[ch[i]]>max)
			{
				max=arr[ch[i]];
				c=ch[i];
			}
	
		}
		
		

		count=0;
		for(i=65;i<=90;i++)
			if(arr[i]==max)
				count++;
		
		if(count!=1)
		{
			printf("NOT POSSIBLE\n");
			continue;
		}
		
		diff=c-'E';
		if(diff<0)
			diff+=26;
		printf("\n%d ",diff);
		
		for(i=0;i<strlen(ch);i++)
		{
			if(ch[i]==' ')
				printf(" ");
			else
				printf("%c",ch[i]-diff<65?ch[i]-diff+26:ch[i]-diff);
		}
		printf("\n");
	}
	return 0;
}
		