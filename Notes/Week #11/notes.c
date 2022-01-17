#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main() {

  char c = ' ';

  puts("Enter a charecter");
  //scanf("%c", &c);

  // Second way to scan a charecter
  c = getchar();

  printf("isblank(\'%c\') = %d\n", c, isblank(c));
  printf("isdigit(\'%c\') = %d\n", c, isdigit(c));
  printf("isalpha(\'%c\') = %d\n", c, isalpha(c));
  printf("isalnum(\'%c\') = %d\n", c, isalnum(c));
  printf("islower(\'%c\') = %d\n", c, islower(c));
  printf("isupper(\'%c\') = %d\n", c, isupper(c));
  printf("isspace(\'%c\') = %d\n", c, isspace(c));
  printf("iscntrl(\'%c\') = %d\n", c, iscntrl(c));
  printf("ispunct(\'%c\') = %d\n", c, ispunct(c));
  printf("isprint((\'%c\') = %d\n", c, isprint(c));
  printf("isgraph(\'%c\') = %d\n", c, isgraph(c));
  printf("toupper(\'%c\') = %c\n", c, toupper(c));
  printf("tolower(\'%c\') = %c\n", c, tolower(c));


  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main() {

  char str[] = "Hello COP2271!!!";

  puts("Prtinting the string with printf and %s");
  printf("%s\n\n", str);

  puts("Printing the string with the loop and printf");
  for(int i = 0; str[i] != '\0'; i++) {
    printf("%c", str[i]);
  }
  puts("\n");

  puts("Printing the string with the loop and printf (pointer/offset notation)");
  for(int i = 0; str[i] != '\0'; i++) {
    printf("%c", *(str + i));
  }
  puts("\n");

  puts("Printing the string with puts");
  puts(str);
  puts("\n");

  puts("Printing the string with the loop and putchar (pointer/offset notation)");
  for(int i = 0; str[i] != '\0'; i++) {
    putchar(*(str + i));
  }
  puts("\n");

  puts("Printing the string in upper case");
  for(int i = 0; str[i] != '\0'; i++) {
    putchar(toupper(str[i]));
  }
  puts("\n");

  puts("Printing the string with swapped cases");
  for(int i = 0; str[i] != '\0'; i++) {
    if(islower(str[i])) {
      putchar(toupper(str[i]));
    }
    else {
      putchar(tolower(str[i]));
    }
  }
  puts("\n");

  return 0;
}
