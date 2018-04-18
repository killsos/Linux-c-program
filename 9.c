#include <stdio.h>
int swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;

    return *a + *b;
}
void main(void)
{
    int n = 1;
    int m = 2;
    int result = swap(&n, &m);

    printf("the result is %d \n", result);
}

