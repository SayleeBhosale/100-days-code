#include <stdio.h>
#include <string.h>

void toggleCase(char *str) {
    int i = 0;
    while (str[i] != '\0') { 
        if (str[i] >= 'a' && str[i] <= 'z') { 
            str[i] = str[i] - 32; 
        } else if (str[i] >= 'A' && str[i] <= 'Z') { 
            str[i] = str[i] + 32; 
        }
        i++; 
    }
}

int main() {
    char myString[100]; 

    printf("Enter a string: ");
    fgets(myString, sizeof(myString), stdin); 

    myString[strcspn(myString, "\n")] = '\0';

    printf("Original string: %s\n", myString);

    toggleCase(myString); 

    printf("Toggled string: %s\n", myString);

    return 0;
}