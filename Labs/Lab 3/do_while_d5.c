#include <stdio.h>

int main() {

  int sum=0, n, i=0;

  puts("Enter a number");
  scanf("%d", &n);

  //Using a do while loop the code checls if the entered number is less then or equal to i, then adds 1 to i
  do {
    //If the number is divisible by 5, add that number to a new sum integer
    if (i % 5 == 0) {
      sum+=i;
    }
    i++;
  } while (i <= n);

  printf("The sum is %d\n", sum);

  return 0;

}
