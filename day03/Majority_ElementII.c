#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* majorityElement(int* nums, int numsSize, int* returnSize) {
    int votes1 = 0, votes2 = 0, candidate1 = 1, candidate2 = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == candidate1)
            votes1++;
        else if (nums[i] == candidate2)
            votes2++;
        else if (votes1 == 0)
            candidate1 = nums[i], votes1 = 1;
        else if (votes2 == 0)
            candidate2 = nums[i], votes2 = 1;
        else
            votes1--, votes2--;
    }
    int count1 = 0, count2 = 0;
    for (int i = 0; i < numsSize; i++) {
        if (candidate1 == nums[i])
            count1++;
        if (candidate2 == nums[i])
            count2++;
    }
    int* output = (int*)malloc(2 * sizeof(int));
    *returnSize = 0;
    if (count1 > numsSize / 3) {
        output[*returnSize] = candidate1;
        (*returnSize)++;
    }
    if (count2 > numsSize / 3 ) {
        output[*returnSize] = candidate2;
        (*returnSize)++;
    }

    return output;
}

int main() {
    int nums[] = {3, 2, 3};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize = 0;

    int* result = majorityElement(nums, numsSize, &returnSize);
    printf("Majority elements (appearing more than n/3 times): ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);
    return 0;
}
