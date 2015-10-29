# include<stdio.h>
# include<stdlib.h>
# include<math.h>
int points(double x)
{
	if(x>=91)
		return 10;
	if(x>=81)
		return 9;
	if(x>=71)
		return 8;
	if(x>=61)
		return 7;
	if(x>50)
		return 6;
	if(x==50)
		return 5;
	else
		return 0;
}
double min(double a,double b)
{
	return a<b?a:b;
}

double att(double x)
{
	if(x<51)
		return 5.0;
	if(x<61)
		return 4.0;
	if(x<71)
		return 3.0;
	if(x<81)
		return 2.0;
	if(x<91)
		return 1.0;
	else
		return 0.0;
}

int main()
{
	int n;
	int fail=0;
	int grades[6];
	double sub[6][5];
	int i,j;
	char marks[6][5][10];	
	int tot_points[6];
	double gpa;
	

	scanf("%d",&n);
	
	
	
	
	while(n--)
	{
		double total=0;

		for(i=0;i<6;i++)
		{
			scanf("%d",&grades[i]);
			total+=grades[i];
		}


		for(i=0;i<6;i++)
		{
			for(j=0;j<5;j++)
			{
				scanf("%s",marks[i][j]);
				
			
				if(strcmp(marks[i][j],"ab")==0)
					sub[i][j]=0;
				else
					sub[i][j]=atof(marks[i][j]);
			}
		}
		

		
		
		double sum=0;
		for(i=0;i<6;i++)
		{
			
	
			
			tot_points[i] = points(( (sub[i][0]+sub[i][1]+sub[i][2])-min(sub[i][0],min(sub[i][1],sub[i]

[2])) )*45/40 + sub[i][3]*0.5 + att(sub[i][4]));


			
		}
		fail=0;
			
		for(i=0;i<6;i++)
		{
			if(tot_points[i]==0)
				fail=1;
			sum += tot_points[i]*grades[i];
		}
		//printf("sum=%d total=%d\n",sum,total);
		gpa = (sum*1.0)/(total*1.0);
			
		if(fail==1)
			printf("FAILED, %.2lf\n",gpa);
		else
			printf("PASSED, %.2lf\n",gpa);	
			
	}
	return 0;		
		
	
}