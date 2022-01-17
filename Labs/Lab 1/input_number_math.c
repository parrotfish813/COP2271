#include <stdio.h>

// Main function
int main() {

  // Declaring the integer
  int num;

  // Asks user for numbers
  printf("Enter a number:\n");
  // Allows user to enter number
  scanf("%d", &num);

  // Checks to see if number is even
  if (num % 2 == 0) {
    // Declares new varible of the number squared
    int square = num * num;
    // Prints out number squared
    printf("Your number squared is %d", square);
  }
  // Runs if number is not even
  else {
    // Declares integer of number cubed
    int cubed = num * num * num;
    // Prints out number cubed
    printf("Your number cubed is %d", cubed);
  }

  // Exits function
  return 0;

}
