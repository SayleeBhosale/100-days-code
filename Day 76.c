#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int main() {
    char filename[100]; 
    FILE *filePointer; 

    printf("Enter the filename: ");
    scanf("%s", filename); 

    filePointer = fopen(filename, "r");

    if (filePointer == NULL) {
        printf("Error: Could not open file '%s'. It might not exist or there was an access issue.\n", filename);
    } else {
        
        printf("Content of '%s':\n", filename);
        char character;
        while ((character = fgetc(filePointer)) != EOF) { 
            printf("%c", character); 
        }
        printf("\n"); 

        fclose(filePointer);
    }

    return 0; 
}