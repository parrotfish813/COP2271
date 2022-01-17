#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Creating the You Win function
void printYouWin();

//Creating the You Win function
void printYouLose();

//Creating the Monster's Attack function
int monsterAttacks();

//Creating the Hero's Attack function
int heroAttacks(int atkBonus);


int main(void) {

  //Making sure all the rand() are as random as possible
  srand(time(NULL));

  int heroHealth = 20;
  int monsterHealth = 20;

  //Do while loops that runs the code until one of the entities health reaches 0
  do {

    //Making the hero and monster take damage
    monsterHealth = monsterHealth - heroAttacks(rand() % 2);
    heroHealth = heroHealth - monsterAttacks();

    printf("The monster did %d damage\n", monsterAttacks());
    printf("The hero did %d damage\n", heroAttacks(rand() % 2));

    printf("The heros current health is %d\n", heroHealth);
    printf("The monsters current health is %d\n", monsterHealth);

    puts("");

    //Checking if the monster killed the hero
    if ((heroHealth <= 0) && (monsterHealth > 0)) {
      printYouLose();
    }

    //Checking if the hero killed the monster
    if ((monsterHealth <= 0) && (heroHealth > 0)) {
      printYouWin();
    }

    //Checking if the monster and the player killed eachother
    if ((monsterHealth <= 0) && (heroHealth <= 0)) {
      puts("You killed eachother :|");
    }

  } while((heroHealth > 0) && (monsterHealth > 0));

  return 0;

}

//You win function
void printYouWin() {
  puts("You Win!");
}

//You lose function
void printYouLose() {
  puts("You Lose :(");
}

//Monster's attack damage function
int monsterAttacks() {

  int m_attack = 1 + (rand() % 6);

  return m_attack;

}

//Hero's attack damage function
int heroAttacks(int atkBonus) {

  int h_attack = 1 + (rand() % 5) + atkBonus;

  return h_attack;

}
