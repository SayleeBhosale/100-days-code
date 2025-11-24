#include <stdio.h>
#include <stdlib.h> 

int main() {
    FILE *file;
    char path[100];
    char ch;
    int characters = 0;
    int words = 0;
    int lines = 0;
    int in_word = 0; 

    printf("Enter the path to the text file: ");
    scanf("%s", path);

    file = fopen(path, "r");

    if (file == NULL) {
        printf("Error: Could not open file %s\n", path);
        exit(EXIT_FAILURE);
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++; 

        if (ch == '\n') {
            lines++; 
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            in_word = 0; 
        } else if (in_word == 0) {
            words++; 
            in_word = 1; 
        }
    }

    if (characters > 0) {
        
        if (ch != '\n' && lines == 0) { 
            lines = 1;
        } else if (ch != '\n' && lines > 0 && fseek(file, -1, SEEK_END) == 0 && fgetc(file) != '\n') {
            
            lines++;
        }
        
        if (in_word == 1) {
            
        }
    }

    fclose(file); 

    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);

    return 0;
}
