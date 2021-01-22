#include <stdio.h>
#include <stdlib.h>

#define FIXED_TIME 5
#define TIME_LIMIT 240

int main()
{
  int n, k, t = TIME_LIMIT, i;

  scanf("%i %i", &n, &k);

  for (i = 1; i <= n; i++)
  {
    int ct = FIXED_TIME * i;
    if ((t - ct) >= k) t -= ct;
    else 
    {
      i--;
      break;
    }
  }
  if (i > n) i--;
  printf("%i\n", i);

  return 0;
}