// 53. Maximum Subarray
#include <stdio.h>

int maxSubArray(int* nums, int numsSize) {
    int current_sum = nums[0], best_sum = nums[0];
    for (int i = 1; i < numsSize; i++) {
        current_sum = (current_sum + nums[i] > nums[i])
                          ? (current_sum + nums[i])
                          : nums[i];
        best_sum = (current_sum > best_sum) ? current_sum : best_sum;
    }
    return best_sum;
}

int main() {
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    
    int result = maxSubArray(nums, numsSize);
    printf("Maximum subarray sum: %d\n", result);

    return 0;
}
