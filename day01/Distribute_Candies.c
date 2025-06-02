// Problem: Distribute Candies Among Children II
// Source: LeetCode Daily Challenge
// Date: 02-06-2025

#include <stdio.h>

long long comb(int n) {
    if (n < 0) return 0;
    return (long long)(n + 1) * (n + 2) / 2;
}

long long distributeCandies(int n, int limit) {
    return comb(n)
         - 3 * comb(n - (limit + 1))
         + 3 * comb(n - 2 * (limit + 1))
         - comb(n - 3 * (limit + 1));
}

int main() {
    int n = 5;
    int limit = 2;
    long long ways = distributeCandies(n, limit);

    printf("Number of ways to distribute %d candies with limit %d: %lld\n", n, limit, ways);
    return 0;
}
