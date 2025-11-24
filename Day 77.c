#include <stdio.h> 
#include <ctype.h> 

int main() {
    FILE *inputFile;  
    FILE *outputFile; 
    char ch;         

    inputFile = fopen("input.txt", "r");

    if (inputFile == NULL) {
        printf("Error: Could not open input.txt for reading.\n");
        return 1; 
    }

    outputFile = fopen("output.txt", "w");

    if (outputFile == NULL) {
        printf("Error: Could not open output.txt for writing.\n");
        fclose(inputFile); 
        return 1;         
    }

    while ((ch = fgetc(inputFile)) != EOF) {
       
        ch = toupper(ch);
        
        fputc(ch, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Successfully converted lowercase to uppercase and saved to output.txt.\n");

    return 0;
}