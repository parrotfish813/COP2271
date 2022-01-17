//First custom function
#include <stdio.h>
#include <stdlib.h>

//<return sata type><function main><(parameter list)>

void courseName() {

  puts("You are in COP2271 course!");

}

int main() {

    int i = 10;

  while(i-- > 0) {
    courseName();
  }

    return 0;
}

//Sum counter function
#include <stdio.h>
#include <stdlib.h>

void sumRange(int start, int end) {

  int sum = 0;

    for(int i = start; i <= end; i++) {
        sum+=i;
    }
    printf("%d\n", sum);

}

int main() {

  int a, b;

  puts("Please enter 2 numbers");
  scanf("%d", &a);
  scanf("%d", &b);

  sumRange(1, 10);
  sumRange(10, 20);
  sumRange(20, 30);
  sumRange(a, b);

    return 0;
}

//Printing a rectangle
#include <stdio.h>
#include <stdlib.h>

//<return sata type><function main><(parameter list)>

void print_rectangle(int length, int width) {

  for(int i = width; i > 1; i--) {
    for(int j = length; j > 1; j--) {
      printf("*");
    }
      puts("*");
  }
}

int main() {

  int l;
  int w;

  puts("Please enter your length");
  scanf("%d", &l);
  puts("Please enter your width");
  scanf("%d", &w);

  print_rectangle(l, w);

  return 0;

}

//Printing hollow print_rectangle
#include <stdio.h>
#include <stdlib.h>

//<return sata type><function main><(parameter list)>

void print_rectangle(int length, int width) {

  for(int i = 1; i <= width; i++) {
    for(int j = 1; j <= length; j++) {
      if (i == 1 || i == width || j == 1 || j == length) {
        printf("*");
      }
      else {
        printf(" ");
      }
    }
    puts("");
  }
}

int main() {

  int l;
  int w;

  puts("Please enter your length");
  scanf("%d", &l);
  puts("Please enter your width");
  scanf("%d", &w);

  print_rectangle(l, w);

  return 0;

}
