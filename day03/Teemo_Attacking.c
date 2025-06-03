#include <stdio.h>

int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration) {
    int count = 0;
    for (int i = 0; i < timeSeriesSize - 1; i++) {
        if (timeSeries[i + 1] > timeSeries[i] + duration - 1) {
            count += duration;
            continue;
        }
        count += timeSeries[i + 1] - timeSeries[i];
    }
    count += duration;
    return count;

}

int main() {
    int timeSeries[] = {1, 4, 5}; // sample input
    int timeSeriesSize = sizeof(timeSeries) / sizeof(timeSeries[0]);
    int duration = 2;

    int totalPoisoned = findPoisonedDuration(timeSeries, timeSeriesSize, duration);
    printf("Total poisoned duration: %d\n", totalPoisoned);

    return 0;
}
