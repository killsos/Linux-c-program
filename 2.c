#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d%d", &a, &b);

    if (a > b) {
        printf("a is higher then b \n");
    } else {
        printf("a is lower then b \n");
    }
    return 0;
}