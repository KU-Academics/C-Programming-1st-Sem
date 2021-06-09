#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i;
  int multi;
  for (i = 1; i <= 10; ++i)
  {
    multi = (5 * i);
    printf("%d*%d=%d\n", 5, i, multi);
  }
  return 0;
}