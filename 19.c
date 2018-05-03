#include <stdio.h>

# define MAX 5

int array[MAX] = {2,7,6,4,8};

void sum()
{
  int i;
  int n = 0;

  for (i = 0; i < MAX; i++)
  {
    array[i] = array[i] + i + 1;

    printf("%d is %d\n", i, array[i]);
  }
}