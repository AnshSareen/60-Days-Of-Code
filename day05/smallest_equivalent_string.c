#include <stdio.h>
#include <string.h>

int parent[26];

void makeSet() {
    for (int i = 0; i < 26; i++) {
        parent[i] = i;
    }
}

int findParent(int c) {
    if (parent[c] != c) {
        parent[c] = findParent(parent[c]);
    }
    return parent[c];
}

void unionSet(int x, int y) {
    x = findParent(x);
    y = findParent(y);

    if (x != y) {
        if (x < y)
            parent[y] = x;
        else
            parent[x] = y;
    }
}

char* smallestEquivalentString(char* s1, char* s2, char* baseStr) {
    makeSet();
    int x = strlen(s1);
    for (int i = 0; i < x; i++) {
        unionSet(s1[i] - 'a', s2[i] - 'a');
    }

    int i = 0;
    while (baseStr[i] != '\0') {
        baseStr[i] = findParent(baseStr[i] - 'a') + 'a';
        i++;
    }
    return baseStr;
}

int main() {
    char s1[] = "parker";
    char s2[] = "morris";
    char baseStr[] = "parser";

    char* result = smallestEquivalentString(s1, s2, baseStr);
    printf("Smallest Equivalent String: %s\n", result);

    return 0;
}
