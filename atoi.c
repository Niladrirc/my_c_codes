#include <stdio.h>
#include <string.h>


int string_to_number(char s[]) {

  int i, n = 0;

  for (i=0; s[i] >= '0' && s[i] <= '9'; i++) {
    n = (10*n) + (s[i] - '0');
  }

  if (strlen(s) < i-1) {
    return -1;
  }

  return n;
}

int main() {
  
  char input[100];
  printf("Enter your input here: ");
  scanf("%s", input);

  int result = string_to_number(input);

  printf("Your input was: %s\n", input);

  if (result == -1) {
    printf("Your entered sequence of characters is not a valid number\n");
  } else {
    printf("Equivalent number is: %d\n", result);
  }

  return 0;
}
