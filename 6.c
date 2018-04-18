#include <stdio.h>

void main()
{
    int n;
    int add = 0;
    int index;
    
    scanf("%d", &n);

    for(index = 1;index <= n;index++)
    {
        add += index;
    }

    printf("the result is %d \n", add);
}