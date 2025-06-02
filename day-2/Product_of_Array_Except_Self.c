// 238. Product of Array Except Self
#include <stdio.h>
#include <stdlib.h>

// using Division
// int* ProductExcept(int* arr, int index,int size) {
//      int product=1;
//      for (int i = 0; i < size; i++) {
//          if (i == index)
//              continue;
//          product *= arr[i];
//      }
//      return product;
//  }
//  int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
//      *returnSize=numsSize;
//      int* arr = (int*)malloc(*returnSize * sizeof(int));
//      int count = 0;
//      for (int i = 0; i < numsSize; i++) {
//          if (nums[i] == 0) {
//              count++;
//              if (count == 2) {
//                  memset(arr, 0, numsSize * sizeof(int));
//                  break;
//              }
//              memset(arr, 0, numsSize * sizeof(int));
//              arr[i] = ProductExcept(nums,i,numsSize);
//          }
//      }
//      if (count != 0)
//          return arr;
//      int p=ProductExcept(nums,-1,numsSize);
//      for(int i=0;i<numsSize;i++){
//          arr[i]=p/nums[i];
//      }
//      return arr;
//  }


// Using Prefix/Suffix
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* output = (int*)malloc(*returnSize * sizeof(int));
    output[0] = 1;

    for (int i = 1; i < numsSize; i++) {
        output[i] = output[i - 1] * nums[i - 1];
    }

    int suffix = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        output[i] *= suffix;
        suffix *= nums[i];
    }

    return output;
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;
    
    int* result = productExceptSelf(nums, numsSize, &returnSize);

    printf("Result: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);
    return 0;
}
