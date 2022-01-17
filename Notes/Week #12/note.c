#include <stdio.h>
#include <string.h>

#define SIZE 100

int main() {

  char str1[SIZE] = "String one";
  char str2[SIZE] = "Second string";

  strcpy(str1, SIZE - 1, str2);

  puts(str1);

  strcat(str1, SIZE - strlen(str1), str2);

  puts(str1);


  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define SIZE 4

int main() {

  char str1[SIZE] = "abc";
  char str2[SIZE] = "abd";
  int chrsToCompare = 0;

  puts("How many charecters should be compared");
  scanf("%d", &chrsToCompare);

  int result = memcmp(str1, str2, chrsToCompare);

  if(result > 0) {
    puts("The first string is greater then the second string");
  }
  else if(result < 0) {
    puts("The first string is less then the second string");
  }
  else {
    puts("The strings are equal");
  }

  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define SIZE 4

int main() {

  char str1[SIZE] = "abc";
  char str2[SIZE] = "abd";

  int arr1[] = {1, 2, 3, 4};
  int arr2[] = {1, 2, 5, 4};

  int chrsToCompare = 0;

  puts("How many charecters should be compared");
  scanf("%d", &chrsToCompare);

  int result = memcmp(arr1, arr2, chrsToCompare * sizeof(arr1(0)));

  if(result > 0) {
    puts("The first string is greater then the second string");
  }
  else if(result < 0) {
    puts("The first string is less then the second string");
  }
  else {
    puts("The strings are equal");
  }

  return 0;
}
