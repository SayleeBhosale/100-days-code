#include <stdio.h>
#include <string.h> 

void reverseString(char *str) {
    int length = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char myString[] = "Hello, World!"; 
    printf("Original string: %s\n", myString);

    reverseString(myString); 

    printf("Reversed string: %s\n", myString);

    return 0;
}