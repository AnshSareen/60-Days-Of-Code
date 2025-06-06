#include <stdio.h>
#include <stdlib.h>

int sum(int var) {
    int sum = 0;
    for (int i = var; i > 0; i--) {
        sum += i;
    }
    return sum;
}

int numSubarrayBoundedMax(int* nums, int numsSize, int left, int right) {
    int max = 0, length = 0, count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] >= left && nums[i] <= right) {
            length++;
            max -= sum(count);
            count = 0;
        } else {
            if (nums[i] > right) {
                max = max + sum(length) - sum(count);
                length = 0;
                count = 0;
            } else {
                length++;
                count++;
            }
        }
    }
    return max + sum(length) - sum(count);
}

int main() {
    int nums[] = {2, 1, 4, 3};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int left = 2, right = 3;

    int result = numSubarrayBoundedMax(nums, numsSize, left, right);
    printf("Number of subarrays with bounded max: %d\n", result);

    return 0;
}
