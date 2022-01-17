#include <stdio.h>

int main() {

  //It will not print anything as there is no {} next to the if statement

    int a, b, c;

    printf("Please enter 3 positive numbers\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    //Three if statements checking each checking if the sum of 2 of the inputs added is greater the thrid input
    if (a + b > c) {
      if (a + c > b) {
        if (b + c > a) {
          printf("This is a valid triangle");
        }
      }
    }
    //If the sum of the numbers isn't greater then all of the inputs, then this is executed 
    else {
      printf("This is not a valid triangle");
    }
}
