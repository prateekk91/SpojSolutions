# include<cstdio>
# include<cmath>
# include<algorithm>
using namespace std;
int c,h,a;
void goair()
{
	h+=3;
	a+=2;
	c++;
}
void gowater()
{
	h-=5;
	a-=10;
	c++;
}
void gofire()
{
	h-=20;
	a+=5;
	c++;
}

int main()
{
	int t;
	int i,j;
	scanf("%d",&t);
	while(t--)
	{
		c=0;
		scanf("%d%d",&h,&a);
		goair();
		while(h>0 && a>0)
		{
			if(h>5 && a>10)
			{
				gowater();
				goair();
			}
			else
			if(h>20)
			{
				gofire();
				goair();
			}
			else
				break;
		}
		printf("%d\n",c);
	}
	return 0;
}