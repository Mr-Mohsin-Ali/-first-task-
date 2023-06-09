#include <iostream>
using namespace std;

void win(void);
void start(void);
void print(void);
void write(int x, int y);
void cheak(int x, int y);
void run(void);

char board[3][3];
char turn = 'O';
int winner = 0;

void start(void)
{
  // Initialize the board with underscores
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      board[i][j] = '_';
    }
  }
}

void print(void)
{
  // Print the current state of the board
  cout << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }

  if (winner == 0)
  {
    cout << turn << "'s turn ";
  }
}

void write(int x, int y)
{
  // Write the current player's symbol at the specified position
  board[x][y] = turn;
  win();

  if (turn == 'O' && winner == 0)
  {
    turn = 'X';
  }
  else if (winner == 0)
  {
    turn = 'O';
  }
}

void win(void)
{
  // Check if there is a winning condition
  if ((board[0][0] == board[0][1]) && (board[0][1] == board[0][2]) && board[0][0] != '_')
  {
    winner = 1;
    return;
  }
  if ((board[1][0] == board[1][1]) && (board[1][1] == board[1][2]) && board[1][0] != '_')
  {
    winner = 1;
    return;
  }
  if ((board[2][0] == board[2][1]) && (board[2][1] == board[2][2]) && board[2][0] != '_')
  {
    winner = 1;
    return;
  }
  if ((board[0][0] == board[1][0]) && (board[1][0] == board[2][0]) && board[0][0] != '_')
  {
    winner = 1;
    return;
  }
  if ((board[0][1] == board[1][1]) && (board[1][1] == board[2][1]) && board[0][1] != '_')
  {
    winner = 1;
    return;
  }
  if ((board[0][2] == board[1][2]) && (board[1][2] == board[2][2]) && board[0][2] != '_')
  {
    winner = 1;
    return;
  }
  if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2]) && board[0][0] != '_')
  {
    winner = 1;
    return;
  }
  if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2]) && board[2][0] != '_')
  {
    winner = 1;
    return;
  }

  // Check if the game ended in a draw
  int temp = 0;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (board[i][j] == '_')
      {
        temp = 1;
      }
    }
    cout << endl;
  }

  if (temp == 1)
  {
    return;
  }
  else
  {
    winner = 2;
  }
}

void cheak(int x, int y)
{
  // Check if the cell is empty and make a move
  if (board[x][y] == '_')
  {
    write(x, y);
  }
  else
  {
    cout << "Last move was invalid." << endl;
  }
}

void run(void)
{
  // Start the game
  start();

  int x, y;
  while (winner == 0)
  {
    print();
    cout << "Enter point in X Y (0-2):" << endl;
    cin >> x >> y;

    if (x < 0 || x > 2 || y < 0 || y > 2)
    {
      cout << "Last move was invalid." << endl;
    }
    else
    {
      cheak(x, y);
    }
  }

  if (winner == 1)
  {
    cout << turn << " player is the winner." << endl;
  }
  else
  {
    cout << "The game ended in a draw." << endl;
  }
}

int main()
{
  // Run the game
  run();
  //testing comments 
}
