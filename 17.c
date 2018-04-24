#include <stdio.h>

int fnstat()
{
    int i = 2;

    i += 1;

    return i ;
}

void main()
{
    printf("%d \n", fnstat());

    printf("%d \n", fnstat());
}