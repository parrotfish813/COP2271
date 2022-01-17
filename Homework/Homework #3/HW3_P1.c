#include <stdio.h>

// Main function
int main() {

  int num1 = -123;
  int num2 = 123;
  float num3 = 123;

  printf("%+.5d\n", num1);

  printf("%+.5d\n", num2);

  printf("%6d\n", num2);

  printf("%-6d\n", num2);

  printf("%.2e", num3);

  return 0;

}
