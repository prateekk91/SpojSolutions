# include<stdio.h>
int main()
{
int t;
unsigned long long int i,mechg,god,godarmy,mecharmy,strength;
scanf("%d",&t);
while(t--)
{
god=0;
mechg=0;
scanf("%llu%llu",&godarmy,&mecharmy);
long long int max1=0,max2=0;

for(i=0;i<godarmy;i++)
{scanf("%llu",&strength);
if(max1==0)
max1=strength;
else
if(strength>max1)
max1=strength;
}
long long int j=0,k=0;
for(i=0;i<mecharmy;i++)
{
scanf("%llu",&strength);
if(max2==0)
max2=strength;
else
if(strength>max2)
max2=strength;
}


if(max1>=max2)
printf("Godzilla\n");
else
printf("MechaGodzilla\n");
}


return 0;
}