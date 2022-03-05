#define ROW 9          //中间游戏范围
#define COL 9

#define ROWS ROW+2     //边
#define COLS COL+2

#define EASY_COUNT 10  //雷的个数

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void InieBoard(char board[ROWS][COLS],int row ,int col,char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);