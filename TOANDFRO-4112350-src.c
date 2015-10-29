#include<stdio.h>
#include<string.h>
main()
{
    int num,col,m,i,j,k,l;
    char str[5000],str1[5000];
    while(1)
    {
        m=0;
        scanf("%d",&col);
        if(col!=0)
        {
            scanf("%s",str);
            num=(strlen(str))/col;
            for(i=0;i<col;i++)
            {
                str1[m++]=str[i];
                l=i;k=1;
                for(j=0;j<num-1;j++)
                {
                    if(k==1)
                    {
                        l=l+(col*2-1)-2*i;
                        str1[m++]=str[l];
                        l=l+(1+2*i);
                    }
                    else
                    {
                        str1[m++]=str[l];
                    }
                    k=k*-1;
                }
            }
            str1[m]='\0';
            printf("%s",str1);
            printf("\n");
        }
        else
            break;
    }
    return 0;
}

