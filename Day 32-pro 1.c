#include <stdio.h>
#include <string.h> 

int main() {
    int arr1[] = {1, 2, 3};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {4, 5, 6, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergedSize = size1 + size2;
    int mergedArr[mergedSize];

    memcpy(mergedArr, arr1, size1 * sizeof(int));

    memcpy(mergedArr + size1, arr2, size2 * sizeof(int));

    printf("Merged Array: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}