#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N 2
#define MAX_SIZE 101

int main()
{
  char *s[N];
  size_t l[N];

  for (int i = 0; i < N; i++)
  {
    s[i] = (char *) malloc(MAX_SIZE * sizeof(char));
    scanf("%100s", s[i]);
    l[i] = strlen(s[i]);
    for (int j = 0; j < l[i]; j++) s[i][j] = tolower(s[i][j]);
  }

  if (l[0] >= 1 && l[1] >= l[0] && l[1] <= 100)
  {
    int r;

    for (int i = 0; i < l[0]; i++)
    {
      if (s[0][i] < s[1][i]) r = -1;
      else if (s[1][i] < s[0][i]) r = 1;
      else r = 0;

      if (r != 0) break;
    }

    printf("%i\n", r);

    return 0;
  }

  return 1;
}