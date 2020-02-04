// Abraham Meza - tictactoe_c.c - CS 135 //
// A program that utilizes functions to create a tic-tac-toe simulation //

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define SIZE 3

void display_table (char board[SIZE][SIZE]);
void clear_table (char board[SIZE][SIZE]);
bool check_table_full (char board[SIZE][SIZE]);
void update_table (char board[SIZE][SIZE], int row, int col, char token);
int check_legal_option (char board [SIZE][SIZE], int row, int col);
void generate_player2_move (char board[SIZE][SIZE], int row, int col);
int check_three_in_a_row (char board[SIZE][SIZE]);
bool check_end_of_game (char board[SIZE][SIZE]);
void get_player1_move (char board[SIZE][SIZE], int row, int col);
void print_winner (char board [SIZE][SIZE]);

int main(){

  char play = 'Y';
  char board[SIZE][SIZE];

  int row, col;

  clear_table(board);

  display_table(board);

  while (play == 'Y' || play == 'y'){
    while(check_end_of_game(board) == false)
    {
      get_player1_move(board, row, col);

      generate_player2_move(board, row, col);
    }

    print_winner(board);

    printf("Would you like to play again (Y/N): ");
    scanf("%s", &play);

    if (play == 'Y'  || play == 'y'){
      clear_table(board);

      display_table(board);
    }
    else if (play == 'N' || play == 'n'){
      return 0;
    }
  }
}

void display_table (char board[SIZE][SIZE]){
  int i, j;

  printf("The current state of the game is: \n");

  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
    {
      printf("%c ",board[i][j]);
    }
    printf("\n");
  }
}

void clear_table (char board[SIZE][SIZE]){
  int i, j;

  for (i = 0; i < SIZE; i++){
    for (j = 0; j < SIZE; j++){
        board[i][j] = '_';
    }
  }
}

bool check_table_full (char board[SIZE][SIZE]){
  int i, j;

  for (i = 0; i < SIZE; i++) {
    for (j= 0; j < SIZE; j++) {
      if (board[i][j] == '_') {
        return false;
      }
    }
  }
  return true;
}

void update_table (char board[SIZE][SIZE], int row, int col, char token){
  board[row][col] = token;
}

int check_legal_option (char board [SIZE][SIZE], int row, int col){
  if(board[row][col] == '_'){
    return true;
  }
  return false;
}

void generate_player2_move (char board[SIZE][SIZE], int row, int col){
  if (check_end_of_game(board) == false){
    char token = 'X';

    srand(time(NULL));

    row = rand() % SIZE;
    col = rand() % SIZE;

    while(check_legal_option(board, row, col) == true){
      break;
    }
    while(check_legal_option(board, row, col) == false){
      row = rand() % SIZE;
      col = rand() % SIZE;
    }
    printf("Player 2 has entered [row, col]: %d,%d \n", row + 1, col + 1);

    update_table(board, row, col, token);
    display_table(board);
  }
  else{
    return;
  }
}

int check_three_in_a_row (char board[SIZE][SIZE]){

  // HorizontalCheck //
  for (int i = 0; i < SIZE; i++)
  {
    if (board[i][0] == 'O' && board[i][1] == 'O' && board[i][2] == 'O'){
      return 1;
    }
    else if (board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X'){
      return 2;
    }
  }

  // VerticalCheck //
  for (int i = 0; i < SIZE; i++)
  {
    if (board[0][i] == 'O' && board[1][i] == 'O' && board[2][i] == 'O'){
      return 1;
    }
    else if (board[0][i] == 'X' && board[1][i] == 'X' && board[2][i] == 'X'){
      return 2;
    }
  }

  // DiagonalCheck //
  if ((board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') || (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')){
    return 1;
  }
  else if ((board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') || (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')){
    return 2;
  }

  return 0;
}

bool check_end_of_game (char board[SIZE][SIZE]){

  if (check_three_in_a_row(board) == 1 || check_three_in_a_row(board) == 2){
    return true;
  }

  for (int i = 0; i < SIZE; i++){
    for (int j = 0; j < SIZE; j++){
      if (board[i][j] == '_'){
        return false;
      }
    }
  }
  return true;
}

void get_player1_move (char board[SIZE][SIZE], int row, int col){
  int player1;
  char token = 'O';

  printf("Player 1 enter your selection [row, col]: ");
  scanf("%d, %d", &row, &col);

  row = row - 1;
  col = col - 1;

  while (check_legal_option(board, row, col) == false){
    printf("Player 1 enter your selection [row, col]: ");
    scanf("%d, %d", &row, &col);

    row = row - 1;
    col = col - 1;
  }

  update_table(board, row, col, token);
  display_table(board);
}

void print_winner (char board [SIZE][SIZE]){
  int winner;

  winner = check_three_in_a_row(board);

  if (winner == 1){
    printf("Congratulations, Player 1 wins!\n");
  }
  else if (winner == 2){
    printf("Congratulations, Player 2 wins!\n");
  }
  else if(winner == 0){
    printf("Game over, no player wins.\n");
  }
}