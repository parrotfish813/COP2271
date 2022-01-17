#include <stdio.h>

// Main function
int main() {

  //Declaring varible
  int num;

  //Prompting user to enter value and scanning in said value
  printf("Enter a number greater than 1: ");
  scanf("%d", &num);

  //While the entered number is greater then 0 it will print out the value and then subrtact 1 then print out the new value until it equals 1
  while (num > 0) {
    printf("%d\n", num);
    num--;
  }

  return 0;

}
