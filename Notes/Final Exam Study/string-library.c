#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

  char str1[12] = "I Love You";
  char str2[12];
  char str3[2];

  printf("%s\n", strcpy(str2, str1));
  printf("%s\n", str1);
  printf("%s\n", str2);
  strncpy(str3, str1, sizeof(str3));
  printf("%s\n", str3);

  printf("%lu\n", strlen(str1));
  printf("%lu\n", strlen(str2));
  printf("%lu\n", strlen(str3));

  int count = 0;

  for(int i = 0; i < 12; i++) {
    if(isupper(str1[i])) {
      count++;
    }
  }
  printf("%d\n", count);

  for(int i = 0; i < 12; i++) {
    str1[i] = toupper(str1[i]); 
  }
  printf("%s\n", str1);

  for(int i = 0; i < 12; i++) {
    str1[i] = tolower(str1[i]); 
  }
  printf("%s\n", str1);

  char c = 'C';
  putchar(c);

  puts("");

  putchar(str1[2]);

  puts("");

  char f;

  puts("please enter a char");
  f = getchar();

  printf("%c\n", f);

  char str4[50] = "Love You So Much";
  char str5[50] = "You make me ";

  strcat(str5, str4);

  printf("%s\n", str5);

  if(strcmp(str4, str5) < 0) {
    puts("str5 is less then str4");
  }
  else {
    puts("str4 is less then str5");
  }



  return 0;
}