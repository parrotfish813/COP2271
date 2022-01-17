//Rows and columes printer
#include <stdio.h>

int main() {

  int Nrows, Ncolumes;

  puts("Enter the number of rows and columes");
  scanf("%d %d", &Nrows, &Ncolumes);

  for (int i = 0; i < Nrows; i++){
    for (int n = 0; n < Ncolumes; n++) {
      printf("%c", '+');
    }
    puts("");
  }

  return 0;

}

// Decreasing rows
#include <stdio.h>

int main() {

  int Nrows, Ncolumes;

  puts("Enter the number of rows and columes");
  scanf("%d", &Nrows);

  for (int i = 0; i < Nrows; i++){
    for (int n = i; n < Nrows; n++) {
      printf("%c", '+');
    }
    puts("");
  }

  return 0;

}

//sqrt function
#include <stdio.h>
#include <math.h>

int main() {

  float num;

  puts("Enter a number");
  scanf("%f", &num);

  printf("%.2f", sqrt(num));

  return 0;

}

//Other math functions
#include <stdio.h>
#include <math.h>

int main() {

  float num, pi = 3.14;

  puts("\tx\t  sin(x)  cos(x)  tan(x)  exp(x)");
  puts("----------------------------------------");

  for (float i = -3.14; i < pi; i+=pi/5) {
    printf("%7.2f\t%7.2f\t%7.2f\t%7.2f\t%7.2f\n", i, sin(i), cos(i), tan(i), exp(i));
  }


  return 0;

}

//Pick a number game
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {

  srand(time(NULL));
  int i = 1;
  int r = rand() % 21;
  int n;

  puts("Enter a number between 1 and 20");
  scanf("%d", &n);

  while (i-- > 0) {

    printf("The number is %d\n", r);

    if (r == n) {
      puts("Good Job");
      return 0;
    }
    else {
      puts("Try again");
    }
  }

  return 0;

}
