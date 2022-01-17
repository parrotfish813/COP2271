#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void luckyNumber();

int main () {

  srand(time(NULL));

  return 0;

}

//this is recursive function declration and defination
void luckyNumber(int argv[], int size) {

  int n, m, element;

  puts("Please enter the number of rows you want in your array");
  scanf("%d", &n);
  puts("Please enter the number of columns you want in your array");
  scanf("%d", &m);

  int arr2D[n][m];

  do {

    element = rand() % 21 + 1;

    if(element != n) {
      if(element != m) {

      }
    }

  } while(m == n);

}
