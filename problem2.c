#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* pointer = &arr;

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        printf("arr el %d = %d\n", i, *(pointer + i));
    }
    
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        *(pointer + i) = 10 + i;
    }

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        printf("updated arr el %d = %d\n", i, *(pointer + i));
    }
    
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        printf("updated arr el %d = %d\n", i, arr[i]);
    }

    return 0;
}