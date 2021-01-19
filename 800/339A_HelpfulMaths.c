#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
  char *s = (char *) malloc(MAX_SIZE * sizeof(char));
  short l, cs[] = {0, 0, 0};
  
  fgets(s, MAX_SIZE, stdin);  
  l = strlen(s);

  for (short i = 0; i < l; i += 2)
  {
    char c = s[i];

    if (c == '1') cs[0]++;
    else if (c == '2') cs[1]++;
    else cs[2]++;
    s[i] = '\0';
  }

  for (short i = 0; i < 3; i++)
  {
    char cc[2] = {(i + 1 + '0'), '\0'};

    for (short j = 0; j < cs[i]; j++)
    {
      short nL = strlen(s);

      strcat(s, cc);
      nL++;
      if ((nL < l-1) && (nL % 2 != 0))
      {
        strcat(s, "+");
        nL++;
      }
    }
  }
  puts(s);
  
  free(s);

  return 0;
}