#include <stdio.h>

int main() {

  int x = 6; // 6 = 00000110
  int y = 12; // 12 = 00001100

  int z = 0; // 0 = 00000000

  printf("%d\n", x & y);

  return 0;
}
