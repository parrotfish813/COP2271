#include <stdio.h>

int main(void) {

   //More secure then printf
   puts("Enter number here:");

   // %s is the string equivalent to %d
   printf("%s", "Enter the number:");

// C offers three adjective keywords to modify the basic integer type short, long, unsinged
   // the type short may use less storage then int
   // the type long may use more storage then int
   // the type lomg long may use more storage the long
   // the type unsigned is used for only none negative numbers

  // Short -32000 - 32000
  // unsigned 0 - 50000

  // short is 16 bits
  // int 16 or 32 bits
  // long 32 bits
  // long long 64 bits

  //floating point numbers allows you to represent a much greater range of numbers
  //Types of floats: float, double, long double

}

#include <stdio.h>

int main(void) {

  unsigned unNum = 0;

  unNum = unNum - 2;

  // printing negative number
  printf("%d\n", -123);

  // prinitng unsigned number
  // Can't be negative
  printf("%u\n", unNum);

  // Representing numbers in decimal, octal, and Hexadecimal form
  printf("Decimal: %d; Octal: %o, Hexadecimal: %x\n", 100, 100, 100);

  double d = 12345.32423;
  printf("%f\n", d);
  //Scientific notation with small e
  printf("%e\n", d);
  // Scientific notation using big E
  printf("%E\n", d);
  // Prints in exponential notation
  printf("%g\n", d);

  //Controlling the print feild
  int num = 100;
  printf("%6d\n", num);
  printf("%-6d\n", num);

  // Rounding to 3 digets
  printf("%9.3f \n", 123.456789);

  printf("%-15.8u \n", 40000);

  printf("%o \n", 100);

  //Prints in scienific notation and the + shows it's positive, - can show it as negative
  printf("%+.3e \n", 123.456789);

  // Cannot print floats with int conversion values
 // printf("%d \n", 10.987);

  return 0;

}

#include <stdio.h>

int main(void) {

  int kilo1;
  int kilo2;

  int lb1;
  int lb2;

  printf("Enter two integer weights in kilo: \n");
  scanf("%d", &kilo1);
  scanf("%d", &kilo2);

  printf("Enter two integer weights in pounds: \n");
  scanf("%d", &lb1);
  scanf("%d", &lb2);

  printf("Kilograms\tPounds    Pounds\tKilograms \n");

  float lb3 = kilo1 * 2.2;
  float lb4 = kilo2 * 2.2;

  float kilo3 = lb1 / 2.2;
  float kilo4 = lb2 / 2.2;

  printf("%6d %10.2f %10d %10.2f \n", kilo1, lb3, lb1, kilo3);
  printf("%6d %10.2f %10d %10.2f", kilo2, lb4, lb2, kilo4);

  return 0;
}
