// input test

#include <stdio.h>

int main() {

  int var1;
  int var2;

  printf("Enter the first number\n");
  scanf("%d", &var1);

  printf("Enter the second number\n");
  scanf("%d", &var2);

  int sum = var1 + var2;

  printf("Sum of 2 numbers is %d", sum);

  return 0;

}

// years to min calculator

#include <stdio.h>

int main() {

  int years;

  printf("How many years old are you?\n");
  scanf("%d", &years);

  int min = years * 365 * 24 * 60;

  printf("You've lived for %d minutes", min);

  return 0;

}

// if statement

#include <stdio.h>

int main() {

  int num;

  printf("Enter a number:\n");
  scanf("%d", &num);

  if (num % 2 == 0) {
      printf("The number is even.");
  }

  if (num % 2 != 0) {
      printf("The number is odd.");
  }

  return 0;

}

// else statement

#include <stdio.h>

int main() {

  int num;

  printf("Enter a number:\n");
  scanf("%d", &num);

  if (num % 2 == 0) {
      printf("The number is even.");
  }

  else {
      printf("The number is odd.");
  }

  return 0;

}

// Which number is bigger

#include <stdio.h>

int main() {

  int num1;
  int num2;

  printf("Enter a number:\n");
  scanf("%d", &num1);

  printf("Enter a second number:\n");
  scanf("%d", &num2);

  if (num1 == num2) {
      printf("The numbers are eqaul.");
  }

  if (num1 > num2) {
      printf("%d is larger", num1);
  }
  if (num1 < num2) {
      printf("%d is larger", num2);
  }


  return 0;

}

// Division checker

#include <stdio.h>

int main() {

  int num1;
  int num2;

  printf("Enter a number:\n");
  scanf("%d", &num1);

  printf("Enter a second number:\n");
  scanf("%d", &num2);

  if (num2 == 0) {
      printf("These numbers can't be divided.");
  }
  if (num2 != 0) {
      int division = num1 / num2;
      printf("The solution is %d", division);
  }

  return 0;

}
