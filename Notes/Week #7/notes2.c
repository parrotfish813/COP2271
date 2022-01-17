//Adding fractions with recursion
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float sumFraction(int i);

int main(void) {

  for (int i = 1; i <= 10; i++) {
    printf("m(%d) = %f\n", i, sumFraction(i));
  }

  return 0;

}

float sumFraction(int i) {

  float sum;

  if (i == 1) {
    return 1.0;
  }
  else {
    sum = 1.0 / i + sumFraction(i - 1);
    return sum;
  }
}

//Function scope
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void foo();

int addOne(int n);

int addOneStatic(int n);

//Declaring a global variable
int x = 10;

int main(void) {

  //Prints global varible as no other varibles of x where declared in the function yet
  printf("%d\n", x);

  //Function scope, uses the value decalared in the smaller scope
  int x = 100;
  printf("%d\n", ++x);

  //Block scope, uses the varible inside the for loop
  for (int x = 0; x < 10; x++){
    printf("%d\n", x);
    //Still only prints global varible
    foo();
  }

  //Uses the varible declared in the fuction since it is outside of the loop
  printf("%d\n", ++x);

  //Prints the global variable as that is the only value of x that the function is aware of
  foo();

  int i = 0;

  while (i < 10) {
    printf("addOne Function returns %d\n", addOne(i));
    i++;
  }

  int c = 0;

  while (c < 10) {
    printf("addOneStatic Function returns %d\n", addOneStatic(c));
    c++;
  }

  return 0;

}

void foo() {
  printf("%d\n", x);
}

int addOne(int n) {

  int result = 1;
  result += n;

  return result;
}

int addOneStatic(int n) {

  //Static varibles are remebered even when you exit out of the function, were as none static varibles are deleted when the function is exceted
  static int result = 1;

  result += n;

  return result;
}

//Arrays
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Arrays can only store data of the same time, ie it can't store both charecters and integers in the same array
//The first element of an array is always the 0th elemement

int main(void) {

  int c1[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int c2[] = {10};


  for (int i = 0; i < 10; i++) {
    printf("%d\n", c1[i]);
  }

  int temp = 10;
  for (int i = 0; i < 10; i++) {
    c2[i] = temp;
    printf("%d\n", c2[i]);
    temp+=10;
  }

  for (int i = 0; i < 10; i++) {
    c2[i - 1] = i * 10;
    printf("%d\n", c2[i]);
  }

  return 0;

}
