#include <stdio.h>

int findFirstOccurrence(int nums[], int size, int target) {
    int low = 0;
    int high = size - 1;
    int firstOccurrence = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            firstOccurrence = mid;
            high = mid - 1; 
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return firstOccurrence;
}

int findLastOccurrence(int nums[], int size, int target) {
    int low = 0;
    int high = size - 1;
    int lastOccurrence = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            lastOccurrence = mid;
            low = mid + 1; 
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return lastOccurrence;
}

int main() {
    int nums[] = {1, 2, 3, 4, 4, 4, 5, 6, 7};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target = 4;

    int first = findFirstOccurrence(nums, size, target);
    int last = findLastOccurrence(nums, size, target);

    printf("First occurrence of %d: Index %d\n", target, first);
    printf("Last occurrence of %d: Index %d\n", target, last);

    target = 9;
    first = findFirstOccurrence(nums, size, target);
    last = findLastOccurrence(nums, size, target);
    printf("First occurrence of %d: Index %d\n", target, first);
    printf("Last occurrence of %d: Index %d\n", target, last);

    return 0;
}