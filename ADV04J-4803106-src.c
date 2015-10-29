#include<stdio.h>
int main()
{
	int t,n,r=0;
	scanf("%d",&t);
	while (t--){
		scanf("%d",&n);
		//int k,sum,i;
		if(n==3){printf("3\n");continue;}
		
		for(r=0;n!=3&&n!=2;n=(n+1)/2)
		r++;
			if(n==2)
			printf("%d\n",r+2);
			else
			printf("%d\n",r+3);

	}
return 0;
}
