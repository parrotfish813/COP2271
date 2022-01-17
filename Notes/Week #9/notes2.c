#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define ROW 10
#define COLUMN 10

int main(void) {

  srand(time(0));

  int arr2D[ROW][COLUMN] = {{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};

  //Storing data in 2D arrays
  for(int i = 0; i < ROW; i++) {
    for(int c = 0; c < COLUMN; c++) {
      arr2D[i][c] = rand() % 101;
    }
  }

  //Printing 2D arrays
  for(int i = 0; i < ROW; i++) {
    for(int c = 0; c < COLUMN; c++) {
      printf("%d\t", arr2D[i][c]);
    }
    puts("");
  }
  puts("");

  //Changing only the first row of data
  for(int i = 0; i < COLUMN; i++) {
    arr2D[0][i] = 0;
  }

  //Chaniging only the first column of data
  for(int i = 0; i < ROW; i++) {
    arr2D[i][0] = 0;
  }

  //Printing 2D arrays
  for(int i = 0; i < ROW; i++) {
    for(int c = 0; c < COLUMN; c++) {
      printf("%d\t", arr2D[i][c]);
    }
    puts("");
  }

  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define ROW 5
#define COLUMN 5

int main(void) {

  int arr2D[ROW][COLUMN];
  int temp = 1;

  for(int i = 0; i < ROW; i++) {
    for(int j = 0; j < COLUMN; j++) {
      arr2D[i][j] = temp;
      temp++;
    }
  }

  //Printing 2D arrays
  for(int i = 0; i < ROW; i++) {
    for(int c = 0; c < COLUMN; c++) {
      printf("%d\t", arr2D[i][c]);
    }
    puts("");
  }

  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define ROW 5
#define COLUMN 5

int main(void) {

  int arr2D[ROW][COLUMN];
  int temp = 1;

  for(int i = 0; i < ROW; i++) {
    for(int j = 0; j < COLUMN; j++) {
      arr2D[i][j] = temp;
      temp++;
    }
  }

  //Printing 2D arrays
  for(int i = 0; i < ROW; i++) {
    for(int c = 0; c < COLUMN; c++) {
      printf("%d\t", arr2D[i][c]);
    }
    puts("");
  }

  puts("");


  //Changing specific elements of the array
  arr2D[1][3] = 24;
  arr2D[0][2] = 13;

  //Printing 2D arrays
  for(int i = 0; i < ROW; i++) {
    for(int c = 0; c < COLUMN; c++) {
      printf("%d\t", arr2D[i][c]);
    }
    puts("");
  }


  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define ROW 6
#define COLUMN 6

int main(void) {

  int arr2D[ROW][COLUMN];
  int temp = 1;
  int sum = 0;

  for(int i = 0; i < ROW; i++) {
    for(int j = 0; j < COLUMN; j++) {
      arr2D[i][j] = temp;
      temp++;
      sum = sum + j;
    }
    arr2D[i][5] = sum;
  }

  //Printing 2D arrays
  for(int i = 0; i < ROW; i++) {
    for(int c = 0; c < COLUMN; c++) {
      printf("%d\t", arr2D[i][c]);
    }
    puts("");
  }


  return 0;
}

//Fuck pointers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {

  int a = 10;
  int *aPtr = &a;

  printf("The value of a is: %d\n", a);
  printf("The address of the varible a is: %p\n", &a);
  a += 100;

  printf("The value of aPtr is: %p\n", aPtr);
  printf("The value where aPtr is pointing to is: %d\n", *aPtr);

  return 0;
}
