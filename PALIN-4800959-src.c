#include <stdio.h>
#include <string.h>
#define SIZE 1000000
int main()
{
    char a[SIZE];
    int n, i, j, t, temp;
    scanf("%d", &t);
    printf("\n");
    while(t>0)
    {
        scanf("%s", a);
        n = strlen(a);
        temp = 1;
        for (i=0, j=n-1; i<j; i++, j--)
            if (a[i]!=a[j])
            {
               if (a[j]<a[i]) temp=0;
               else temp=1;
               a[j] = a[i];
            }
        if (j < i) i--, j++;
        if (temp != 0)
        {
                 while (a[i]=='9' && i>=0) a[i]=a[j]='0', i--, j++;
                 if (i<0) a[0]=a[n]='1', a[n+1]='\0';
                 else a[i]++, a[j]=a[i];
        }
        if (t==1)
                printf("%s", a);
        else
                printf("%s\n\n", a);
        t--;
    }
    return 0;
}
