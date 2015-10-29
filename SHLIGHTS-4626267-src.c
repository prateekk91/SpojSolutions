#include<stdio.h>
#include<string.h>
int main()
{
int t,k;
scanf("%d",&t);
for(k=0;k<t;k++)
{
    int i,j,l,c=0,max=0;
    char s[100002];
    scanf("%s",s);
    l=strlen(s);
    
    int b[l],n[l],cnt=0,z=l-1;
    while(s[z]!='B' && z>=0) z--;
    //printf("%d",z);
  
    
    
    for(i=l-1;i>=0;i--)
    {
                       if((s[i]!='B') && (i < z))
                       {
                                      n[i]=(++cnt);
                                      b[i]=1;
                       }
                       if((s[i]!='B') && (i > z))
                       {
                                      n[i]=(++cnt);
                                      b[i]=0;
                       }
                       else if(s[i]!='G'){
                            b[i]=0;
                             n[i]=0;
                       }
                       //n[l]=(++cnt);
    }
    //for(i=0;i<l;i++) printf("%d",b[i]);
    //system("pause");
    c=0;
    for(i=l-1;i>=0;i--)
    {
                       if(b[i])
                       {
                               b[i]+=c;
                               c++;
                       }
                       if(b[i]==0 && c!=0) c--;
    }

    for(i=l-1;i>=0;i--)
    {
                      if(b[i]>0)
                       {max=(max>(l-i+b[i]-n[i]-1)?max:(l-i+b[i]-n[i]-1));
                 
                        }
                       
    }        
                 
    printf("%d\n",max);
}
    
    
return 0;    
}	
