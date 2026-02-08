#include <stdio.h>

int main() {
    int a = 5;
    int* aPointer = &a;
    int** doublePointer = &aPointer;

    printf("a via a pointer = %d\n", *aPointer);
    printf("a via a double pointer = %d\n", **doublePointer);

    return 0;
}