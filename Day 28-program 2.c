#include <stdio.h>

int main() {
    int arr[5]; 
    int i;       

    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        printf("Element - %d: ", i);
        scanf("%d", &arr[i]); 
    }

    printf("\nArray elements are: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n");

    return 0;
}