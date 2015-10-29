# include<stdio.h>
# include<math.h>
int main()
{
	double u,v,w,U,V,W;
	double ans;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf%lf%lf%lf%lf%lf",&U,&V,&w,&W,&v,&u);
		
		ans = sqrt( (4*u*u*v*v*w*w) - ((u*u)*pow(((v*v)+(w*w)-(U*U)),2)) - ((v*v)*pow(((w*w)+(u*u)-(V*V)),2)) - ((w*w)*pow(((u*u)+(v*v)-(W*W)),2)) + ((v*v)+(w*w)-(U*U))*((u*u)+(w*w)-(V*V))*((v*v)+(u*u)-(W*W)) )/12;
		printf("%.4lf\n",ans);
	}
	return 0;
}