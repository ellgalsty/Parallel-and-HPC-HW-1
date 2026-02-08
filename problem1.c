#include <stdio.h>

int main() {
    int x = 5;
    int* xPointer = &x;

    printf("x = %d, pointer of x = %p \n", x, xPointer);

    *xPointer = 10;
    printf("updated x = %d, pointer of updated x = %p \n", x, xPointer);

    return 0;
}