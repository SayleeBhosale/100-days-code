#include <stdio.h>

int main() {
    FILE *filePointer; 
    char name[50];    
    int age;           

    filePointer = fopen("info.txt", "w");

    if (filePointer == NULL) {
        printf("Error: Could not open the file.\n");
        return 1; 
    }

    printf("Enter your name: ");
    scanf("%s", name); 

    printf("Enter your age: ");
    scanf("%d", &age); 

    fprintf(filePointer, "Name: %s\n", name);
    fprintf(filePointer, "Age: %d\n", age);

    fclose(filePointer);

    printf("Data successfully saved to info.txt.\n");

    return 0; 
}
