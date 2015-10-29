# include<cstdio>
# include<cmath>
# include<iostream>
# include<algorithm>
# include<cstring>
# include<string>
using namespace std;
int main()
{
	char a[1000000];
	int t,r,i,j,d,l;
	scanf("%d",&t);
	while(t--)
	{
		r=0;
		scanf("%s",a);
		l = strlen(a);
		for(i=0;i<l;i++)
		{
			r = (r*10)+(a[i]-'0');
			r=r-(r/252)*252;
		}
		if(r==0)
			printf("Yes ");
		else
			printf("No ");
		r=0;
		for(i=0;i<l;i++)
		{
			r = (r*10)+(a[i]-'0');
			r=r-(r/525)*525;
		}
		if(r==0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}