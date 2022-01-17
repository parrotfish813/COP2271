#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define SIZE 100

int main() {

	char str[SIZE];
	int letter = 0;
	int digit = 0;

  //Asking the user to input a string and using fgets to collect the input
	puts("Please enter a string");
	fgets(str, SIZE-1, stdin);

  //for loop that runs though the entire string until it hits the null charecter at the end
	for (int i = 0; str[i] != '\0'; i++) {
    //Checking each element to see if its a letter and then adding 1 to the count if it is
		if (isalpha(str[i])) {
			letter++;
		}
    //Checking each element to see if its a digit and then adding 1 to the count if it is
		else if (isdigit(str[i])) {
			digit++;
		}
	}

  //Printing the results
	printf("Number of Letters: %d\n", letter);
	printf("Number of Digits: %d\n", digit);

	return 0;
}
