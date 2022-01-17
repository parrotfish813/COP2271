#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

void printArray(int arr[], size_t size);

int main(void) {

  int arr[SIZE];

  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;


  for (size_t i = 0; i < SIZE; i++) {
    printf("%d\n", arr[i]);
  }

  printArray(arr, SIZE);

  return 0;

}

void printArray(int arr[], size_t size) {

  printf("%7s%10s\n", "Element", "Value");
  for (size_t i = 0; i < size; i++) {
    printf("%7zu%10d\n", i, arr[i]);
  }

}
