# Tic-Tac-Toe Game

This is a simple implementation of the Tic-Tac-Toe game in C++. It allows two players to take turns marking cells on a 3x3 grid until a player wins or the game ends in a draw.

## How to Use

1. Compile the code using a C++ compiler or IDE of your choice.

2. Run the compiled executable.

3. The game will start by displaying an empty 3x3 grid. Each cell of the grid is represented by an underscore ('_').

4. Players take turns entering the coordinates of the cell they want to mark. The coordinates should be entered as space-separated integers in the range 0-2. For example, to mark the top-right cell, a player would enter "2 0".

5. The game will validate the input and mark the selected cell with the current player's symbol ('X' or 'O'). If the input is invalid (e.g., out of range or the cell is already occupied), an error message will be displayed.

6. The game will check for a winning condition after each move. If a player has won, the game will display a message indicating the winner.

7. If no player has won and there are no empty cells left, the game will end in a draw.

8. The game will continue until a winner is determined or the game ends in a draw. Afterward, the final result will be displayed.

## Code Structure

The code is organized into several functions:

- `start()`: Initializes the game board by setting all cells to '_'.

- `print()`: Displays the current state of the game board, including the marks made by players.

- `write(int x, int y)`: Marks the selected cell with the current player's symbol and checks for a winning condition.

- `cheak(int x, int y)`: Validates the selected cell and calls the write() function to make a move if the cell is empty.

- `win()`: Checks for a winning condition by examining the state of the game board.

- `run()`: Executes the main game loop, prompting players for their moves and determining the game outcome.

- `main()`: Entry point of the program that calls the run() function to start the game.

## Contributions

Contributions to the code are welcome! If you have any improvements or bug fixes, feel free to submit a pull request.