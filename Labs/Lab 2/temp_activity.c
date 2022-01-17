#include <stdio.h>

// Main function
int main() {

  //Declaring my varible
  int temp;

  //Prompting to enter value and accepting value
  printf("Enter a temperature\n");
  scanf("%d", &temp);

  //Checking the value of the entered number and chacking against diffrent rules and printing the proper outcome
  if (temp >= 80) {
    printf("Swimming");
  }
  else if (temp <= 79 && temp >= 60){
    printf("Soccer");
  }
  else if (temp <= 59 && temp >= 40){
    printf("Vollyball");
  }
  else if (temp <= 39){
    printf("Skiing");
  }

}
