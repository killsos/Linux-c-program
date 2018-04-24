#include <stdio.h>

int func(int a)
{
    return a + 1;
}

int main(void)
{
    int res;

    res = 3 * func(1);

    printf("the result : %d \n", res);

    return 0;
}