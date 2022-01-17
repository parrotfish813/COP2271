// Main function
int main() {

  //Get the value from the user

  unsigned int n;
  int number, sum = 0;

  puts("How many numbers do you want to enter?");
  scanf("%u", &n);

  while (n > 0) {

    puts("Enter the integer");
    scanf("%d", &number);

    sum += number; //Sum = sum + number

    n--; //n = n - 1
  }

  printf("The sum of the numbers is %d", sum);

  return 0;

}
