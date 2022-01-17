#include <stdio.h>

int main(void) {

  // Declaring my 3 varibles
  int num1;
  int num2;
  int num3;

  // Asking user to input the 3 inputs and saving said inputs
  printf("Enter a number:\n");
  scanf("%d", &num1);

  printf("Enter a second number:\n");
  scanf("%d", &num2);

  printf("Enter a third number:\n");
  scanf("%d", &num3);

  // Calculating the sum of the inputed numbers
  int sum = num1 + num2 + num3;

  // Detecting if the sum is greater then, less than or equal to 100 and printing out appropriate response
  if (sum > 100) {
    printf("Sum is greater than 100");
  }
  if (sum < 100) {
    printf("Sum is less than 100");
  }
  if (sum == 100) {
    printf("Sum is equal to 100");
  }

  // Exits function
  return 0;

}
