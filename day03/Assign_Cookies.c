int compare(const void *a, const void *b) { return *(int *)a - *(int *)b; }

int findContentChildren(int *g, int gSize, int *s, int sSize)
{
    int count = 0, flag;
    qsort(g, gSize, sizeof(int), compare);
    qsort(s, sSize, sizeof(int), compare);

    int i = 0, j = 0;
    while (i < gSize && j < sSize)
    {
        if (s[j] >= g[i])
        {
            // Cookie j satisfies child i
            i++;
        }
        j++; // Move to next cookie in any case
    }
    return i; // i = number of satisfied children
}

#include <stdio.h>

int main()
{
    int g[] = {1, 2};
    int s[] = {1, 2, 3};
    int gSize = sizeof(g) / sizeof(g[0]);
    int sSize = sizeof(s) / sizeof(s[0]);

    int satisfied = findContentChildren(g, gSize, s, sSize);
    printf("Number of content children: %d\n", satisfied);

    return 0;
}
