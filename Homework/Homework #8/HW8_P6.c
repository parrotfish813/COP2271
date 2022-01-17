#include <stdio.h>

#define SIZE 5

void salary_display(int *sPtr, int size);
void salary_raise(int *sPtr, int size);

int main() {

  int salary[SIZE] = {1500, 3000, 2500, 3300, 5000};

  salary_display(salary, SIZE);

  puts("");

  salary_raise(salary, SIZE);

  return 0;
}

void salary_display(int *sPtr, int size) {

  puts("Current salary");
  for(int i = 0; i < size; i++) {
    printf("%d\n", *(sPtr + i));
  }

}

void salary_raise(int *sPtr, int size) {

  puts("After reciving a 5% raise");
  for(int i = 0; i < size; i++) {
    *(sPtr + i) *= 1.05;
    printf("%d\n", *(sPtr + i));
  }

}
