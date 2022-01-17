#include <stdio.h>

void swap(int a, int b);
void swap_pointers(int *aPrt, int *bPtr);

int main(void) {

  int a = 7, b = 99;

  //Assign the address of a to aPtr
  int *aPtr = &a;

  //General prining of pointers
  printf("The address of a is %p\n", &a);
  printf("The value of aPtr is %p\n", aPtr);
  printf("The value of a through aPtr is %d\n", *aPtr);

  puts("");

  //Passing by value
  printf("Before swap a is %d and b is %d\n", a, b);
  swap(a, b);
  printf("After swap a is %d and b is %d\n", a, b);

  puts("");

  //Passing by referance
  printf("Before swap a is %d and b is %d\n", a, b);
  swap_pointers(&a, &b);
  printf("After swap a is %d and b is %d\n", a, b);


  return 0;
}

//Trying to swap values using values
void swap(int a, int b) {

  int temp = a;
  a = b;
  b = temp;

}

//Swapping values using pointers
void swap_pointers(int *aPtr, int *bPtr){

  int temp = *aPtr;
  *aPtr = *bPtr;
  *bPtr = temp;

}

#include <stdio.h>

void set_default_values(int *aPtr, int *bPtr);

int add_two_numbers(int *nPtr, int *mPtr);

void make_prime(int *numPtr);


int main(void) {

  int a, b;
  int n = 100, m = 200;
  int num = 15;

  set_default_values(&a, &b);
  printf("Your default value for a is %d\n", a);
  printf("Your default value for b is %d\n", b);

  puts("");

  printf("The sum of your 2 values is %d\n", add_two_numbers(&n, &m));

  puts("");

  make_prime(&num);

  return 0;
}

void set_default_values(int *aPtr, int *bPtr) {

  *aPtr = 1;
  *bPtr = 2;

}

int add_two_numbers(int *nPtr, int *mPtr) {

  int sum;
  sum = *nPtr + *mPtr;

  return sum;

}

void make_prime(int *numPtr) {

  int flag = 0;

  for (int i = 2; i <= *numPtr / 2; ++i) {
    if(*numPtr % i == 0) {
      flag = 1;
      break;
    }
  }
  if(*numPtr == 1) {
    puts("1 is neither prime nor composite");
  }
  else {
    if(flag == 0) {
      printf("%d is a prime number\n", *numPtr);
    }
  }
}

//Pointers for arrays
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 50

int main(void) {

  srand(time(0));

  int arr[SIZE];
  int *arrPtr = arr;

  printf("The address of the first element of the array is %p\n", &arr[0]);
  //The address of an array is the same as the first element of the array
  printf("The address of the first element of the array is %p\n", arr);
  printf("The address of the second element of the array is %p\n", arr + 1);

  puts("");

  //Initalizing array with random numbers
  for(int i = 0; i < SIZE; i++){
    arr[i] = rand() % 100 + 1;
  }

  printf("The value of the first element of the array is %d\n", *arr);
  printf("The value of the second element of the array is %d\n", *(arr + 1));

  for(int i = 0; i < SIZE; i++) {
    printf("%d\t", *(arr + i));
  }

  return 0;
}

//Pointers in charecter arrays
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 27

int main(void) {

  srand(time(0));

  char alph[SIZE] = "a";
  char *alphPtr = alph;
  int count = 0;

  for( char i='a'; i<='z'; i++) {
    alph[count] = i;
    count++;
  }

  for(int i = 0; i < SIZE; i++) {
    printf("%c\t", *(alphPtr + i));
  }

  puts("");

  for(int i = 0; i < SIZE; i++) {
    printf("%c\t", *(alph + i));
  }

  puts("");

  printf("The fifth letter of the alphebet is %c\n", *(alph + 4));

  return 0;
}
