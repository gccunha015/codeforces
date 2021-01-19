#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, k;

  scanf("%i %i", &n, &k);

  if (k >= 1 && n >= k && n <= 50) {
    int *a = (int *) malloc(n * sizeof(int));
    int c;
      
    for (int i = 0; i < n; i++) {
      scanf("%i", &a[i]);
      if (a[i] > a[i-1] && i >= 1) return 1;
    }

    if (a[0] == 0) c = 0;
    else {
      c = k;
      for (int i = k; i < n; i++) {
        if (a[i] == a[k-1]) c++;
        else break;
      }
      for (int i = c-1; i > 0; i--) {
        if (a[i] == 0) c--;
        else break;
      }
    }
    free(a);

    printf("%i\n", c);

    return 0;
  }
  else return 1;
}