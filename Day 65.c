#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 

int areAnagrams(char *s, char *t) {
    int count[26] = {0}; 

    if (strlen(s) != strlen(t)) {
        return 0; 
    }

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    char s[100]; 
    char t[100];

    printf("Enter the first string (s): ");
    scanf("%s", s); 

    printf("Enter the second string (t): ");
    scanf("%s", t); 

    if (areAnagrams(s, t)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}