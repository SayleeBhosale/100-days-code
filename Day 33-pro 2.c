#include <stdio.h>

void insertSorted(int arr[], int *size, int element) {
    int i, j;

    for (i = 0; i < *size; i++) {
        if (arr[i] > element) {
            break;
        }
    }

    for (j = *size - 1; j >= i; j--) {
        arr[j + 1] = arr[j];
    }

    arr[i] = element;
    (*size)++; 
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50}; 
    int size = 5; 
    int elementToInsert = 35; 

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertSorted(arr, &size, elementToInsert);

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}