#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers (from 0 to %d, with one missing): \n", n, n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    long long expected_sum = (long long)n * (n + 1) / 2;

    long long actual_sum = 0;
    for (i = 0; i < n; i++) {
        actual_sum += arr[i];
    }

    int missing_number = expected_sum - actual_sum;

    printf("The missing number is: %d\n", missing_number);

    return 0;
}