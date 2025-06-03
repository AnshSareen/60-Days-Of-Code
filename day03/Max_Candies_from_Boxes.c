#include <stdio.h>
#include <stdbool.h>

#define MAX 1000

int maxCandies(int* status, int statusSize, int* candies, int candiesSize,
               int** keys, int keysSize, int* keysColSize, int** containedBoxes,
               int containedBoxesSize, int* containedBoxesColSize,
               int* initialBoxes, int initialBoxesSize) {

    bool hasBox[MAX] = {0};
    bool used[MAX] = {0};
    bool changed = true;
    int total = 0;

    // Start with the initial boxes
    for (int i = 0; i < initialBoxesSize; i++) {
        hasBox[initialBoxes[i]] = true;
    }

    // Keep looping while we are able to open new boxes
    while (changed) {
        changed = false;

        for (int i = 0; i < statusSize; i++) {
            if (hasBox[i] && status[i] == 1 && !used[i]) {
                used[i] = true;
                total += candies[i];
                changed = true;

                // Gain keys
                for (int j = 0; j < keysColSize[i]; j++) {
                    int k = keys[i][j];
                    status[k] = 1;
                }

                // Gain new boxes
                for (int j = 0; j < containedBoxesColSize[i]; j++) {
                    int b = containedBoxes[i][j];
                    hasBox[b] = true;
                }
            }
        }
    }

    return total;
}

int main() {
    int status[] = {1, 0, 1, 0};
    int candies[] = {7, 5, 4, 100};
    int initialBoxes[] = {0};
    int statusSize = 4;
    int candiesSize = 4;
    int initialBoxesSize = 1;

    // keys: [[1,2],[],[],[]]
    int keys0[] = {1, 2};
    int* keys[] = {keys0, NULL, NULL, NULL};
    int keysColSize[] = {2, 0, 0, 0};

    // containedBoxes: [[3],[],[],[]]
    int boxes0[] = {3};
    int* containedBoxes[] = {boxes0, NULL, NULL, NULL};
    int containedBoxesColSize[] = {1, 0, 0, 0};

    int result = maxCandies(status, statusSize, candies, candiesSize,
                            keys, 4, keysColSize,
                            containedBoxes, 4, containedBoxesColSize,
                            initialBoxes, initialBoxesSize);

    printf("Maximum candies collected: %d\n", result);
    return 0;
}
