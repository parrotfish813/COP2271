#include <stdio.h>

// Main function
int main() {

  // Declaring my 2 integers
  int num1;
  int num2;

  // Asks user for first integer
  printf("Enter a number:\n");
  // Allows user to input first integer
  scanf("%d", &num1);

  // Asks user for second integer
  printf("Enter a second number:\n");
  // Allows user to input second integer
  scanf("%d", &num2);

  //Printing of the arrow using inputed numbers, \t to tab over and \n to start new line
  printf("\t %d\n\t %d%d", num1, num1, num1);
  printf("\n%d%d%d%d%d%d%d%d", num2, num2,num2,num2,num2,num1,num1,num1);
  printf("\n%d%d%d%d%d%d%d%d%d", num2, num2,num2,num2,num2,num1,num1,num1,num1);
  printf("\n%d%d%d%d%d%d%d%d", num2, num2,num2,num2,num2,num1,num1,num1);
  printf("\n\t %d%d\n\t %d", num1, num1, num1);

  // Exits function
  return 0;

}
