#include <stdio.h>
#include <limits.h> 

int maxSubarraySum(int arr[], int n, int k) {
    
    if (n < k || k <= 0) {
        printf("Invalid input: k should be positive and less than or equal to n.\n");
        return -1; 
    }

    int current_window_sum = 0;
    int max_sum = INT_MIN; 

    for (int i = 0; i < k; i++) {
        current_window_sum += arr[i];
    }

    max_sum = current_window_sum; 

    for (int i = k; i < n; i++) {
        
        current_window_sum = current_window_sum - arr[i - k] + arr[i];

        if (current_window_sum > max_sum) {
            max_sum = current_window_sum;
        }
    }

    return max_sum;
}

int main() {
    int arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int k = 4;

    int result = maxSubarraySum(arr, n, k);

    if (result != -1) { 
        printf("Maximum sum of a subarray of size %d is: %d\n", k, result);
    }

    return 0;
}