#include <stdio.h>

void main () {
    int a = 12;

    printf("a divided by 4 : %d \n", a>>2);

    printf("a multiplied by 5 : %d \n", (a<<2) + a);
}