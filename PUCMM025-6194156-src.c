# include<stdio.h>
# include<math.h>
# include<string.h>
int main()
{
	char num[1000];
	int sum,rem;
	int dig[15];
	int len,i,tot;
	int end ;
	while(scanf("%s",num)!=EOF)
	{
		sum=tot=0;

		for(i=0;i<10;i++)
			dig[i]=0;
		
		len=strlen(num);
		for(i=0;i<len;i++)
		{
			dig[num[i]-'0']++;
			sum += num[i] - '0';
		}
		
		
		tot += dig[1];
		
		end = (num[len-1]-'0') + ((num[len-2] - '0')*10) + ((num[len-3] - '0')*100);
		
		if(!(end&1))
			tot+=dig[2];
		if(sum%3==0)
			tot+=dig[3];
		if(!(end&3))
			tot+=dig[4];
		if(end%5==0)
			tot+=dig[5];
		if(sum%3==0 && !(end&1))
			tot+=dig[6];
		if(!(end&7))
			tot+=dig[8];
		if(sum%9==0)
			tot+=dig[9];
		
		for(i=0;i<len-1;i++)
		{
			rem = (num[i]-'0')%7;
			num[i+1]+=rem*10;
		}
		if( (num[len-1]-'0')%7==0)
			tot += dig[7];
//		printf("num=%s sum=%d end=%d\n",num,sum,end);
		printf("%d\n",tot);
	}
	return 0;
}