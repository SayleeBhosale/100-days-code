#include <stdio.h> 

int findPivotIndex(int arr[], int n) {
    
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;

    for (int i = 0; i < n; i++) {
      
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            return i; 
        }

        leftSum += arr[i];
    }

    return -1;
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

    int pivotIndex = findPivotIndex(arr, n);

    printf("The leftmost pivot index is: %d\n", pivotIndex);

    return 0; 
}