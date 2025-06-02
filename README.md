# Tic-Tac-Toe
### Author : Nazifa Tabassum
# 🎮 TIC TAC TOE - Console Game in C++

A simple and interactive **Tic Tac Toe** game made with **C++**, utilizing **2D arrays**, **loops**, and basic logic structures. It supports **two-player mode** with customizable tokens and allows playing **multiple rounds**, tracking winners after each round.

## 🧠 Features

- Two-player turn-based gameplay
- Custom player names and tokens
- Valid move checking with feedback
- Visual 3x3 board with updates
- Round-based gameplay (play best of N rounds)
- Declares per-round and overall winner
- Tie detection and friendly messages

## 🛠 Technologies Used

- C++ (Standard Library)
- Console I/O
- 2D Arrays for game grid
- `system("cls")` for clearing screen
- `conio.h` for `getch()` (wait for keypress)

## 📋 How It Works

1. Introduction and rule display.
2. Players enter names and select unique tokens (like `X`, `O`, etc.).
3. Player 1 or 2 starts the game based on choice.
4. A 3x3 grid is shown with numbers (1–9) representing positions.
5. Players take turns marking their position by entering the corresponding number.
6. After each move, the board updates and checks for:
   - Horizontal, vertical, or diagonal win
   - Full board → Tie
7. After a round ends, it shows the winner or tie.
8. The game continues for the selected number of rounds and then shows the **ultimate winner**.

## 🧩 Game Rules

- Players alternate turns placing their token on the board.
- First to get **3 in a row** (horizontally, vertically, or diagonally) wins.
- If all spots are filled without a winner, the round is a tie.

 ## Output Screenshot for better understanding:
 ### Front Page
  [!image alt](https://github.com/tabassumnazifa/Tic-Tac-Toe/blob/main/first.png?raw=true)
### Game

  
