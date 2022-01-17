#include <stdio.h>

// Main function
int main() {

  //Declaring 2 values
  int C = -50;
  float F;

  //Formatting
  printf("||==================||\n");
  printf("||Celsius|Fahrenheit||\n");
  printf("||------------------||\n");

  //As long as the C value is less than or equal to 50 it will run the equation and convert the celsius to fahrenheit using the given equation and then it will add 1 to the C value and run again
  while (C <= 50) {

    F = 9.0/5.0 * C + 32.0;

    printf("||%+-7d|\t%+8.1f||\n", C, F);

    C++;

  }

  printf("||------------------||\n");

  return 0;

}
