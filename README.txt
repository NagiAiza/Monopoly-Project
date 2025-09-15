🚀 MONOSPACE
A classic Monopoly-style board game with a space exploration theme, built in C for the console.

📋 Table of Contents
Description

Features

How to Play

Code Structure

Compilation and Execution

Authors

🌌 Description
MONOSPACE is a reinterpretation of the famous board game Monopoly, developed entirely in C to be played in a terminal. Dive into a space adventure where classic properties are replaced by planets, galaxies, and stars. The objective remains the same: become the wealthiest player in the universe by buying, renting, and selling cosmic properties, and drive your opponents to bankruptcy.

✨ Features
Classic Gameplay, Space Theme: Enjoy all the mechanics of Monopoly (buying, renting, building, mortgaging) in a science fiction universe.

Galactic Game Board: Purchase famous properties like the Moon, Jupiter, the Andromeda Galaxy, or the Black Eye Galaxy.

"Chance" & "Community" Cards: Draw cards with unexpected space events, like a collision with an asteroid or the discovery of a supernova.

Multiplayer Support: The game supports up to 6 players.

Console Interface: A fully text-based UI that uses colors and custom layouts to create an engaging experience.

Complete Menu System: Start a new game, save/load (planned feature), view rules, see credits, and quit.

📜 How to Play
The goal is to be the last player standing before going bankrupt.

1. Game Turn
On your turn, roll the dice and move your pawn. If you roll a double, you play again. Warning: three doubles in a row will send you to jail!

2. Properties
If you land on an unowned property, you can buy it from the Bank.

If it belongs to another player, you must pay them rent. Rent is doubled if the player owns all properties of the same color.

3. Buildings
Once you own a full color set, you can build Bases (houses) and Mega Bases (hotels).

You can build up to 4 Bases per property. A Mega Base replaces the 4 bases.

4. Special Squares
GO Square: Collect $200 each time you pass.

Chance & Community: Draw a card and follow its instructions.

Jail: You go to jail by landing on the "Go to Jail" square, drawing a specific card, or rolling three doubles. To get out, you can pay a fine, use a "Get Out of Jail Free" card, or roll a double.

5. Mortgage & Bankruptcy
If you are short on cash, you can mortgage your properties (without buildings) to the Bank.

If you owe more money than you can pay, you are bankrupt and eliminated from the game.

🏗️ Code Structure
The project is organized into several key files to separate different game logics:

header.c: Contains all data structure definitions (t_joueur, t_rue, etc.) and function prototypes.

code carte.c: Manages the logic and text for all "Chance" and "Community" cards.

Sous fonction.c: A central implementation file for core functions like menus, property card displays, and game rules.

Assemblage menu.c / debut assemblage.c: Handle player interaction logic, menu navigation, and actions on game squares.

🛠️ Compilation and Execution
To compile and run this project, you will need a C compiler (like GCC) and a Windows environment (as the code uses windows.h).

Compile the code by grouping all .c files. Open a terminal in the project directory and run:

Bash

gcc -o MONOSPACE.exe *.c
Note: This command compiles all .c files in the current directory into a single executable named MONOSPACE.exe.

Run the game:

Bash

./MONOSPACE.exe
✍️ Authors
This project was developed by a team of four:

Alexis BOULIC

Remy CHEN

Cécile DELAPORTE

Alice TOSELLO
