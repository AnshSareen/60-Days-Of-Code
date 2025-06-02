#include <stdio.h>

int candy(int *ratings, int ratingsSize)
{
    int *candies = (int *)malloc(ratingsSize * sizeof(int));
    int sum = 0;
    for (int i = 0; i < ratingsSize; i++)
    {
        candies[i] = 1;
    }

    // PASS1 - LEFT TO RIGHT
    for (int i = 0; i < ratingsSize - 1; i++)
    {
        if (ratings[i + 1] > ratings[i])
        {
            candies[i + 1] = candies[i] + 1;
        }
    }

    // PASS2 - RIGHT TO LEFT
    for (int i = ratingsSize - 1; i >= 1; i--)
    {
        if (ratings[i - 1] > ratings[i] && candies[i - 1] <= candies[i])
        {
            candies[i - 1] = candies[i] + 1;
        }
    }
    for (int i = 0; i < ratingsSize; i++)
    {
        sum += candies[i];
    }

    free(candies);
    return sum;
}

int main()
{
    int ratings[] = {1, 0, 2};
    int size = sizeof(ratings) / sizeof(ratings[0]);
    int totalCandies = candy(ratings, size);
    printf("Total candies needed: %d\n", totalCandies);
    return 0;
}
