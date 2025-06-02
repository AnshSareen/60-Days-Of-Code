// Problem: Rotate Array
// Source: LeetCode
// Date: 01-06-2025

#include <stdio.h>

void reverse(int* nums, int start, int end) {
    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    if (k == 0)
        return;

    reverse(nums, 0, numsSize - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, numsSize - 1);
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    int size = sizeof(nums) / sizeof(nums[0]);

    rotate(nums, size, k);

    printf("Rotated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
