#include <stdio.h>

int main() {
    int size, i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size]; 
    int even_count = 0;
    int odd_count = 0;

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) { 
            even_count++;
        } else { 
            odd_count++;
        }
    }

    printf("\nNumber of even elements: %d\n", even_count);
    printf("Number of odd elements: %d\n", odd_count);

    return 0;
}