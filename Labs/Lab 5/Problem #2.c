#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 11

void printArrayReverse(float num[], size_t size);

int main(void) {

  float num[SIZE];
  float value = 1.0;

  for (int i = 0; i < 11; i++) {
    num[i] = value;
    value += 0.1;
  }

  printArrayReverse(num, SIZE);

  return 0;

}

void printArrayReverse(float num[], size_t size) {

  printf("%7s%10s\n", "Element", "Size");

  for (int i = SIZE - 1; i >= 0; i--) {
    printf("%4d%13.2f\n", i, num[i]);
  }

}
