#include <stdio.h>

int main() {

  int sum=0, n, i;

  puts("Enter a number");
  scanf("%d", &n);

  ///Using a for loop the code checlsif the entered number is less then or equal to i, then adds 1 to i
  for (i = 0; i <= n; i++) {

  //If the number is divisible by 5, add that number to a new sum integer
    if (i % 5 == 0) {
      sum+=i;
    }
  }

  printf("The sum is %d\n", sum);

  return 0;

}
