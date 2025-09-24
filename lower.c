#include <stdio.h>
# include <ctype.h>


// int lower(int c) {
//     if (c >= 'A' && c <= 'Z') {
//         return c + 32;
//     }
//     return c;
// }

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        putchar(tolower(c));
    }

    return 0;
}