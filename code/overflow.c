#include <stdio.h>
#include <limits.h>

int main(void)
{
  int i = INT_MAX;
  printf("%d\n", i);
  printf("%d\n", i + 1);

  int j = UINT_MAX;
  printf("%u\n", j);
  printf("%u\n", j + 1);
}