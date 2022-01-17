#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define SIZE 100

int main() {

  int count = 0, strL;

	char str[SIZE];
  char searchStr[SIZE];

  //Asking the user to input a string and using scanf to collect it
	printf("Please enter a string: ");
	scanf("%[^\n]%*c", str);

  //Asking the user to input a search term and using scanf to collect it
  printf("Enter the search string: ");
	scanf("%[^\n]%*c", searchStr);

  puts("");

  //Collecting the length of the string to use in for loop
  strL = strlen(str);

  //For loop that runs through ever element of the array
  for(int i = 0; i < strL; i++) {
    //If statement using strstr to detect if the search term is found in the inputed string, if so add 1 to the count for every time it appears
    if(strstr(str + i, searchStr) == str + i) {
      count++;
    }
  }

  //Printing out the result
  printf("The total occurances of \"%s\" in the text is %d", searchStr, count);

	return 0;

}
