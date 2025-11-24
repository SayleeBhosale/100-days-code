#include <stdio.h>

void findMajorityElement(int nums[], int n) {
    int majorityElement = -1; 
    int maxCount = 0; 

    for (int i = 0; i < n; i++) {
        int currentElement = nums[i];
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (nums[j] == currentElement) {
                count++;
            }
        }

        if (count > n / 2) {
            majorityElement = currentElement;
            break; 
        }
    }

    if (majorityElement != -1) {
        printf("The majority element is: %d\n", majorityElement);
    } else {
        printf("-1\n"); 
    }
}

int main() {
    
    int nums1[] = {2, 2, 1, 1, 1, 2, 2};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Array 1: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", nums1[i]);
    }
    printf("\n");
    findMajorityElement(nums1, n1);

    int nums2[] = {1, 2, 3, 4, 5};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Array 2: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", nums2[i]);
    }
    printf("\n");
    findMajorityElement(nums2, n2);

    int nums3[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Array 3: ");
    for (int i = 0; i < n3; i++) {
        printf("%d ", nums3[i]);
    }
    printf("\n");
    findMajorityElement(nums3, n3);

    return 0;
}