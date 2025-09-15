## 🚀 MONOSPACE
A classic Monopoly-style board game with a space exploration theme, built in C for the console.

## 📜 About The Game
MONOSPACE is a 2D console-based adventure that reinterprets the classic gameplay of Monopoly with a science fiction twist. Players will travel across a galactic game board, purchasing celestial bodies like planets, stars, and entire galaxies. The game features a complete menu system for managing properties, building structures, and interacting with game events. The ultimate goal is to accumulate wealth and drive all other players to bankruptcy, becoming the master of the MONOSPACE universe.

## ✨ Features
* **Classic Gameplay, Space Theme**: Enjoy all the mechanics of Monopoly (buying, renting, building, mortgaging) in a science fiction universe.
* **Galactic Game Board**: Purchase famous properties like the Moon, Jupiter, the Andromeda Galaxy, or the Black Eye Galaxy.
* **Interactive Event Cards**: Draw "Chance" and "Community" cards with unexpected space events, like a collision with an asteroid or the discovery of a supernova.
* **Property Management**: Buy and sell properties, manage your cash flow, and build "Bases" (houses) and "Mega Bases" (hotels) to increase your income.
* **Multiplayer Support**: The game is designed for up to 6 players, making it a great local multiplayer experience.
* **Console Interface**: A fully text-based user interface that uses colors and custom layouts to create an engaging experience directly in your terminal.

Complete Menu System: Navigate through a full-featured menu to start a new game, manage your assets during your turn, view rules, or quit.

## 📖 Gameplay Overview
1. The adventure to conquer the galaxy unfolds in turns:
2. Roll and Move: Start your turn by rolling the dice and moving your pawn across the galactic board. Rolling doubles lets you roll again, but three doubles in a row will land you in Jail!
3. Manage Properties: If you land on an unowned property, you can buy it. If it’s owned by another player, you must pay them rent. Collect full sets of colored properties to increase their value.
4. Build Structures: Once you own a full color-set of properties, you can build up to four "Bases" (houses). After that, you can upgrade them into a single, powerful "Mega Base" (hotel) to maximize the rent you collect.
5. Handle Special Events: Landing on a "Chance" or "Community" square will require you to draw a card and follow its instructions—these can be good or bad!
6. Avoid Bankruptcy: The goal is to stay financially solvent. If you owe more money than you have, you are declared bankrupt and are out of the game. The last player standing wins!

## 🕹️ Controls

| Action            | Key                        | Gameplay Mode            |
| ----------------- | -------------------------- | ------------------------ |
| **Navigate Menus** | `Number Keys` (1, 2, 3, etc.) | In-Game Menus |
| **Confirm** | `Enter` | In-Game Menus |

## 🚀 Getting Started
To run this project on your local machine, you'll need a C compiler and a Windows-based environment.

### Prerequisites
* C Compiler: A compiler like GCC (MinGW on Windows) is recommended.
* Windows Environment: The code uses the windows.h library for console manipulation.

### Installation & Execution
1. Download the Source Code: Download or clone all the .c and .h files to a single folder on your local machine.
2. Open a Terminal: Navigate to the project folder using a command-line interface (like Command Prompt or PowerShell).
3. Compile the Project: Run the following command to compile all C files into a single executable.
gcc -o MONOSPACE.exe *.c
4. Run the Game: Once compiled, run the game by executing the new file.
./MONOSPACE.exe
