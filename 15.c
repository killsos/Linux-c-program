#include <stdio.h>


void f()
{
    int a[10];
    int i ;
    for(i = 0;i < 10; i++)
    {
        a[i] = i;
    }
}

void main(void)
{
    f();
}