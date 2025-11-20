#include <stdio.h>

int main() {
    char str[] = "Hello World"; 
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        count++; 
        i++;   
    }

    printf("The number of characters in the string is: %d\n", count);

    return 0;
}