#include<cstdio>
using namespace std;
int arr[1005][1005];
    
int main()
{
    int i,j;
    for(i=0;i<1002;i++)
    {
        for(j=0;j<=i;j++)
        {
           if(j){
           arr[i][j]=(arr[i][j-1]+arr[i-1][j])%1000000;
           }
           else
           arr[i][j]=1;
        }
    }
    int t;
    scanf("%d",&t);
    while(t)
    {
        printf("%d\n",arr[t][t]);
        scanf("%d",&t);
    }
    return 0;
}