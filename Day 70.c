#include <stdio.h>
#include <string.h> 
#include <ctype.h>  

int main() {
    char sentence[1000]; 
    int i;

    printf("Enter a sentence: ");
  
    fgets(sentence, sizeof(sentence), stdin); 

    sentence[strcspn(sentence, "\n")] = 0;

    if (isalpha(sentence[0])) {
        sentence[0] = toupper(sentence[0]);
    }

    for (i = 1; sentence[i] != '\0'; i++) {
        
        if (isalpha(sentence[i])) {
            sentence[i] = tolower(sentence[i]);
        }

        if (sentence[i] == '.' && sentence[i+1] == ' ' && isalpha(sentence[i+2])) {
            sentence[i+2] = toupper(sentence[i+2]);
            i += 2; 
        }
    }

    printf("Sentence case: %s\n", sentence);

    return 0;
}