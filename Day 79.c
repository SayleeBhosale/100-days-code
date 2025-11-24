#include <stdio.h> 
#include <stdlib.h> 

int main() {
    FILE *file_ptr; 
    int num;        
    int sum = 0;    
    int count = 0;  
    double average; 

    file_ptr = fopen("numbers.txt", "r");

    if (file_ptr == NULL) {
        printf("Error: Could not open the file numbers.txt\n");
        exit(1); 
    }

    while (fscanf(file_ptr, "%d", &num) == 1) {
        sum += num;  
        count++;     
    }

    fclose(file_ptr);

    if (count > 0) {
        average = (double)sum / count; 
        printf("Sum of the integers: %d\n", sum);
        printf("Average of the integers: %.2f\n", average); 
    } else {
        printf("No integers found in the file.\n");
    }

    return 0; 
}