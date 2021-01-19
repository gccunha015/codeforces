#include <stdio.h>
#include <stdlib.h>

void swap(char *, char *);

int main()
{
  int n, t;
  char *s;

  scanf("%i %i\n", &n, &t);
  ++n;
  s = (char *) malloc(n * sizeof(char));
  fgets(s, n, stdin);

  for (int i = 0; i < t; i++)
  {
    for (int j = 0; j < n-1; j++)
    {
      if (s[j] == 'B' && s[j+1] == 'G')
      {
        swap(&s[j], &s[j+1]);
        j++;
      }
    }
  }
  puts(s);
  free(s);

  return 0;
}

void swap(char *a, char *b)
{
  char aux = *a;
  *a = *b;
  *b = aux;
}