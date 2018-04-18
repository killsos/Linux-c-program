#include <stdio.h>

void main(void)
{
    char score;
    scanf("%c", &score);

    switch(score)
    {
        case 'A':
            printf("excellent\n");
            break;
        case 'B':
            printf("good\n");
            break;
        default:
            printf("fail\n");
            break;
    }
}