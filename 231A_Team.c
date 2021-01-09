#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;

  scanf("%i", &n);

  if (n >= 1 || n <= 1000) {
    int p, c;
    int **a = (int **) malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
      a[i] = (int *) malloc(3 * sizeof(int));
      scanf("%i %i %i", &a[i][0], &a[i][1], &a[i][2]);
    }

    p = 0;
    for (int i = 0; i < n; i++) {
      c = 0;
      for (int j = 0; j < 3; j++) {
        if (a[i][j] == 1) c++;
        if (j == 1 && 
            (c == 0 || c == 2)) break;
      }
      if (c == 2) p++;
      free(a[i]);
    }

    printf("%i\n", p);
  }

  return 0;
}