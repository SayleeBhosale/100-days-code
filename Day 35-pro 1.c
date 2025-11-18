#include <stdio.h>
#include <limits.h> 

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    if (n < 2) {
        printf("Array must have at least two elements to find a second largest.\n");
        return 1; 
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
           
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN) {
        printf("There is no distinct second largest element (e.g., all elements are the same).\n");
    } else {
        printf("The second largest element is: %d\n", second_largest);
    }

    return 0;
}