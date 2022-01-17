#include <stdio.h>

int main() {

    int n1, n2, gcd;

    printf("Please enter 2 positive numbers\n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    //Using a counter to run through both user inputs until it find the common denimonator.
    for (int i = 1; i <= n1 || i <= n2; i++) {
      //Checking if the inputs remander when divided by the counter is 0
      if (n1%i==0 && n2%i==0) {
        gcd = i;
      }
    }

    printf("The greatest common denominator of %d and %d is %d", n1, n2, gcd);

    return 0;
}
