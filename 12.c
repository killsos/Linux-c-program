#include <stdio.h>

int func(int a)
{
    return a + 1;
}

int main(void)
{
    int res;

    res = func(1) + func(1) + func(1);

    printf("the result : %d \n", res);

    return 0;
}