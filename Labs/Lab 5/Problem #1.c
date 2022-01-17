#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lottery(int player_number);

int main(void) {

  srand(time(NULL));
  int player_number;

  do {
    puts("Please enter your 2 diget lottery number");
    scanf("%d", &player_number);
  } while (player_number < 9 || player_number > 100);


  lottery(player_number);

  return 0;

}

void lottery(int player_number){

  int lottery_number = rand() % 89 + 10;
  int player_tens, player_ones, lottery_tens, lottery_ones;

  printf("The lottery number is: %d\n", lottery_number);

  //Lottery diget checker
  lottery_tens = lottery_number / 10;
  lottery_ones = lottery_number % 10;

  //Player diget checker
  player_tens = player_number / 10;
  player_ones = player_number % 10;

  if (lottery_number == player_number) {
    puts("You won $10,000!!!");
  }

  else if (lottery_tens == player_ones && lottery_ones == player_tens) {
    puts("You won $3,000!!!");
  }

  else if (lottery_ones == player_ones || lottery_tens == player_tens || lottery_ones == player_tens || lottery_tens == player_ones) {
    puts("You won $1,000!!!");
  }

  else {
    puts("You didn't win, next time don't waste your money on the lottery!");
  }

}
