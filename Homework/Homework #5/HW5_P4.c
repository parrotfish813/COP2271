#include <stdio.h>
#include <math.h>

int main() {

   float a, b, c, d, r1, r2, r;

   puts("Please enter your a, b and c values.");
   scanf("%f", &a);
   scanf("%f", &b);
   scanf("%f", &c);

   d = pow(b, 2) - (4*a*c);

   if (d > 0) {
     r1 = (-b + sqrt(d))/(2*a);
     r2 = (-b - sqrt(d))/(2*a);
     printf("Your first root is %.2f and your second root is %.2f.", r1, r2);
   }
   if (d == 0) {
     r = -b / (2 * a);
     printf("Your answer is %.2f", r);
   }
   if (d < 0) {
     printf("There are no real roots.");
   }

   return 0;
}
