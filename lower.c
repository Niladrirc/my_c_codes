#include <stdio.h>

int lower(int c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        putchar(lower(c));
    }

    return 0;
}