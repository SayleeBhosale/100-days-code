#include <stdio.h>

int main() {
    char myString[] = "Hello"; 

    for (int i = 0; myString[i] != '\0'; i++) {
        printf("%c\n", myString[i]);
    }

    return 0;
}