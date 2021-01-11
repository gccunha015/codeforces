#include <stdio.h>
#include <stdlib.h>

int main()
{
  int m, n;

  scanf("%i %i", &m, &n);

  if (m >= 1 && n >= m && n <= 16)
  {
    int size, max;

    size = n * m;
    max = size / 2;

    printf("%i\n", max);

    return 0;
  }

  return 1;
}