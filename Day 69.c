#include <stdio.h>

int main() {
    int n; 
    printf("Enter the size of the array (n, where elements are 1 to n-1 and one is repeated): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int xor_sum = 0;

    for (int i = 0; i < n; i++) {
        xor_sum ^= arr[i];
    }

    for (int i = 1; i < n; i++) {
        xor_sum ^= i;
    }

    printf("The repeated element is: %d\n", xor_sum);

    return 0;
}