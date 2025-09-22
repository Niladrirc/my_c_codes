#include <stdio.h>
#define MAX 1000
#define PRINT_AFTER 10

/**
 * Program to 
 * print all lines that are longer than 80 characters.
 */

int get_line(char line[]) {
    int c, i = 0;
    for (i = 0; i<MAX-1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i++] = c;
    }
    line[i] = '\0';
    return i; 
}

void print_line(char line[]) {
    int i = 0;
    while (line[i] != '\0') {
        putchar(line[i++]);
    }
}


int main() {

    int c, len = 0;
    char line[MAX];

    while ((len = get_line(line)) > 0) {
        if (len > PRINT_AFTER) {
            print_line(line);
        }
    }
    return 0;
}