#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3

//ÉùÃ÷º¯Êý
void Init_board(char board[ROW] [COL] , int row , int col);
void Display_board(char board[ROW][COL], int row, int col);
void Player(char board[ROW][COL], int row, int col);
void Computer(char board[ROW][COL], int row, int col);
char Is_win(char board[ROW][COL], int row, int col);

