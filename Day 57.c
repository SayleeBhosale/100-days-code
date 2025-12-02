#include <stdio.h>
#include <stdlib.h> 

void findPreviousGreater(int arr[], int n) {
    
    for (int i = 0; i < n; i++) {
        int previousGreater = -1; 

        for (int j = i - 1; j >= 0; j--) {
            
            if (arr[j] > arr[i]) {
                previousGreater = arr[j]; 
                break; 
            }
        }
        
        printf("%d", previousGreater);

      
        if (i < n - 1) {
            printf(",");
        }
    }
    printf("\n"); 
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findPreviousGreater(arr, n);

    free(arr);

    return 0; 
}