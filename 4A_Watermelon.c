#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int w = 0;

  if (argc==1) scanf("%i", &w);
  else w = atoi(argv[1]);

  if (w>=1 && w<=100) {
    if (w/2>=2 && w%2==0) puts("YES");
    else puts("NO");
  }

  return 0;
}