# BATMAN VS JOKER GAME 
## INTRODUCTION
## DESCRIPTION
* This game is created by taking reference from the game X and O which is also called as "Tic Tac Toe".
* There is a city named Gotham City,Where Joker Plants bombs of type X or O and the Batman should Stop it from making a sequence of 4 bombs in a row to prevent Gotham City.
## OBJECTIVE
* The goal of the game is for players to position their marks so that they make a continuous line of four cells vertically, horizontally, or diagonally. 
* An opponent can prevent a win by blocking the completion of the opponent's line.
## SPACE AND TIME COMPLEXITY :
### TIME COMPLEXITY :
* O(1) time complexity that requires O(n) space complexity. it is simpler to write, and debug and more importantly, there are no loops!
### SPACE COMPLEXITY :
* Combinatorial game theory has several ways of measuring game complexity.
* The state-space complexity of a game is the number of legal game positions reachable from the initial position of the game.
* The game tree size is the total number of possible games that can be played: the number of leaf nodes in the game tree rooted at the game's initial position.
* Decision complexity of a game is the number of leaf nodes in the smallest decision tree that establishes the value of the initial position.
* The game-tree complexity of a game is the number of leaf nodes in the smallest full-width decision tree that establishes the value of the initial position.
* O(n) in space complexity.
## GAME PREVIEW EXAMPLE : 
![An-5-5-board](https://user-images.githubusercontent.com/62429376/158420699-7ac54a51-717a-417f-8d99-61b849fa0fb6.png)
## GAME MODEL DESIGN : 
![TT](https://user-images.githubusercontent.com/62429376/158425634-37f97448-6d95-4695-bac2-518601878d69.png)
## EXPLANATION : 
* (X) and (O) are 2 kinds of bombs available in gotham city");
* both BATMAN and JOKER has to put both (X) and (O)
* JOKER wins if sequence of 4 bombs is made vertically,horizontally or diagonally with either of  the bomb types
* BATMAN wins if JOKER's plan is destroyed and prevents him from making the bomb connections of the same type
* Below is the map of GOTHAM city and the bombs placed


