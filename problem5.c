#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(sizeof(int));
    *p = 5;

    printf("assigned int value = %d\n", *p);

    int *arr = malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++) {
        *(arr + i) = i;
        printf("arr[%d] = %d\n", i, *(arr + i));
    }
    
    free(p);
    free(arr);
    
    return 0;
}