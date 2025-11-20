#include <stdio.h>
#include <string.h> 

void replaceSpacesWithHyphens(char *str) {
    int i;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
}

int main() {
    char myString[] = "My name is Saylee";

    printf("Original string: %s\n", myString);

    replaceSpacesWithHyphens(myString);

    printf("Modified string: %s\n", myString);

    return 0;
}