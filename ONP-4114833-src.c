#include<stdio.h>
#include<malloc.h>

typedef struct{
        int top;
        int element[400];
        }stack;
        
        stack store;
        
        
        void push(char c)
        {
             
             store.top++;
             store.element[store.top]=c;
        }
        
        char pop()
        {
             char c;
             c=store.element[store.top];
             store.top--;
             return c;
        }
        
        int outer(char a)
        {
            int y=a=='('?80:a=='^'?70:a=='/'?60:a=='*'?50:a=='-'?40:a=='+'?30:0;
            return y;
        }
        int in(char a)
        {
            int y=a=='^'?70:a=='/'?60:a=='*'?50:a=='-'?40:a=='+'?30:a=='('?20:0;
            return y;
        }

int main()
{
    int test,i,j;char out;
    
                           char infix[400];
                           char prefix[400];
    store.top=-1;
    scanf("%d",&test);
    for(test;test>0;test--)
    {                      i=0;
    
                           scanf("%s",infix);
                           
                           
                           for(j=0;infix[j];j++)
                           {    
                               if(infix[j]==')')
                               { 
                                              while((out=pop())!='(')
                                              prefix[i]=out;i++;continue;
                               }
                               if(infix[j]>='a' && infix[j]<='z')
                               {
                                             prefix[i]=infix[j];i++;continue;
                                             
                               }
                               if(store.top!=-1)
                               {
                               while( in(store.element[store.top]) > outer(infix[j]) )
                              {  prefix[i]=pop();i++;}
                               push(infix[j]);
                               }
                               else
                               push(infix[j]);
                           }
                           while(store.top!=-1)
                           {prefix[i]=pop();i++;}
                           
                           prefix[i]='\0';
                           printf("%s",prefix);
                           printf("\n");
                           
                              }
    
    return 0;
}            
                               
