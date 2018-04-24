#include <stdio.h>
int i ;

void f()
{
    int a[10];

    for(i = 0;i < 10; i++)
    {
        a[i] = i;
    }
}

void main(void)
{
    f();
}