#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void sumOfDiagonals();

int main() {

  srand(time(0));

  sumOfDiagonals();

  return 0;
}

//Function returning sum of diagonals
void sumOfDiagonals() {

  int n;

  do{
    puts("Please enter the desigered size of your array");
    scanf("%d",&n);
  } while(n<=0);

  int A[n][n];

  //Fills the array with random numbers between -50 and 50
  for(int i = 0; i < n; i++) {
    for(int c = 0; c < n; c++) {
      A[i][c] = rand() % 101 - 50;
    }
  }

  //Prints each element of the array
  for(int i = 0; i < n; i++) {
    for(int c = 0; c < n; c++) {
      printf("%d\t", A[i][c]);
    }
    puts("");
  }

  int sum = 0;

  //Finds the sum of the first diagonal
  for(int i = 0; i < n ; i++) {
    sum+=A[i][i];
  }

  //The if and else if statments find the second diagonal elements and adds it to the sum.
  if(n > 1 && n % 2 == 0) {
    for(int i = 0; i < n; i++){
      sum += A[i][n - i - 1];
    }
  }

  else if(n > 1){
    for(int i = 0; i < n; i++){
      if(i != ((n-1) / 2)) {
        sum += A[i][n - i - 1];
      }
    }
  }

  printf("\nThe sum of diagonals of array is: %d", sum);

}
