#include <stdio.h>
#include <stdlib.h> 

int main() {
    FILE *filePointer;
    char textToAppend[100]; 

    filePointer = fopen("my_file.txt", "a");

    if (filePointer == NULL) {
        printf("Error opening file!\n");
        exit(EXIT_FAILURE); 
    }

    printf("Enter a line of text to append: ");

    if (fgets(textToAppend, sizeof(textToAppend), stdin) == NULL) {
        printf("Error reading input.\n");
        fclose(filePointer);
        exit(EXIT_FAILURE);
    }

    fprintf(filePointer, "%s", textToAppend);

    fclose(filePointer);

    printf("Text appended successfully to my_file.txt\n");

    return 0; 
}
