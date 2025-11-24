#include <stdio.h> 

void findTwoSum(int nums[], int size, int target) {
   
    for (int i = 0; i < size; i++) {
      
        for (int j = i + 1; j < size; j++) {
         
            if (nums[i] + nums[j] == target) {
                
                printf("%d %d\n", i, j);
                return;
            }
        }
    }
  
    printf("-1 -1\n");
}

int main() {
  
    int size;
    int target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int nums[size]; 

    printf("Enter the positive integers for the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &nums[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &target);

    findTwoSum(nums, size, target);

    return 0; 
}