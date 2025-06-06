#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* answerString(char* word, int n) {
    if(n==1) return word;
    char* ptr = word;
    int x = strlen(word), index = -1;
    char largest = '\0';
    for(int i = 0; i < x; i++) {
        if(ptr[i] > largest) {
            largest = ptr[i];
            index = i;
        }
        else if(ptr[i] == largest) {
            int j = index + 1, val = i + 1, flag = 0;
            for(j; j < i; j++) {
                flag = 1;
                if(val == x) break;
                if(ptr[val] > ptr[j]) {
                    index = i;
                    break;
                }
                else if(ptr[val] < ptr[j]) {
                    break;
                }
                else {
                    val++;
                    continue;
                }
            }
            if(val == x) break;
            if(j == i && flag == 1) index = i;
        }
    }
    int y = x - n + 1, i = 0;
    char *output = (char*)malloc((y + 1) * sizeof(char));
    output[y] = '\0';
    while(y > 0) {
        if(index + i > x) break;
        output[i] = word[index + i];
        y--;
        i++;
    }
    return output;
}

int main() {
    char word[] = "abacabadabacaba";
    int n = 5;

    char* result = answerString(word, n);
    printf("Resulting string: %s\n", result);

    // Free allocated memory
    if (n != 1) free(result);

    return 0;
}
