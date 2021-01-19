#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
  int n;
  char **words;
  size_t wL;

  scanf("%i", &n);

  if (n>=1 && n<=100) {
    words = (char **) malloc(n * sizeof(char *));
    for (int i=0; i<n; i++) {
      words[i] = (char *) malloc(255 * sizeof(char));
      scanf("%s", words[i]);
    }

    for (int i=0; i<n; i++) {
      wL = strlen(words[i]);

      if (wL>10) printf("%c%li%c\n", words[i][0], wL-2, words[i][wL-1]);
      else puts(words[i]);

      free(words[i]);
    }
  }

  return 0;
}