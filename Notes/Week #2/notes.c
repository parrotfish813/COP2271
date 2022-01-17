#include <stdio.h>

int main() {

  int num;
  printf("Enter a number:\n");
  scanf("%d", &num);

  //int num2;
  //printf("Enter a second number:\n");
  //scanf("%d", &num2);

  if (num % 3 == 0 || num % 5 == 0) {
    printf("This number is divisible by 3\n");
     //if (num % 5 == 0) {
     //printf("This number is divisible by 5");
  //}
  }

  else {
    printf("Thar number can't be divided by 3 or 5");
  }

  return 0;
}
