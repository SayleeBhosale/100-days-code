#include <stdio.h>
#include <string.h>

int isVowel(char c) {
    c = tolower(c); 
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    str[strcspn(str, "\n")] = '\0'; 

    for (i = 0; str[i] != '\0'; i++) {
        if (isVowel(str[i])) {
            
            for (j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1];
            }
            i--; 
        }
    }

    printf("String after removing vowels: %s\n", str);

    return 0;
}