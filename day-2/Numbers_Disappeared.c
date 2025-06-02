// 448. Find All Numbers Disappeared in an Array
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    bool* arr = (bool*)malloc(numsSize * sizeof(bool));
    int count = 0, j = 0;
    for (int i = 0; i < numsSize; i++) {
        arr[i] = false;
    }
    for (int i = 0; i < numsSize; i++) {
        if (arr[nums[i] - 1] == false) {
            arr[nums[i] - 1] = true;
            count++;
        }
    }
    *returnSize = numsSize - count;
    int* array = (int*)malloc(*returnSize * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        if (arr[i] == false) {
            array[j] = i + 1;
            j++;
        }
    }
    free(arr);
    return array;
}

int main() {
    int nums[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;
    int* missing = findDisappearedNumbers(nums, numsSize, &returnSize);

    printf("Missing numbers: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", missing[i]);
    }
    printf("\n");

    free(missing);
    return 0;
}
