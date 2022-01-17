#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define SIZE 100

//Prototyping my 2 functions
size_t stringLengthIndex(const char* sPtr);
size_t stringLengthPointers(const char* sPtr);

int main() {

  char str[SIZE];

  //Prompting the user to input a string and using scanf to collect the string
  printf("Please enter a string: ");
  scanf("%[^\n]%*c", str);

  //printing out the returned value from both of the functions
  printf("According to stringLengthIndex the string length is: %zu\n",stringLengthIndex(str));
  printf("According to stringLengthPointers the string length is: %zu\n", stringLengthPointers(str));

  return 0;

}

size_t stringLengthIndex(const char* sPtr) {

  size_t c = 0;

  //Using for loop to check every element of the array and adding 1 to the counter for every element
  for(size_t i = 0; sPtr[i] != '\0'; i++) {
    c++;
  }

  //Returning the lenght of the string
  return c;

}

size_t stringLengthPointers(const char* sPtr) {

  size_t c = 0;

  //Using a while loop and pointer arithmatic to cycle through the user inputed string and adding 1 to a counter for every element
  while(*sPtr != '\0') {

    ++c;

    sPtr++;
  }

  //Returning the length of the string
  return c;

}
