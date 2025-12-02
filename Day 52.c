#include <stdio.h>

int findCeilIndex(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int ceilIndex = -1; 

    while (low <= high) {
        int mid = low + (high - low) / 2; 

        if (arr[mid] == x) {
            
            ceilIndex = mid;
            high = mid - 1;
        } else if (arr[mid] < x) {
            
            low = mid + 1;
        } else { 
           
            ceilIndex = mid;
            high = mid - 1;
        }
    }
    return ceilIndex;
}

int main() {
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10; 

    int index = findCeilIndex(arr, n, x);

    if (index != -1) {
        printf("The ceil of %d is at index: %d (value: %d)\n", x, index, arr[index]);
    } else {
        printf("The ceil of %d does not exist in the array.\n", x);
    }

    // Test cases
    int x2 = 5;
    index = findCeilIndex(arr, n, x2);
    if (index != -1) {
        printf("The ceil of %d is at index: %d (value: %d)\n", x2, index, arr[index]);
    } else {
        printf("The ceil of %d does not exist in the array.\n", x2);
    }

    int x3 = 20;
    index = findCeilIndex(arr, n, x3);
    if (index != -1) {
        printf("The ceil of %d is at index: %d (value: %d)\n", x3, index, arr[index]);
    } else {
        printf("The ceil of %d does not exist in the array.\n", x3);
    }

    return 0;
}