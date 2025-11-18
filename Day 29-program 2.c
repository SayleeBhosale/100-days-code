#include <stdio.h>

int main() {
    int arr[] = {10, 5, 20, 15, 8, 25}; 
    int n = sizeof(arr) / sizeof(arr[0]); 

    if (n == 0) {
        printf("Array is empty.\n");
        return 1; 
    }

    int min_val = arr[0]; 
    int max_val = arr[0]; 

    for (int i = 1; i < n; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i]; 
        }
        if (arr[i] > max_val) {
            max_val = arr[i]; 
        }
    }

    printf("Minimum element: %d\n", min_val);
    printf("Maximum element: %d\n", max_val);

    return 0;
}