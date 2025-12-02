#include <stdio.h> 

void printKMax(int arr[], int n, int k) {
    int i, j; 
    int max_val; 

    for (i = 0; i <= n - k; i++) {
       
        max_val = arr[i];

        for (j = 1; j < k; j++) {
            
            if (arr[i + j] > max_val) {
                max_val = arr[i + j];
            }
        }
        
        printf("%d ", max_val);
    }
    printf("\n"); 
}

int main() {
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int k = 3; 

    printf("Maximum elements in each window of size %d:\n", k);
    printKMax(arr, n, k); 

    return 0;
}