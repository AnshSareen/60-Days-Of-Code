#include <stdio.h>
#include <stdlib.h>

int maxChunksToSorted(int* arr, int n) {
    int* leftMax = malloc(sizeof(int) * n);
    int* rightMin = malloc(sizeof(int) * n);
    int chunks = 0;

    leftMax[0] = arr[0];
    for (int i = 1; i < n; i++) {
        leftMax[i] = (arr[i] > leftMax[i - 1]) ? arr[i] : leftMax[i - 1];
    }

    rightMin[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rightMin[i] = (arr[i] < rightMin[i + 1]) ? arr[i] : rightMin[i + 1];
    }

    for (int i = 0; i < n - 1; i++) {
        if (leftMax[i] <= rightMin[i + 1]) {
            chunks++;
        }
    }

    free(leftMax);
    free(rightMin);
    return chunks + 1;
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxChunksToSorted(arr, n);
    printf("Max number of chunks: %d\n", result);

    return 0;
}
