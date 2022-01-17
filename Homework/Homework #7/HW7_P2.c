#include<stdio.h>
#include<stdlib.h>

#define SIZE 7

void printArray(int argv[], int size);

int main () {

  int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7};

  //Calls the function with the array from above being passed thorugh as well as the size of said array
  printArray(arr, SIZE);

  return 0;

}

//The decliration of the recursive function
void printArray(int arr[], int size) {

  int answer;

  static int count = 0;

  //Checks to see if the size of the area is 0
  if(size <= 0) {
    return;
  }

  //Uses recursion to count down the size and print out every element of the array as it counts
  else {
    printf("%d ", arr[count]);
    count++;
    printArray(arr, size - 1);
  }

}
