#include <stdio.h>

int sumOfRange(int start, int end);

int main(void) {

  int start, end, sum;

  puts("Enter the start of the range:");
  scanf("%d", &start);
  puts("Enter the end of the range:");
  scanf("%d", &end);

  sum = sumOfRange(start, end);

  printf("The sum of numbers in range is %d", sum);

  return 0;

}

int sumOfRange(int start, int end) {

  if (start == end) {
    return start;
  }

  else {
    return start + sumOfRange(start + 1, end);
  }

}
