#include<stdio.h> 
#include<math.h>
 int main() 
{ int tc;
 scanf("%d",&tc); 
long long int a,b,mean,dig,d; 

while(tc--) 
{
	 scanf("%lld",&d);
	a=0;
	b=10000000000;

	for(;;)
	{
		mean=(a+b)/2;
		if(mean==a)
		{break;}
		dig=(long long int)floor((log(2*acos(-1)*mean)/2+mean*(log(mean)-1))/log(10))+1;
		
		if(dig==d)
			break;
		else
		if(dig<d)
			a=mean;
		else
		if(dig>d)
		
			b=mean;
	
	}
	

	do{
		mean++;
		dig=(long long int)floor((log(2*acos(-1)*mean)/2+mean*(log(mean)-1))/log(10))+1;
	   }
		while(dig==d);

	printf("%lld\n",mean-1);
}
return 0;

}

