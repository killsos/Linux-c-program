#include <stdio.h>

int  main(void)
{
    int a = 200;
    
    int *p = NULL; // 一个指针
    
    p = &a;

    if (p != NULL && *p == 200)
    {
        printf("hello\n");
    } else {
        printf("hi\n");
    }
    return 0;
}