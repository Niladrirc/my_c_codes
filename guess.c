#include <stdio.h>

int main() {
    int guess;
    while (scanf("%d", &guess) != EOF) {
        if (guess == 42) {
            printf("Good work!\n");
        } else if (guess > 42) {
            printf("Too High - guess again.\n");
        } else {
            printf("Too Lo - guess again.\n");
        }
    }

    return 0;
}