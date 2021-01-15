#include <stdio.h>

#define BIGGER_STEP 5

unsigned int countSteps(unsigned int);

int main()
{
  unsigned int x;

  scanf("%u", &x);
  printf("%u\n", countSteps(x));

  return 0;
}

/*
  How it works:
    steps[4] = x / 5;
    steps[3] = (x - steps[4] * 5) / 4;
    steps[2] = (x - steps[4] * 5 - steps[3] * 4) / 3;
    steps[1] = (x - steps[4] * 5 - steps[3] * 4 - steps[2] * 3) / 2;
    steps[0] = (x - steps[4] * 5 - steps[3] * 4 - steps[2] * 3 - steps[1] * 2) / 1;

    result = steps[0] + steps[1] + steps[2] + steps[3] + steps[4];
*/
unsigned int countSteps(unsigned int x)
{
  unsigned int s, steps[5], r = 0;

  for (short i = BIGGER_STEP; i > 0; i--) {
    s = x;
    if (i != BIGGER_STEP)
    {
      for (short j = BIGGER_STEP; j > i; j--) s -= steps[j-1] * j;
    }
    steps[i-1] = s / i;
  }
  for (short i = 0; i < BIGGER_STEP; i++) r += steps[i];

  return r;
}