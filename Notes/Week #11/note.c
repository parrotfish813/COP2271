#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

#define SIZE 100

int main() {

  char str[SIZE];
  puts("Please enter a string");
  fgets(str, SIZE - 1, stdin);

  printf("strlen = %lu\n", strlen(str));
  str[strlen(str) - 1] = '\0';

  printf("strcpn = %lu\n", strcspn(str, "\n"));
  str[strcspn(str, "\n")] = '\0';

  if(strchr(str, '\n') != NULL) {
    printf("strchr %s", strchr(str, '\0'));
  }

  printf("The given string is \"%s\"", str);


  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define SIZE 100

bool isValidPassword(char *psw);

int main() {

  char psw[SIZE];

  do {

    puts("Please enter a valid password");
    fgets(psw, SIZE - 1, stdin);

    psw[strcspn(psw, "\n")] = '\0';

    isValidPassword(psw);

  } while(isValidPassword(psw) != true);


  return 0;
}

bool isValidPassword(char *psw) {

  bool letter = false;
  bool charecter = false;
  bool number = false;
  bool space = false;

  for(int i = 0; psw[i] != '\0'; i++) {
    if(isalpha(psw[i])) {
      letter = true;
    }
    else if(isdigit(psw[i])) {
      number = true;
    }
    else if(ispunct(psw[i])) {
      charecter = true;
    }
    else if(isspace(psw[i])) {
      space = true;
    }
  }

  if(letter == true && number == true && charecter == true && space == false) {
    return true;
  }
  else {
    return false;
  }

}
