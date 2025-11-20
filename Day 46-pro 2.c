#include <stdio.h>
#include <string.h>

char findFirstRepeatingChar(const char *str) {

    int char_counts[26] = {0}; 

    for (int i = 0; i < strlen(str); i++) {
        char current_char = str[i];

        if (current_char >= 'a' && current_char <= 'z') {
            
            int index = current_char - 'a';

            if (char_counts[index] > 0) {
                return current_char; 
            } else {
                char_counts[index]++; 
            }
        }
    }

    return '\0'; 
}

int main() {
    char str1[] = "programming";
    char str2[] = "abcdefg";
    char str3[] = "hello world";
    char str4[] = "apple";

    char result1 = findFirstRepeatingChar(str1);
    if (result1 != '\0') {
        printf("First repeating char in \"%s\": %c\n", str1, result1);
    } else {
        printf("No repeating lowercase char found in \"%s\"\n", str1);
    }

    char result2 = findFirstRepeatingChar(str2);
    if (result2 != '\0') {
        printf("First repeating char in \"%s\": %c\n", str2, result2);
    } else {
        printf("No repeating lowercase char found in \"%s\"\n", str2);
    }

    char result3 = findFirstRepeatingChar(str3);
    if (result3 != '\0') {
        printf("First repeating char in \"%s\": %c\n", str3, result3);
    } else {
        printf("No repeating lowercase char found in \"%s\"\n", str3);
    }
    
    char result4 = findFirstRepeatingChar(str4);
    if (result4 != '\0') {
        printf("First repeating char in \"%s\": %c\n", str4, result4);
    } else {
        printf("No repeating lowercase char found in \"%s\"\n", str4);
    }

    return 0;
}