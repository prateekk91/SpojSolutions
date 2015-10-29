# include<stdio.h>
# include<math.h>

int main()
{
	int R,B,x,y,l,b;
	scanf("%d%d",&R,&B);
	
	x = (R+4)/2;
	
	y = (R + B);
	
	l = (x + sqrt( (x*x) - (4 * y) )) / 2;
	
	b = y / l;
	
	if(l>=b)
	
	printf("%d %d\n",l,b);
	
	else
	
	printf("%d %d\n",b,l);
	
	return 0;
}
