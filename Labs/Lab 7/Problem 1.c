#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define SIZE 3

//Prototyping my functions
void print_board(char board[SIZE][SIZE]);
void play_game(char board[SIZE][SIZE], int row, int column);
bool check_game(char board[SIZE][SIZE]);
char check_row(char board[SIZE][SIZE]);
char check_column(char board[SIZE][SIZE]);
char check_diagonal(char board[SIZE][SIZE]);

int main() {

  //Blank array for tic tac toe
  char tic[SIZE][SIZE] = {{' ', ' ', ' ',},
                          {' ', ' ', ' ',},
                          {' ', ' ', ' ',}};

  puts("WELCOME TO TIC TAC TOE IN C\n");
  print_board(tic);
  play_game(tic, SIZE, SIZE);

  return 0;
}

//Function that prints out board and assigns each empty space to a row and column of
void print_board(char board[SIZE][SIZE]) {
  puts("     0     1     2");
  puts("  -------------------");
  printf("0 |  %c  |  %c  |  %c  |\n", board[0][0], board[1][0], board[2][0]);
  puts("  -------------------");
  printf("1 |  %c  |  %c  |  %c  |\n", board[0][1], board[1][1], board[2][1]);
  puts("  -------------------");
  printf("2 |  %c  |  %c  |  %c  |\n", board[0][2], board[1][2], board[2][2]);
  puts("  -------------------");

}

//Function that prompts the player to enter a row and column for their prospective letter
void play_game(char board[SIZE][SIZE], int row, int column) {

  int stop = 0;

  //Do while loop that runs the code as long as no player has won
  do {

    //Asks player 1 to input the cell they want
    puts("Player 1 turn. Select the cell");
    scanf("%d", &row);
    scanf("%d", &column);

    //Checks if it's a valid cell and if not prompts them to enter a valid cell
    if(row >= SIZE || column >= SIZE) {
      do {
        puts("Invalid input. Try again!");
        scanf("%d", &row);
        scanf("%d", &column);
      }while(row >= SIZE || column >= SIZE);
    }

    //Places an X in the entered space on the board
    board[row][column] = 'X';

    //Prints the updated board
    print_board(board);

    //Checks if either player has won and then stops the code
    if(check_game(board) == true) {
      stop = 1;
      return;
    }

    //Asks player 1 to input the cell they want
    puts("Player 2 turn. Select the cell");
    scanf("%d", &row);
    scanf("%d", &column);

    //Checks if it's a valid cell and if not prompts them to enter a valid cell
    if(row > SIZE || column > SIZE) {
      do {
        puts("Invalid input. Try again!");
        scanf("%d", &row);
        scanf("%d", &column);
      }while(row > SIZE || column > SIZE);
    }

    //Places an O in the entered space on the board
    board[row][column] = 'O';

    //Prints the updated board
    print_board(board);

    //Checks if either player has won
    if(check_game(board) == true) {
      stop = 1;
    }

  } while(stop == 0);

}

//Function that checks if any of the win conditions have been met
bool check_game(char board[SIZE][SIZE]) {

  char winCondition = check_row(board);
  if(winCondition == 'T') {
    winCondition = check_column(board);
    if(winCondition == 'T'){
      winCondition = check_diagonal(board);
    }
  }

  //Checking if one of the win conditions has been met for X
  if(winCondition == 'X') {
    printf("X's Win!");
    return true;
  }

  //Checking if one of the win conditions has been met for O
  if(winCondition == 'O') {
    printf("O's Win!");
    return true;
  }

  //Checking if none of the win conditions have been met, but the board is full
  if(winCondition == '-') {
    printf("It's a Draw");
    return true;
  }

  printf("Next turn!\n");
  return false;

}

//Function that checks if someone won in the rows
char check_row(char board[SIZE][SIZE]) {
  char X, O;

  //Checking if X has any full rows and then returning X insinuating that X has won
  if(((board[0][0] == 'X') && (board[0][1] == 'X') && (board[0][2] == 'X')) ||
     ((board[1][0] == 'X') && (board[1][1] == 'X') && (board[1][2] == 'X')) ||
     ((board[2][0] == 'X') && (board[2][1] == 'X') && (board[2][2] == 'X'))) {
        return 'X';
  }

  //Checking if O has any full rows and then returning O insinuating that O has won
  else if(((board[0][0] == 'O') && (board[0][1] == 'O') && (board[0][2] == 'O')) ||
          ((board[1][0] == 'O') && (board[1][1] == 'O') && (board[1][2] == 'O')) ||
          ((board[2][0] == 'O') && (board[2][1] == 'O') && (board[2][2] == 'O'))) {
        return 'O';
  }

  //If neitehr of the above are true it returns T to tell the code to continue
  else {
    return 'T';
  }

}

//Function that checks if someone won in the columns
char check_column(char board[SIZE][SIZE]) {
  char X, O;

  //Checking if X has any full columns and then returning X insinuating that X has won
  if(((board[0][0] == 'X') && (board[1][0] == 'X') && (board[2][0] == 'X')) ||
     ((board[0][1] == 'X') && (board[1][1] == 'X') && (board[2][1] == 'X')) ||
     ((board[0][2] == 'X') && (board[1][2] == 'X') && (board[2][2] == 'X'))) {
        return 'X';
  }

  //Checking if O has any full columns and then returning O insinuating that O has won
  else if(((board[0][0] == 'O') && (board[0][1] == 'O') && (board[0][2] == 'O')) ||
         ((board[1][0] == 'O') && (board[1][1] == 'O') && (board[1][2] == 'O')) ||
         ((board[2][0] == 'O') && (board[2][1] == 'O') && (board[2][2] == 'O'))) {
        return 'O';
  }

  //If neitehr of the above are true it returns T to tell the code to continue
  else {
    return 'T';
  }

}

//Function that checks if someone won in the diagonals
char check_diagonal(char board[SIZE][SIZE]) {
  char X, O;

  //Checking if X has any full diagonals and then returning X insinuating that X has won
  if(((board[0][0] == 'X') && (board[1][1] == 'X') && (board[2][2] == 'X')) ||
     ((board[0][2] == 'X') && (board[1][1] == 'X') && (board[2][0] == 'X'))) {
        return 'X';
  }

  //Checking if O has any full diagonals and then returning O insinuating that O has won
  else if(((board[0][0] == 'O') && (board[1][1] == 'O') && (board[2][2] == 'O')) ||
          ((board[0][2] == 'O') && (board[1][1] == 'O') && (board[2][0] == 'O'))) {
        return 'O';
  }

  //If neitehr of the above are true it returns T to tell the code to continue
  else {
    return 'T';
  }

}
