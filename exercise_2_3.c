#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void squeeze(char s1[], char s2[]) {
  int i, j, k;
  char result[strlen(s1)];
  for (i=0, k=0; i<strlen(s1); i++) {
    int cins2 = 0;
    char c = s1[i];
    printf("Character #%d: %c\n", i, c);
    // Start checking if c is in s2 or not.
    for (j=0; j<strlen(s2); j++) {
      if (s2[j] == c) 
        cins2 = 1;
    }

    if(!cins2) {
      result[k++] = s1[i];
    }
  }

  s1[i] = '\0';

  printf("Result after squeeze: %s\n", result);
} 

int main() {

  char s1[100], s2[100];

  printf("Enter the string s1: ");
  fgets(s1, sizeof(s1), stdin);

  printf("Enter the string s2: ");
  fgets(s2, sizeof(s2), stdin);

  squeeze(s1, s2);
  return 0;
}
