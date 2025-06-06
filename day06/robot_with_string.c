#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack {
    int size;
    int top;
    char* arr;
};

void minFromIndex(int* actual, char* str, int len) {
    int min = actual[len - 1] = len - 1;
    for (int i = len - 2; i >= 0; i--) {
        if (str[i] <= str[min]) {
            actual[i] = i;
            min = i;
        } else
            actual[i] = min;
    }
}

int isEmpty(struct stack* ptr) {
    return ptr->top == -1;
}

int isFull(struct stack* ptr) {
    return ptr->top == ptr->size - 1;
}

void push(struct stack* ptr, char x) {
    if (!isFull(ptr)) {
        ptr->top++;
        ptr->arr[ptr->top] = x;
    }
}

char pop(struct stack* ptr) {
    if (!isEmpty(ptr)) {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
    return '\0';
}

char* robotWithString(char* str) {
    int len = strlen(str);
    char* p = malloc((len + 1) * sizeof(char));
    int* minFrom = malloc(len * sizeof(int));
    minFromIndex(minFrom, str, len);

    struct stack* s = malloc(sizeof(struct stack));
    s->size = len;
    s->top = -1;
    s->arr = (char*)malloc(s->size * sizeof(char));

    int start = 0, k = 0;

    for (; start < len; k++) {
        int x = minFrom[start];
        if (isEmpty(s) || str[x] < s->arr[s->top]) {
            for (int j = start; j <= x; j++) {
                push(s, str[j]);
            }
            p[k] = pop(s);
            start = x + 1;
        } else
            p[k] = pop(s);
    }

    while (!isEmpty(s)) {
        p[k++] = pop(s);
    }

    p[k] = '\0';
    free(minFrom);
    free(s->arr);
    free(s);
    return p;
}

int main() {
    char input[] = "zza";
    char* result = robotWithString(input);
    printf("Output: %s\n", result);
    free(result);
    return 0;
}
