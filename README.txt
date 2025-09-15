MONOSPACE
## Description
MONOSPACE is a reinterpretation of the classic Monopoly board game, built from the ground up in C for the console. It replaces the traditional properties with a space exploration theme, challenging players to become the wealthiest tycoon in the universe.

## Features
The game features Classic Gameplay with all the standard mechanics of Monopoly, set within a unique sci-fi universe. The Galactic Game Board includes properties like planets, galaxies, and stars. Players will encounter unexpected cosmic events through "Chance" & "Community" Cards. The game supports Multiplayer for up to 6 players and features a colorful and engaging text-based Console UI.

## How to Play
The objective is to be the last player remaining who has not gone bankrupt.

### Game Turn
At the start of your turn, you roll the dice and move your pawn. If you roll doubles, you get to play again. Be careful, as rolling three sets of doubles in a row will send you directly to JAIL!

### Properties & Rent
If you land on an unowned property, you have the option to buy it from the Bank. If you land on a property owned by another player, you must pay them the required rent. The rent is doubled if a player owns all properties within a single color group.

### Buildings
Once you own a full color set of properties, you can begin to build on them. You can build up to four Bases (houses) on a single property. After four bases are built, you can upgrade to a Mega Base (hotel).

## Code Structure
The project is organized across several files. header.c defines all data structures (like t_joueur and t_rue) and contains all function prototypes. code carte.c manages the logic and text for the Chance and Community cards. Sous fonction.c is a central file containing implementations for core functions like the menu and UI display. Finally, Assemblage menu.c and debut assemblage.c handle the main game loop and player interactions.

## Compilation and Execution
Compile: This project requires a C compiler (like GCC) and a Windows environment. Open a terminal in the source directory and run the following command to compile all .c files:

Bash

gcc -o MONOSPACE.exe *.c
Run: To start the game, execute the compiled file from your terminal:

Bash

./MONOSPACE.exe
## Authors
This project was developed by Alexis BOULIC, Remy CHEN, Cécile DELAPORTE, and Alice TOSELLO
