#include <stdio.h>

// Main function
int main() {

  float i;
  int p;
  int n;

  puts("Enter an int value, the program will end when you enter 0");

  //Using a do while loop it checks if the number is negative or positive as long as the number isn't 0
  do {
    scanf("%f", &i);
    if (i > 0){
      //Assigns a new integer with the amount of positive numbers
      int p = i;
    }
    if (i < 0) {
      //Assigns a new integer with the amount of negative numbers
      int n = i;
    }
  } while (i != 0);

  printf("The number of positives are %d\n", p);
  printf("The number of positives are %d", n);

  return 0;

}
