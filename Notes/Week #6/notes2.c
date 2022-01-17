//Finding the greatest number
#include <stdio.h>
#include <stdlib.h>

int maximum(int x, int y, int z) {

    int max = x;

    if (y > max) {
      max = y;
    }

    if (z > max) {
      max = z;
    }

    return max;

}

int main(void) {

  int x, y, z;

  puts("Please enter 3 numbers");
  scanf("%d", &x);
  scanf("%d", &y);
  scanf("%d", &z);

  if (x == y && y == z && x == z) {
    printf("All the numbers are the same.");
  }

  else {
    printf("The largest of your numbers is %d", maximum(x, y, z));
  }

  return 0;

}

//Squaring a numbers#include <stdio.h>
#include <stdlib.h>

int square(int x);

int main(void) {

  int a;

  puts("Please enter a number");
  scanf("%d", &a);

  printf("%d squared: %d", a, square(a));

  return 0;

}

int square(int x){
  return x * x;
}
