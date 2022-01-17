// switch and break
#include <stdio.h>

int main() {

  char ch;

  do {
    puts("Enter the charecter");
    scanf(" %c", &ch);

    switch (ch) {
      case 'A':
          puts("You entered A");
              break;
      case 'B':
          puts("You entered B");
              break;
      case 'C':
          puts("You entered C");
              break;
      default:
          puts("There is no such option");
      }
  } while(ch != 'A' && ch!= 'B' && ch != 'C');
}

//continue
#include <stdio.h>

int main() {

  for (unsigned int x = 1; x <= 10; ++x) {

    if (x == 5){
      continue;
    }
    printf("%u\n", x);
  }
  printf("Used continue to skip priniting the value");
}
