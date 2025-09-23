#include <stdio.h>
#include <string.h>
#define MAXLEN 1000

void reverse(char s[], int len) {
    for (int i=0, j=len-1; i<(len/2); i++, j--) {
        char c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

int main() {
    int c, i = 0;
    char s[MAXLEN];
    while ((scanf("%s", s)) != EOF) {
        printf("Original String %s\n", s);
        reverse(s, strlen(s));
        printf("Reversed String: %s\n", s);
    }
    return 0;
}