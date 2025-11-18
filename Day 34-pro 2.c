#include <stdio.h>

void deleteElement(int arr[], int *size, int position) {
    
    if (position < 0 || position >= *size) {
        printf("Invalid position for deletion.\n");
        return;
    }

    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--;
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5; 

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int positionToDelete = 2; 
    deleteElement(arr, &size, positionToDelete);

    printf("Array after deleting element at position %d: ", positionToDelete);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}