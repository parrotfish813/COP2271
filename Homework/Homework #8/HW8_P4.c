#include <stdio.h>

void swap_pointers(int *aPrt, int *bPtr);

int main(void) {

  int a, b;

  puts("Please enter your first number");
  scanf("%d", &a);
  puts("Please enter your second number");
  scanf("%d", &b);

  //Passing by referance
  printf("Before swap a is %d and b is %d\n", a, b);
  swap_pointers(&a, &b);
  printf("After swap a is %d and b is %d\n", a, b);


  return 0;
}

//Swapping values using pointers
void swap_pointers(int *aPtr, int *bPtr) {

  int temp = *aPtr;
  *aPtr = *bPtr;
  *bPtr = temp;

}
