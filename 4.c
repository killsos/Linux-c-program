#include <stdio.h>

void main(void)
{
    int n;
    int mul = 1;

    int i;
    int t;

    scanf("%d", &n);

    i = 1;

    while (i <= n)
    {
        mul *= i;
        i++;
    }

    printf("the result is %d \n", mul);
    
}