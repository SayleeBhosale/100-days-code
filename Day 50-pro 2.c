#include <stdio.h>
#include <string.h>

void printAllSubstrings(char *str) {
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        
        for (int j = i; j < length; j++) {
            
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n"); 
        }
    }
}

int main() {
    char myString[] = "abc";
    printf("Substrings of \"%s\":\n", myString);
    printAllSubstrings(myString);
    return 0;
}