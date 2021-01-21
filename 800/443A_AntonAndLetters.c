#include <stdio.h>
#include <stdlib.h>

#define LINE_LENGTH 1001
#define ALPHABET_LENGTH 26
#define A_ASCII_CODE 97
#define Z_ASCII_CODE 122

int main()
{
  char *l = (char *) malloc(LINE_LENGTH * sizeof(char));
  int d = 0, *a = (int *) calloc(ALPHABET_LENGTH, sizeof(int));

  fgets(l, LINE_LENGTH, stdin);

  if (l == NULL || a == NULL) return 1;

  for (int i = 0; i < LINE_LENGTH; i++)
  {
    char c = l[i];
    if (c == '\0') break;
    if (c >= A_ASCII_CODE && c <= Z_ASCII_CODE)
    {
      a[c - A_ASCII_CODE] = 1;
    }
  }

  for (int i = 0; i < ALPHABET_LENGTH; i++)
  {
    d += a[i];
  }
  printf("%i\n", d);

  free(l);  
  free(a);

  return 0;
}