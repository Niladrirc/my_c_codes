#include <stdio.h>

int main() {
    int c, max = 0, len = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            if (len > max) max = len;
            len = 0;
        } else {
            len++;
        }
    }

    printf("Longest line length: %d\n", max);
    return 0;
}