#include <stdio.h>

int fnstat()
{
    static int i = 2;

    // static 初始化后不会再初始

    i += 1;

    return i ;
}

void main()
{
    printf("%d \n", fnstat());

    printf("%d \n", fnstat());
}