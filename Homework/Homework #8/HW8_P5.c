#include <stdio.h>

int main() {

  int x[5] = {10, 20, 30, 40, 50};
  int *ptr;
  ptr = &x[2];

  printf("%d\n", *ptr);
  printf("%d\n", *(ptr + 1));
  printf("%d\n", *(ptr - 1));

  return 0;
}
