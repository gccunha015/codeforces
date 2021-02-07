#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n, *ids, p = 0;

  scanf("%i", &n);
  ids = (int *) malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    scanf("%i", &ids[i]);
  }

  // O(n)
  for (int i = 0; i < (n - 1); i++) {
    int c = 0;

    if (ids[i] == 0) continue;

    // O(n)
    for (int j = (i + 1); j < n; j++) {
      if (ids[i] == ids[j]) c++;
      if (c > 1) break;
    }

    if (c == 1) p++;
    else if (c > 1) {
      p = -1;
      break;
    }
  }

  printf("%i\n", p);

  free(ids);

  return 0;
} // O(n^2)