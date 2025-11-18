#include <stdio.h>

void insertElement(int arr[], int *currentSize, int capacity, int element, int position) {
    
    if (*currentSize >= capacity) {
        printf("Error: Array is full. Cannot insert more elements.\n");
        return;
    }

    if (position < 0 || position > *currentSize) {
        printf("Error: Invalid position for insertion.\n");
        return;
    }

    for (int i = *currentSize; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;

    (*currentSize)++;
}

int main() {
    int capacity = 10; 
    int arr[capacity];
    int currentSize = 0;

    insertElement(arr, &currentSize, capacity, 10, 0);
    insertElement(arr, &currentSize, capacity, 20, 1);
    insertElement(arr, &currentSize, capacity, 30, 2);
    insertElement(arr, &currentSize, capacity, 40, 3);

    printf("Array before insertion:\n");
    for (int i = 0; i < currentSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int elementToInsert = 25;
    int insertPosition = 2; 

    insertElement(arr, &currentSize, capacity, elementToInsert, insertPosition);

    printf("Array after insertion of %d at position %d:\n", elementToInsert, insertPosition);
    for (int i = 0; i < currentSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}