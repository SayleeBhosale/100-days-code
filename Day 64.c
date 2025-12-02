#include <stdio.h>
#include <string.h> 

int lengthOfLongestSubstring(char *s) {
    int n = strlen(s); 
    if (n == 0) {
        return 0; 
    }

    int maxLength = 0; 
    int currentLength = 0; 
    int charIndex[256]; 

    memset(charIndex, -1, sizeof(charIndex));

    int start = 0; 

    for (int end = 0; end < n; end++) {
        char currentChar = s[end]; 

        if (charIndex[currentChar] != -1 && charIndex[currentChar] >= start) {
            start = charIndex[currentChar] + 1; 
        }

        charIndex[currentChar] = end; 

        currentLength = end - start + 1; 
        if (currentLength > maxLength) {
            maxLength = currentLength; 
        }
    }
    return maxLength; 
}

int main() {
    char inputString[100]; 

    printf("Enter a string: ");
    scanf("%s", inputString); 

    int result = lengthOfLongestSubstring(inputString); 

    printf("Length of the longest substring without repeating characters: %d\n", result);

    return 0;
}