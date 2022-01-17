#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 4

//Prototyping my function with delcaring my pointer
void averageValue(int *aPtr);

int main(void) {

  srand(time(NULL));

  int arr[SIZE];

  //Assiging values to the array
  for(int i = 0; i <= SIZE; i++) {
    arr[i] = 1 + rand() % 11 + 1;
  }

  //Priting the array
  for(int i = 0; i < SIZE; i++) {
    printf("%d\t", arr[i]);
  }

  puts("");

  averageValue(arr);

  return 0;
}

void averageValue(int *aPtr) {

  float sum = 0;
  float average = 0;

  //Fidind the sum of the array using the addresses of each element
  for(int i = 0; i < SIZE; i++) {
    sum += *(aPtr + i);
  }

  //Fidning the average
  average = sum / SIZE;

  printf("The average of the array is %.2f", average);

}
