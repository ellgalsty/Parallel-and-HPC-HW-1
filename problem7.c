#include <stdio.h>
#include <stdlib.h>

int main() {
    char* arrOfStr[] = {"hello", "good", "bye"};

    for (int i = 0; i < sizeof(arrOfStr)/sizeof(arrOfStr[0]); i++) {
        printf("word %d = %s\n", i, *(arrOfStr + i));
    }

    arrOfStr[0] = "no";
    for (int i = 0; i < sizeof(arrOfStr)/sizeof(arrOfStr[0]); i++) {
        printf("word %d = %s\n", i, *(arrOfStr + i));
    }
    return 0;
    
}