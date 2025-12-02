#include <stdio.h> 
#include <stdlib.h> 

int compareIntegers(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n; 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Enter %d integers for the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k; 
    printf("Enter the value of k (to find the kth smallest element): ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid value of k. k should be between 1 and %d.\n", n);
        return 1; 
    }

    qsort(arr, n, sizeof(int), compareIntegers);

    printf("The %dth smallest element is: %d\n", k, arr[k - 1]);

    return 0; 
}