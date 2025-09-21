#include <stdio.h>

int main() {
    int c, counter = 0, sum = 0;
    int wordLength[100] = {0};
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            wordLength[counter] = sum;
            counter++;
            sum = 0;
        } else {
            ++sum;
        }
    }

    printf("\nHistogram Results: \n");
    for (int i=0; i<100; i++) {
        if (wordLength[i] != 0)
            printf("Length of word #%d: %d\n", i+1, wordLength[i]);
    }

    return 0;
}