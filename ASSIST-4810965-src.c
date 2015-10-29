#include <stdio.h>
#include <stdlib.h>

int sieve (int *x, int *y, int b, int n, int nx)
{
  int i;
  int ny = 1;


  for (i=1; i<nx; i++) {
    if (i != b && i%n == b%n) continue;
    y[ny++] = x[i];
  }
  for (i=1; i<ny; i++) {
    x[i] = y[i];
  }

  return ny;
}

int main (int ac, char **av)
{
  int i;
  int N = 35000;
  int *x;
  int *y;
  int nx;

  if (ac > 1) N = atoi(av[1]);

  x = (int *) malloc (N * sizeof (int));
  y = (int *) malloc (N * sizeof (int));

  for (i=1; i<N; i++) {
    x[i] = i;
  }
  nx = N;

  for (i=2; i < nx && i + x[i]<nx; i++) {
    nx = sieve (x, y, i, x[i], nx);
  }

  while(1)
	{
	scanf("%d",&i);
	if(i==0)
	break;
	printf ("%d\n", x[i+1]);
	}
  return 0;
}

