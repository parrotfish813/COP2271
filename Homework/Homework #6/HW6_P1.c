#include <stdio.h>
#include <math.h>

double f(double x);

int main(void) {

  printf("f(0.3) = %f\n", f(0.3));
  printf("f(0.5) = %f\n", f(0.5));
  printf("f(0.8) = %f", f(0.8));

  return 0;

}

double f(double x) {

  double fx, sum;

  for (int n = 1; n <= 20; n++) {
    fx = pow(-1, n+1) * (pow(x, n) / n);
    sum = sum + fx;
  }

  return sum;

}
