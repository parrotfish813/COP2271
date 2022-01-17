//Basic String info
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {

  //Strings start out having space to store 6 charecters
  char string1[] = "First";

  //Use %s to print strings
  printf("%s\n", string1);

  //You can store charecters in a string like numbers in an array
  char string2[] = {'f', 'i', 'r', 's', 't', '\0'};

  //Use %c and the number cell you want to call upon specific charecters
  printf("%c\n", string2[3]);

  char string3[20];

  //No & to scan in strings
  scanf("%19s", string3);
  printf("%s", string3);

  return 0;
}

//Entering Strings
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define SIZE 20

int main(void) {

  char string1[SIZE];
  char string2[] = "String Iteral";

  puts("Enter a string (No longer then 19 charecters");
  scanf("%s", string1);

  printf("string1 is: %s\nstring2 is: %s\n", string1, string2);

  for(size_t i = 0; i < SIZE && string1[i] != '\0'; ++i) {
    printf("%c ", string1[i]);
  }

  puts("");

  return 0;
}

//Constants
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void tryToModifyArray(const int b[]);

int main(void) {

  printf("%d", tryToModifyArray(10));

  return 0;
}

void tryToModifyArray(const int b[]) {

  //Can't edit constants
  b[0] /= 2;
  b[1] /= 2;
  b[2] /= 2;

}

//Diffrent was of printing string, as well as sorting strings
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define SIZE 50

int strSize(char str[], int size);

int main(void) {

  int a = 5;
  int b = 10;
  int temp;

  temp = b; //Temp is 10
  b = a;  //b = 5
  a = temp; //a = 10

  char str[SIZE] = "asdgtesfafergtshdfdsgr";

  puts("Your string is:");

  printf("%s\n", str);

  for(size_t i = 0; i < SIZE; ++i) {
    printf("%c ", str[i]);
  }
  puts("");

  char tempch;
  tempch = str[0];
  str[0] = str[6]; // First letter is now W
  str[6] = str[10]; // H is the first letter of the second word
  str[6] = tempch;

  for(size_t i = 0; i < SIZE; ++i) {
    printf("%c ", str[i]);
  }
  puts("");

  int stringSize = strSize(str, SIZE);

  for(int pass = 1; pass < stringSize; pass++) {
    //Left element is greater then the right - exchange
    for(int i = 0; i < stringSize - 1; i++) {
      if(str[i] > str[i + 1]) {
        char temp = str[i];
        str[i] = str[i + 1];
        str[i + 1] = temp;
      }
    }
  }

  printf("%s\n", str);

  return 0;
}

int strSize(char str[], int size) {

  for( int i = 0; i < size; i++) {
    if(str[i] == '\0') {
      return i;
    }
  }
  return -1;
}
