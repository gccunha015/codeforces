#include <stdio.h>
#include <stdlib.h>

#define TEN_BURLE 10

int main()
{
  int k, r, s = 0, b = 0;

  scanf("%i %i", &k, &r);

  do {
    b = ++s * k;
  } while ((b % TEN_BURLE != 0) &&
            ((b - r) % TEN_BURLE != 0));

  printf("%i\n", s);

  return 0;
}