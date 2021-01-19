#include <stdio.h>
#include <stdlib.h>

int main()
{
  int k, l, m, n, d, t = 0;

  scanf("%i", &k);
  scanf("%i", &l);
  scanf("%i", &m);
  scanf("%i", &n);
  scanf("%i", &d);

  for (int i = 1; i <= d; i++)
  {
    if (i % k == 0 ||
        i % l == 0 ||
        i % m == 0 ||
        i % n == 0)
      t++;
  }
  
  printf("%i\n", t);

  return 0;
}