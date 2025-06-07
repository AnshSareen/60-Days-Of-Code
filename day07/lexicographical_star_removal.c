#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char* clearStars(char* s) {
    int n = strlen(s);
    int *stack[26], top[26] = {0};
    for (int i = 0; i < 26; i++) {
        stack[i] = (int*)malloc(n * sizeof(int));
    }
    bool* remove = (bool*)calloc(n, sizeof(bool));
    for (int i = 0; i < n; i++) {
        if (s[i] == '*') {
            for (int j = 0; j < 26; j++) {
                if (top[j] > 0) {
                    top[j]--;
                    remove[stack[j][top[j]]] = true;
                    remove[i] = true;
                    break;
                }
            }
        } else {
            int letter = s[i] - 'a';
            stack[letter][top[letter]] = i;
            top[letter]++;
        }
    }
    char* output = (char*)malloc(n + 1);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (!remove[i]) {
            output[j] = s[i];
            j++;
        }
    }
    output[j] = '\0';
    for (int i = 0; i < 26; i++) free(stack[i]);
    free(remove);
    return output;
}

int main() {
    char input[] = "cb*a*b*";
    char* result = clearStars(input);
    printf("Result: %s\n", result);
    free(result);
    return 0;
}
