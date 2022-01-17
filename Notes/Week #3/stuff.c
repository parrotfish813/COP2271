// char 

#include <stdio.h>

int main(void) {

  //Printing charecters
  char ch = 'A';

  printf("%c\n", 'B'); // B will be printed
  printf("%c\n", ch); // A will be printed
  printf("%d\n", ch); // 65 will be printed

  char input;

  puts("Enter the charecter");
  scanf("%c", &input);
  printf("The code for %c is %d\n", input, input);

  char input2;

  puts("Enter the charecter");
  scanf("%c", &input2);
  printf("The first charecter is %c and the second charecter is %c.\n", input, input2);

  return 0;

}

//Else if statements

#include <stdio.h>

int main(void) {

  char ch;

  puts("Enter the charecter");
  scanf("%c", &ch);

  // Else if statement
  if (ch >= 'A' && ch <= 'Z') {
    printf("This is an uppercase letter %c.\n", ch);
  }
  else if  (ch >= 'a' && ch <= 'z') {
    printf("This is an lowercase letter %c.\n", ch);
  }
  else if (ch >= '0' && ch <= '9') {
    printf("This is diget %c.\n", ch);
  }
  else {
     puts("This is not the letter nor the diget");
  }

  return 0;
}

// While loops

#include <stdio.h>

int main(void) {

  int counter = 0;

  while (counter < 100){
    printf("I love you!\n");
    counter = counter + 1;
  }

  return 0;
}

// More while Loops
#include <stdio.h>

int main(void) {

  int sum = 0;

  int number = 1;

  printf("Sum");
  printf("\tNumber\n");

  while (number <= 10){
    printf("%d", sum);
    printf("\t%d\n", number);
    sum = sum + number;
    number = number + 1;
  }

  return 0;
}
