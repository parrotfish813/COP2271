#include <stdio.h>

int main() {

  int c = 0;

  for (int i = 0; i < 50; i++) {
    c = c + 2;
    if (i % 5 == 0) {
      printf("\n");
      printf("%d\t", c);
    }
    else {
      printf("%d\t", c);
    }
  }

  return 0;

}
