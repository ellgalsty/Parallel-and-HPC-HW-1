#include <stdio.h>
#include <stdlib.h>

int str_length (char* str) {
    int i = 0;
    while (*str != '\0') {
        str++;
        i++;
    }

    return i;
}

int main() {
    char* someText = "let's code";

    char* p = someText;
    while (*p != '\0') {
        printf("char = %c\n", *p);
        p++;
    }
    
    char userInput[100];

    printf("Print some text hehe:");
    fgets(userInput, sizeof(userInput), stdin);

    printf("size of user input = %d\n", str_length(userInput));

    return 0;
}