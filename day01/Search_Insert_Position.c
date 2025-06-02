// search_insert_position.c
// Problem: Search Insert Position
// Source: LeetCode
// Date: 01-06-2025

#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int low = 0, high = numsSize - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (target > nums[mid]) {
            low = mid + 1;
        } else if (target < nums[mid]) {
            high = mid - 1;
        } else {
            return mid;
        }
    }
    return low;
}

int main() {
    int nums[] = {1, 3, 5, 6};
    int target = 5;  // Try changing this value to test other cases
    int size = sizeof(nums) / sizeof(nums[0]);

    int index = searchInsert(nums, size, target);
    printf("Insert position for %d is: %d\n", target, index);

    return 0;
}
