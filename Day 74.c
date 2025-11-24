#include <stdio.h>
#include <stdlib.h> 

int main() {
    FILE *sourceFile, *destFile;
    char sourceFileName[100], destFileName[100];
    int ch; 

    printf("Enter the source file name: ");
    scanf("%s", sourceFileName);

    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file '%s'.\n", sourceFileName);
        exit(1); 
    }

    printf("Enter the destination file name: ");
    scanf("%s", destFileName);

    destFile = fopen(destFileName, "w");
    if (destFile == NULL) {
        printf("Error: Could not create/open destination file '%s'.\n", destFileName);
        fclose(sourceFile); 
        exit(1); 
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully from '%s' to '%s'.\n", sourceFileName, destFileName);

    fclose(sourceFile);
    fclose(destFile);

    return 0; 
}
