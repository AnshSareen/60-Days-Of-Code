#include <stdio.h>

int maxChunksToSorted(int* arr, int arrSize) {
    int start = 0, end, chunks = 0;
    for (start; start < arrSize; start++) {
        end = arr[start];
        if (end == 0) {
            chunks += 1;
            continue;
        }
        int i = 1, x = start;
        while (start < end) {
            if (arr[x + i] > arr[x]) {
                x = x + i;
                end = arr[x];
                i = 0;
            }
            i++;
            start++;
        }
        chunks += 1;
    }
    return chunks;
}

int main() {
    int arr[] = {1, 0, 2, 3, 4};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    int result = maxChunksToSorted(arr, arrSize);
    printf("Maximum number of chunks: %d\n", result);

    return 0;
}
