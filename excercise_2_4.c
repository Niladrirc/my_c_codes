#include <stdio.h>
#include <string.h>

int any(char s1[], char s2[]) {
  int i,j;
  for(i=0; s1[i] != '\0'; i++) {
    for (j=0; s2[j] != '\0'; j++) {
      if (s2[j] == s1[i])
        return i;
    }
  }
  return -1;
}

 
int main() {
  char s1[100], s2[100];

  printf("Enter the string s1: ");
  fgets(s1, sizeof(s1), stdin);

  printf("Enter the string s2: ");
  fgets(s2, sizeof(s2), stdin);

  // Remove trailing newlines added by fgets
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

  int result = any(s1, s2);

  if (result == -1) {
    printf("\"%s\" contains no characters from \"%s\"\n", s1, s2);
  } else {
    printf("The 1st location in the string \"%s\" where any character from \"%s\" occurs is: %d\n", s1, s2, result+1);
  }
  
  return 0;
  }
