# include<stdio.h>
# include<math.h>
# define g 9.8

int main()
{

	int v,h;
	long double ans;
	
	while(1)
	{
		scanf("%d%d",&v,&h);
		
		if(v==-1 && h==-1)
			break;
		
		ans = sqrt ( (2*v*v/g) * (h+((v*v)/(2*g))));;
		printf("%.6Lf\n",ans);
	}
	return 0;
}