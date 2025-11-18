#include <stdio.h>
#include <string.h> 

#define MAX_BITS 32 

int main() {
    char binaryNum[MAX_BITS + 1]; 
    char onesComplement[MAX_BITS + 1]; 
    int i, len;
    int error = 0; 

    printf("Enter a binary number (up to %d bits): ", MAX_BITS);
    scanf("%s", binaryNum);

    len = strlen(binaryNum);

    for (i = 0; i < len; i++) {
        if (binaryNum[i] == '0') {
            onesComplement[i] = '1';
        } else if (binaryNum[i] == '1') {
            onesComplement[i] = '0';
        } else {
            printf("Error: Invalid character '%c' found in binary number.\n", binaryNum[i]);
            error = 1;
            break; 
        }
    }

    onesComplement[len] = '\0';

    if (error == 0) {
        printf("Original binary number: %s\n", binaryNum);
        printf("1's complement: %s\n", onesComplement);
    }

    return 0;
}