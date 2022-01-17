#include <stdio.h>

// Main function
int main() {

  int myNumber;
  int yourNumber;

  puts("Enter your number");
  scanf("%d", &myNumber);

  //Conditional statements, using ? and : instead of if else statements
  yourNumber = (myNumber >= 5) ? myNumber - 6 : myNumber + 1;
    printf("%d\n", yourNumber);

  return 0;

}

#include <stdio.h>

// Main function
int main() {

  unsigned int counter = 0;

  while (++counter <= 10) {
    printf("%u\n", counter);
  }

  return 0;

}

#include <stdio.h>

// Main function
int main() {

  unsigned int counter = 0;

  while (counter <= 10) {
    printf("%u\n", ++counter);
  }

  return 0;

}

#include <stdio.h>

// Main function
int main() {

  unsigned int counter = 1;

  while (counter <= 10) {
    printf("%u\n", counter++);
  }

  return 0;

}

#include <stdio.h>

// Main function
int main() {

  //count the sum of numbers in the range
  int n;
  int sum = 0;

  puts("Enter the range of numbers");
  scanf("%d", &n);

  //if the number is negative -> assign it to 1
  n = (n <= 0) ? 1 : n;

  while (n >= 1) {
    sum += n;
    n--;
  }

  printf("%d\n", sum);

  return 0;

}

#include <stdio.h>

// Main function
int main() {

  //count the sum of numbers in the range
  int n;
  int sum = 0;

  puts("Enter the range of numbers");
  scanf("%d", &n);

  //if the number is negative -> assign it to 1
  n = (n <= 0) ? 1 : n;

  //While loop method
  while (n >= 1) {
    sum += n;
    n--;
  }

  printf("%d\n", sum);

  puts("Enter the range of numbers");
  scanf("%d", &n);
  sum = 0;

  //For loop with counter varible
  for (int counter = 1; counter <= n; counter++){
    sum += counter;
  }

  printf("%d\n", sum);

  sum = 0;
  //for loop without counter varible
  for(; n >= 1; n--) {
    sum += n;
  }

  printf("%d\n", sum);

  return 0;

}

#include <stdio.h>

// Main function
int main() {

  for (int n = 15; n <= 45; n += 5) {
    printf("%d\n", n);
  }

  return 0;

}

#include <stdio.h>

// Main function
int main() {

  for (int n = 2; n <= 22; n += 4) {
    printf("%d\n", n);
  }

  return 0;

}

#include <stdio.h>

// Main function
int main() {

  for (int n = 2; n <= 100; n++) {
    printf("%d\n", n);
  }

  return 0;

}

#include <stdio.h>

// Main function
int main() {

  int input;

  //do while loops
  do {
    puts("Enter the number");
    scanf("%d", &input);
  } while (input < 100);

  return 0;

}

#include <stdio.h>

// Main function
int main() {

  char c;
  int num;

  puts("Please enter a charecter");
  scanf("%c", &c);
  puts("Please enter how many times you want the charecter printed");
  scanf("%d", &num);

  for (; num > 0; num--){
    printf("%c\n", c);
  }

  return 0;

}
