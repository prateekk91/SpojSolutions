
#include<stdio.h>

 # include<string.h>

char str[600000];

long int numstr[100000];

 

void getstr(long int);

int check(long int);

 

int main()

{

char ch;

long int n;

scanf("%ld",&n);

while(n!=0)

{

ch=getchar();

getstr(n);

if(check(n))

puts("ambiguous");

else

puts("not ambiguous");

scanf("%ld",&n);

}

return 0;

}

 

void getstr(long int n)

{

long int i,j,num;

gets(str);

i=j=num=0;

while(str[j]!='\0')

{

if(str[j]!=' ')

num=num*10+(str[j]-48);

else

{

numstr[i++]=num;

num=0;

}

j++;

}

numstr[i]=num;

}

 

int check(long int count)

{

long int i,num;

i=0;

while(i<count)

{

num=numstr[i];

if(numstr[num-1]==i+1)

i++;

else

return 0;

}

return 1;

} 