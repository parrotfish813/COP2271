#include <stdio.h>
#include <stdlib.h>

//Prototyping my function with my 2 pointers to take in the values inputed by the user
void SquareOfTwoNumbers(double *xPtr, double *yPtr);

int main(void) {

  double x, y;

  puts("Please enter 2 numbers");
  scanf("%lf", &x);
  scanf("%lf", &y);

  //Passing the users inputs into the pointers to be used by the function
  SquareOfTwoNumbers(&x, &y);

  return 0;
}

void SquareOfTwoNumbers(double *xPtr, double *yPtr) {

  //Creating new varibles to store my squares
  double sx, sy;

  //Using the values in the pointers to find the square of the users values
  sx = *xPtr * *xPtr;
  sy = *yPtr * *yPtr;

  printf("x squared is: %.2lf\n", sx);
  printf("y squared is: %.2lf\n", sy);

}
