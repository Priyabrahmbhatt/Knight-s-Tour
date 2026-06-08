# Knight-s-Tour

## Project Description

This project implements a solution to the Knight's Tour problem using recursive backtracking in both C++ and Java.

The Knight's Tour is a classic algorithmic problem in which a knight must visit every square on a chessboard exactly once. The program systematically explores valid knight moves and uses recursion and backtracking to find a complete tour.

## Problem Statement

Given an empty 8×8 chessboard and a starting position, find a sequence of knight moves that visits every square exactly once.

## Approach

The solution uses a recursive backtracking algorithm:

1. Place the knight on a starting square.
2. Mark the square as visited.
3. Generate all valid knight moves from the current position.
4. Recursively attempt each move.
5. If a move does not lead to a solution, backtrack and try another path.
6. Continue until all 64 squares have been visited.

## Concepts Demonstrated

* Recursion
* Backtracking
* Depth-First Search (DFS)
* Two-Dimensional Arrays
* Algorithm Design
* Problem Solving

## Languages

* C++
* Java

## Example Output

 1 34  3 18 49 32 13 16
 4 19 56 33 14 17 50 31
57  2 35 48 55 52 15 12
20  5 60 53 36 47 30 51
41 58 37 46 61 54 11 26
 6 21 42 59 38 27 64 29
43 40 23  8 45 62 25 10
22  7 44 39 24  9 28 63


## Learning Outcomes

This project helped strengthen my understanding of recursive algorithms, backtracking techniques, and state-space search problems. It also provided experience implementing the same algorithm in multiple programming languages.
