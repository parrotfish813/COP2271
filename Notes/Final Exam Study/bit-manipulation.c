#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void displayBits(unsigned int ch);
bool isOnBit(unsigned char ch, int pos);

int main() {

    char ch1 = 2, ch2 = 5;
  //ch1 0000 0010
  //ch2 0000 0101

  char ch3 = 3, ch4 = 5;
  //ch3 0000 0011
  //ch4 0000 0101

  char ch5 = 3, ch6 = 13;
  //ch3 0000 0011
  //ch4 0000 1101

  printf("bitwise & is %d\n", ch1 & ch2);

  printf("bitwise & is %d\n", ch3 & ch4);

  printf("bitwise & is %5.3d\n", ch3 & ch4);

  printf("bitwise & is %*.*d\n", 7, 5, ch3 & ch4);

  printf("bitwise | is %*.*d\n", 7, 5, ch3 | ch4);

  printf("bitwise | is %*.*d\n", 7, 5, ch5 | ch6);

  printf("bitwise << is %*.*d\n", 7, 5, ch5 << 1);

  printf("bitwise >> is %*.*d\n", 7, 5, ch5 >> 1);

  displayBits(ch3);
  displayBits(ch6);
  displayBits(ch3 & ch6);

  puts("");

  int ch;
  int pos;

  puts("Please enter a value");
  scanf("%d", &ch);
  puts("Please enter a position");
  scanf("%d", &pos);

  puts("");
  
  printf("The binary value for %c is ", ch);
  displayBits(ch);

  puts("");

  if(isOnBit(ch, pos) == false) {
    printf("The bit at position %d is %d", pos, 0);
  }

  else if(isOnBit(ch, pos) == true) {
    printf("The bit at position %d is %d", pos, 1);
  }
  

    return 0;
}

void displayBits(unsigned int ch) {

  unsigned char mask = 128;

  for(int i = 0; i < 8; i++){
    if((ch & mask) == 0) {
      putchar('0');
    }
    else {
      putchar('1');
    }
    ch = ch << 1;
  }
  putchar('\n');

}

bool isOnBit(unsigned char ch, int pos) {

  unsigned char mask = 1;

  mask <<= pos;

  if((ch & mask) == 0) {
    return false;
  }
  else {
    return true;
  }

  }