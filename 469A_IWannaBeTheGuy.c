#include <stdio.h>
#include <stdlib.h>

#define PLAYERS 2

int main()
{
  int n, p, *l[PLAYERS], *a;

  scanf("%i", &n);
  a = (int *) calloc(n, sizeof(int));
  for (int i = 0; i < PLAYERS; i++) 
  {
    l[i] = (int *) calloc(n, sizeof(int));
    scanf("%i", &p);
    for (int j = 0; j < p; j++)
    {
      int x;
      scanf("%i", &x);
      l[i][x-1] = 1;
    }
  }

  p = 0;
  for (int i = 0; i < PLAYERS; i++)
  {
    for (int j = 0; j < n; j++) 
    {
      if (l[i][j] == 1) a[j] = 1;
      if (i == 1 && a[j] == 1) p += 1;
    }
    free(l[i]);
  }
  free(a);
  
  if (p >= n) printf("I become the guy.\n");
  else printf("Oh, my keyboard!\n");


  return 0;
}