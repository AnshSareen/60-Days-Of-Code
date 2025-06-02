// 344. Reverse String
#include <stdio.h>

void swap(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverseString(char* s, int sSize) {
    int i = 0;
    while (i != sSize / 2) {
        swap(&s[i], &s[sSize - i - 1]);
        i++;
    }
}

int main() {
    char s[] = {'h', 'e', 'l', 'l', 'o'};
    int sSize = sizeof(s) / sizeof(s[0]);

    printf("Original: ");
    for (int i = 0; i < sSize; i++) {
        printf("%c ", s[i]);
    }

    reverseString(s, sSize);

    printf("\nReversed: ");
    for (int i = 0; i < sSize; i++) {
        printf("%c ", s[i]);
    }
    printf("\n");

    return 0;
}
