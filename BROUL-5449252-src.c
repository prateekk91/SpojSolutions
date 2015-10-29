# include<stdio.h>
int main()
{
	int init,bet,final;
	int  mul1,mul2,mul3;
	int count;
	int diff;

	while(1)
	{
		count=0;
		scanf("%d%d%d",&init,&bet,&final);
		if(init==0 && bet==0 && final==0)
			break;
		if(init>final)
		{
			init=init+final;
			final=init-final;
			init=init-final;
		}
		
		mul1=bet;
		mul2=bet*2;
		mul3=bet*3;
	
		diff=final-init;

		count += diff/mul3;
		diff %= mul3;
		count += diff/mul2;
		diff %= mul2;
		count += diff/mul1;
		diff %= mul1;
		
		if(diff==0)
			printf("%d\n",count);
		else
			printf("No accounting tablet\n");
	}
	return 0;
}