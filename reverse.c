#include <stdio.h>
#define MAXLEN 1000

void reverse(char s[], int len) {
    int i, j;
    for (i = 0, j = len; i <= len/2 && i < MAXLEN-1; i++, j--) {
        char c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

int main() {
    int c, i = 0;
    char s[MAXLEN], reverse_s[MAXLEN];
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            printf("Original String %s\n", s);
            reverse(s, i-1);
            printf("Reversed String: %s\n", s);
        } else {
            s[i++] = c;
        }
    }
    return 0;
}