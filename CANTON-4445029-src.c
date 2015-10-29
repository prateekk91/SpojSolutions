#include <stdio.h>
#include <math.h>

/* Prints the n-th fraction in Cantor's enumeration. */
void print_fraction(int n)
{
    int d = (-1 + sqrt(1 + 8 * n)) / 2;  /* Diagonals to skip */
    int e = n - d * (d + 1) / 2;         /* Extra steps after the skip. */
    int v1 = e <= 1 ? d + e : d + 2 - e;
    int v2 = e <= 1 ?     1 : e;

    printf("TERM %d IS %d/%d\n",n, d % 2 == 0 ? v1 : v2,
                        d % 2 == 0 ? v2 : v1);
}

int main()
{
    int i,t;
    scanf("%d",&t);
	while(t--){
    		scanf("%d",&i);
		{
     	  	 print_fraction(i);
    		}
	}
return 0;
}
