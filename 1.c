# include <stdio.h>

int main (void) {
    printf("The begin \n");
    goto end;
    printf("hello world");
end:
    printf("the end\n");
    return 0;
}