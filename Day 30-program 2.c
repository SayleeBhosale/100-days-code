#include <stdio.h>

int main() {
    int arr[] = {10, -5, 0, 45, -20, 0, 7}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positive_count++; 
        } else if (arr[i] < 0) {
            negative_count++; 
        } else {
            zero_count++; 
        }
    }

    printf("Number of positive elements: %d\n", positive_count);
    printf("Number of negative elements: %d\n", negative_count);
    printf("Number of zero elements: %d\n", zero_count);

    return 0;
}