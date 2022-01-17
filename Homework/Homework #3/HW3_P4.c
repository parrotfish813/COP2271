#include <stdio.h>

// Main function
int main() {

  char o;

  int num1;
  int num2;
  int answer;

  printf("Enter an operation\n");
  scanf("%c", &o);

  printf("Enter two numbers\n");
  scanf("%d", &num1);
  scanf("%d", &num2);

  if (o == '*') {
    answer = num1 * num2;
    printf("%d%c%d=%d",num1, o, num2, answer);
  }
  else if (o == '+') {
    answer = num1 + num2;
    printf("%d%c%d=%d",num1, o, num2, answer);
  }
  else if (o == '-') {
    answer = num1 - num2;
    printf("%d%c%d=%d",num1, o, num2, answer);
  }
  else if (o == '/') {
    answer = num1 / num2;
    printf("%d%c%d=%d",num1, o, num2, answer);
  }
  else {
    printf("Not a valid operation");
  }

}
