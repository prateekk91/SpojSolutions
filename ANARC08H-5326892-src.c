#include <stdio.h>


int find(int n, int k)

{

     int i, f;

        n--;

    for(f= 0, i = 1; i <= n; i++)

	(f= (f+ k) % (i+1));

       
     return f+1;
}


int main()

{

        int n,f,k,i;

        while( 1 )

        {

		f=0;

                scanf("%d%d", &n,&k);

                if( !n || !k )
		 break;

		f=find(n,k);

                printf("%d %d %d\n",n,k,f);

        }

        return 0;

}