#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

char* findLongestWord(const char* sentence) {
    if (sentence == NULL || *sentence == '\0') {
        return NULL; 
    }

    int max_len = 0;
    int current_len = 0;
    const char* longest_word_start = NULL;
    const char* current_word_start = sentence;

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\t' || sentence[i] == '\n' || sentence[i] == '\r') {
            
            if (current_len > max_len) {
                max_len = current_len;
                longest_word_start = current_word_start;
            }
            
            current_len = 0;
            current_word_start = &sentence[i + 1];
        } else {
            
            current_len++;
        }
    }

    if (current_len > max_len) {
        max_len = current_len;
        longest_word_start = current_word_start;
    }

    if (longest_word_start == NULL) {
        return NULL; 
    }

    char* longest_word = (char*)malloc((max_len + 1) * sizeof(char));
    if (longest_word == NULL) {
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }
    strncpy(longest_word, longest_word_start, max_len);
    longest_word[max_len] = '\0'; 

    return longest_word;
}

int main() {
    char sentence1[] = "This is a sample sentence to find the longest word";
    char* longest1 = findLongestWord(sentence1);
    if (longest1) {
        printf("Longest word in \"%s\": \"%s\"\n", sentence1, longest1);
        free(longest1); 
    }

    char sentence2[] = "Short";
    char* longest2 = findLongestWord(sentence2);
    if (longest2) {
        printf("Longest word in \"%s\": \"%s\"\n", sentence2, longest2);
        free(longest2);
    }

    char sentence3[] = "   Multiple   spaces   between  words   ";
    char* longest3 = findLongestWord(sentence3);
    if (longest3) {
        printf("Longest word in \"%s\": \"%s\"\n", sentence3, longest3);
        free(longest3);
    }

    char sentence4[] = "";
    char* longest4 = findLongestWord(sentence4);
    if (longest4) {
        printf("Longest word in \"%s\": \"%s\"\n", sentence4, longest4);
        free(longest4);
    } else {
        printf("Longest word in \"%s\": (No words found or empty sentence)\n", sentence4);
    }

    return 0;
}