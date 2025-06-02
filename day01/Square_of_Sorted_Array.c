// Problem: Squares of a Sorted Array
// Source: LeetCode
// Date: 01-06-2025

#include <stdio.h>
#include <stdlib.h>

void sortArray(int* ptr, int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - 1 - i; j++) {
            if (ptr[j] > ptr[j + 1]) {
                temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }
}

int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int i = 0;
    int* arr = (int*)malloc(numsSize * sizeof(int));
    while (i < numsSize) {
        arr[i] = nums[i] * nums[i];
        i++;
    }
    sortArray(arr, numsSize);
    *returnSize = numsSize;
    return arr;
}

int main() {
    int nums[] = {-7, -3, 2, 3, 11};
    int size = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    int* result = sortedSquares(nums, size, &returnSize);

    printf("Sorted squares: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);
    return 0;
}
