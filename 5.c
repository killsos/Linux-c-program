#include <stdio.h>

void main(void)
{
    int n;
    int mul = 1;
    int i;
    
    scanf("%d", &n);

    i = 1;

    do
    {
        mul *= i;
        i++;
    } while(i <= n);

    printf("the result is %d \n", mul);
}