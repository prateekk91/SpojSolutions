# include<cstdio>
int main()
{
	int i,j;
	int t,in[101];
	int a[101],s[5051][101];
	int n,num;
	int flag,flag1;
	scanf("%d",&t);
	int distinct;
	while(t--)
	{
		flag=0;
		flag1=0;
		distinct=0;
		for(i=0;i<=100;i++)
			in[i]=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&num);
			if(in[num])
			{
				flag1 = 1;
			}
			else
				in[num]=1;
		}
		if(flag1==1)
		{
			printf("YES\n");
			continue;
		}
		for(i=0;i<=100;i++)
		{
			if(in[i])
				a[++distinct] = i;
		}
//		printf("DIS = %d\n",distinct);
		for(i=0;i<=distinct;i++)
			s[0][i] = 1;
		for(i=1;i<=5050;i++)
			s[i][0] = 0;
		for(i=1;i<=5050;i++)
		{
			for(j=1;j<=distinct;j++)
			{
				s[i][j] = (s[i][j-1]) + ( ( a[j] <= i ) && ( s[i-a[j]][j-1] ));
				if(s[i][j] > 1)
				{
					flag = 1;
					break;
				}
				
			}
			if(flag==1)
				break;
		}
		if(flag == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
