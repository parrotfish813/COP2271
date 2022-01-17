#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void countdown(int number);
void print(char ch, int n);

int power(int base, int exponent);
int power_recursive(int base, int exponent);

void LeasttoMost(int number);
void MosttoLeast(int number);

int main(void) {

  //countdown(20);

  //print('C', 5);

  //printf("%d", power(5, 2));

  //printf("%d\n", power_recursive(32, 2));

  LeasttoMost(235);

  return 0;

}

void countdown(int number) {
  printf("%d\n", number);
  if (number <= 1) {
    return;
  }
  else {
    countdown(number - 1);
  }
}

void print(char ch, int n) {
  if (n <= 0){
    return;
  }
  else {
    printf("%c\n", ch);
    print(ch, n - 1);
  }
}

int power(int base, int exponent) {
  int answer = 1;
  for (int i = 0; i < exponent; i++) {
    answer *= base;
  }
  return answer;
}

int power_recursive(int base, int exponent) {
  if (exponent == 0) {
    return 1;
  }
  else {
    int answer = base * power_recursive(base, exponent - 1);
    return answer;
  }
}

void LeasttoMost(int number) {
  if (number <= 0) {
    return;
  }
  else {
    printf("%d\t", number % 10);
    LeasttoMost(number / 10);
  }
}

void MosttoLeast(int number) {

  int r;

  if (number <= 0) {
    return;
  }
  else {
    r = number % 10;
    LeasttoMost(number / 10);
    printf("%d ", r);
  }
}
