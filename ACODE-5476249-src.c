#include<stdio.h>
typedef long long int ll;
char s[2][5000],t=1;
ll d[5000];
 
ll fun(int a){
 
if(!s[0][a])return 1;                           //end of string, one more possible combination
if(s[1][a]==t)return d[a];                      //value exists in the array d[]
if(s[0][a]=='0')return 0; 
 
if (  (s[0][a]=='1' && s[0][a+1]<='9' && s[0][a+1]>='1') 
   || (s[0][a]=='2' && s[0][a+1]<='6' && s[0][a+1]>='1') ){             //branch
 
d[a] = fun(a+1) + fun(a+2);
s[1][a]=t;
return d[a];
}
 
else if((s[0][a]=='1' || s[0][a]=='2') && s[0][a+1]=='0') {             //no branching
d[a]=fun(a+2);
s[1][a]=t;
return d[a];    
}
 
else {
d[a]=fun(a+1);
s[1][a]=t;
return d[a];    
}
 
 
}
 
int main(){
while(t++){
        if(t==250){int i;t=1;for(i=0;i<=5000;i++)s[1][i]=0;}
        gets(s[0]);
        if(strcmp(s[0],"0")==0) return 0;
        printf( "%lld\n",fun(0) );
}
return 0;
}
