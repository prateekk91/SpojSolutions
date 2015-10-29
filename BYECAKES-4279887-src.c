# include<stdio.h>
int main()
{

int e,f,s,m,e1,m1,f1,s1,reqd_e,reqd_f,reqd_s,reqd_m;
double r1,r2,r3,r4;
int max_r;

	while(1)
	{
	scanf("%d%d%d%d%d%d%d%d",&e,&f,&s,&m,&e1,&f1,&s1,&m1);
	if(e==-1&&f==-1&&s==-1&&m==-1&&e1==-1&&f1==-1&&s1==-1&&m1==-1)
	break;
	
	r1=e/(e1*1.0);
	r2=f/(f1*1.0);
	r3=s/(s1*1.0);
	r4=m/(m1*1.0);
	
	if(r1>=r2&&r1>=r3&&r1>=r4)
	max_r=ceil(r1);
	
	else
	if(r2>=r1&&r2>=r3&&r2>=r4)
	max_r=ceil(r2);
	
	else
	if(r3>=r1&&r3>=r2&&r3>=r4)
	max_r=ceil(r3);
	
	else
	max_r=ceil(r4);
	
	reqd_e=(max_r*e1)-e;
	reqd_f=(max_r*f1)-f;
	reqd_s=(max_r*s1)-s;
	reqd_m=(max_r*m1)-m;

	printf("%d %d %d %d\n",reqd_e,reqd_f,reqd_s,reqd_m);
	}
return 0;
}
	
	