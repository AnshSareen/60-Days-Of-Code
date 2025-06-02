// count_primes.c
// Problem: Count Primes
// Source: LeetCode
// Date: 01-06-20205

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int countPrimes(int n) {
    if (n <= 2) return 0;

    bool* isPrime = (bool*)malloc(n * sizeof(bool));
    for (int i = 0; i < n; i++) {
        isPrime[i] = true;
    }

    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i * i < n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime[i]) count++;
    }

    free(isPrime);
    return count;
}

int main() {
    int n = 20; // Example input
    int result = countPrimes(n);
    printf("Number of primes less than %d: %d\n", n, result);
    return 0;
}
