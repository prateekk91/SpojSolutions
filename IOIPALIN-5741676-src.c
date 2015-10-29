# include<stdio.h>
# include<string.h>
int initial=0;

int max(int a,int b)
{
	return a>b?a:b;
}
int lcs(char s[],char p[])
{
        int i,j;
        int length=initial+1;
        int count[2][length+1];
        count[0][0]=0;
        count[1][0]=0;
        for(i=0;i<=length;i++)
                count[0][i]=0;
        for(i=1;i<=length;i++)
        {
                for(j=1;j<=length;j++)
                {
                        if(s[i-1]==p[j-1])
                        {
                                count[1][j]=count[0][j-1]+1;
                                
                                
                        }
                        else
                        {
                                count[1][j]=max(count[1][j-1],count[0][j]);
                                
                        }
                        
                //printf("%d ",count[0][j]);
                }
                //printf("\n");
                for(j=1;j<=length;j++)
                	count[0][j]=count[1][j];
        }
        
        return count[0][length];
 
}
int main()
{
                int i,t;
                
                
        	scanf("%d",&t);
                char s[1000001];
                char p[1000001];
                
		        	scanf("%s",s);
		 	       initial=strlen(s)-1;
		 	       for(i=0;i<=initial;i++)
		 	       {
		 	               p[i]=s[initial-i];
		 	       }
		 	     //  printf("%s\n%s\n",s,p);
		 	       printf("%d\n",initial+1-lcs(s,p));
		
        return 0;
}
