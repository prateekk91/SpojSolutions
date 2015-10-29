#include<stdio.h>
# include<string.h>

unsigned long long int gcd(int a,int b)
{
	if(b==0)
	return a;
	else
	return  (gcd(b,a%b));
}

unsigned long long int lcm(int a, int b)
{
	unsigned long long int lc = (a*b)/gcd(a,b);
	return lc;
}

int check(char ch,char in[],int i,int a[])
{
    int j,c=0;
    
    if(ch=='Y')
    {
              for(j=0;j<i;j++)
              {
                              if(a[i]%a[j]==0 && in[j]=='N')
                              {
                        //                      printf("%d %d \n", a[i],a[j]);
                                              printf("-1\n");
                                              return 1;
                              }
              }
    }
                              
    
    if(ch=='N')
    {
               unsigned long long int ans=1;
               
               for(j=0;j<i;j++)
               {
                               if(a[i]%a[j]==0 && in[j]=='Y')
                               {
                                     ans=lcm(ans,a[j]);
                                     
                                                                          
                               }  
               }
               if(ans == a[i])
               {
                      //printf("%d %d \n", a[i],a[j]);
                      printf("-1\n");
                      return 1;
               }
    }
    return 0;
}

     





int main()
{
	char input[30];
	int a[25];
	int i,j,c,n;
	unsigned long long int num;
	
	while(1)
	{
		unsigned long long int lcms=1;
		for(i=0;i<25;i++)
		{
			a[i]=(i+1);
		}
		
		num=1;	
		scanf("%s",input);
		if(strcmp(input,"*")==0)
		break;
		if(strcmp(input,"N")==0)
		{
		
		printf("-1\n");
			continue;
		}
		
		n=strlen(input);
		
		
	/* Loop to check whether its possible or not */
		for(i=n-1;i>=0;i--)
		{
                           if(input[i]==' ')
                           i++;
			c=0;
			
			
                     c=check(input[i],input,i,a);
                     if(c==1)
                     break;
                         
			
			
		}
	
		if(c==1)
		continue;

		/* Loop to calculate the required number */
		
		for(i=0;i<n;i++)
		{
			if(input[i]=='Y')
			{
            //    printf("a[i]=%d ",a[i]);
                if(a[i]!=20)
				lcms = lcm (lcms,a[i]);
			//	printf("lcm=%llu\n",lcms);
			}
		}
		printf("%llu\n",lcms);
	}
	return 0;
}	
