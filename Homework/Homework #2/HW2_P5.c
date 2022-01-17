#include <stdio.h>

int main(void) {

  // Declaring my 2 integers
  int x;
  int y;

  // Asking the user to input numbers and saving said numbers
  printf("Enter a number:\n");
  scanf("%d", &x);

  printf("Enter a second number:\n");
  scanf("%d", &y);

  // Delcaring a new variable using given numbers and equation
  int Z = 2*(x*x) + 3*y;

  // Printing out new number
  printf("%d", Z);

  // Exiting function
  return 0;

}
