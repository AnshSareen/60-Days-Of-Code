#include <stdio.h>
#include <stdlib.h>

int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize = 2 * numsSize;
    int* output = (int*)malloc(*returnSize * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        output[i] = nums[i];
    }
    for (int i = 0; i < numsSize; i++) {
        output[i + numsSize] = nums[i];
    }
    return output;
}

int main() {
    int nums[] = {1, 2, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;
    
    int* result = getConcatenation(nums, numsSize, &returnSize);
    
    printf("Concatenated array: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);
    return 0;
}
