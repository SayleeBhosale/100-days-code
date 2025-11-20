#include <stdio.h>
#include <string.h>

void reverseSubstring(char* str, int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[] = "Hello World ";
    int len = strlen(sentence);
    int wordStart = 0;

    for (int i = 0; i <= len; i++) {
       
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            reverseSubstring(sentence, wordStart, i - 1);
            wordStart = i + 1; 
        }
    }

    printf("Original sentence: %s\n", "Hello World ");
    printf("Sentence with words reversed: %s\n", sentence);

    return 0;
}