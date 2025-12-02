#include <stdio.h> 
#include <stdlib.h> 

int main() {
    FILE *filePointer;
    char buffer[256];  

    filePointer = fopen("info.txt", "r");

    if (filePointer == NULL) {
        printf("Error: Could not open the file 'info.txt'. Please ensure it exists.\n");
        exit(1); 
    }

    printf("Contents of 'info.txt':\n");

    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer); 
    }

    fclose(filePointer);

    return 0;
}
