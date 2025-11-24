#include <stdio.h>
#include <limits.h> 

int maxSubarraySum(int arr[], int n) {
    int max_so_far = INT_MIN;
    int current_max = 0;     

    int all_negative = 1;
    int largest_negative = INT_MIN;

    for (int i = 0; i < n; i++) {
       
        if (arr[i] > largest_negative) {
            largest_negative = arr[i];
        }

        if (arr[i] >= 0) {
            all_negative = 0;
        }

        current_max = current_max + arr[i];

        if (current_max < 0) {
            current_max = 0;
        }

        if (current_max > max_so_far) {
            max_so_far = current_max;
        }
    }

    if (all_negative) {
        return largest_negative;
    } else {
        return max_so_far;
    }
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_sum = maxSubarraySum(arr, n);
    printf("The maximum contiguous sum is: %d\n", max_sum);

    return 0;
}