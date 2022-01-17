#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main(void) {

  int arr[SIZE];

  //Fills the array with random values
  for(int i = 0; i <= 100; i++) {
    arr[i] = 1 + rand() % 1000;
  }

  puts("Element \t Value");

  //Finds every 5th element and prints it out
  for(int i = 5; i <= 100; i += 5) {
    printf("%5d", i);
    printf("%12d\n", arr[i]);
  }

  return 0;

}
