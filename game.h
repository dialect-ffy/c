#pragma once
#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2
#include <stdio.h>
//初始化棋盘
void Initboard(char board[ROWS][COLS], int rows, int cols, char set);
//打印棋盘
void DisplayBoard(char board[ROWS][COLS],int row,int col );
