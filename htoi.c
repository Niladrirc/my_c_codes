#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#define BASE 16 /* Base of Hexadecimal to Decimal conversion*/

long htoi(char s[]) {
    int len = strlen(s);
    int decimal = 0, i = 0, digit;

    for (int i = 0; i<len; i++) {
        
        if ((s[i] >= 'G' && s[i] < 'a') || (s[i] >= 'g')) {
            printf("Error in hexadecimal input");
            return EOF;
        }

        if (s[i] >= 'a' && s[i] <= 'f') {
            s[i] = toupper(s[i]); 
        }

        if (s[i] >= 'A' && s[i] <= 'F') {
            int c = s[i] - 55;
            digit = c;
        }

        if (isdigit(s[i])) {
            digit = s[i] -'0';
        }

        decimal += (digit * (int) pow(BASE, i));
    }

    return decimal;
}

int main() {
    // char hex[256];
    // printf("Enter hexadecimal sequence: \n");
    // fgets(hex, 256, stdin);

    printf("Equivalent decimal: %ld\n", htoi("62C"));
    return 0;
}