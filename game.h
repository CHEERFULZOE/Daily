#define ROW 9          //�м���Ϸ��Χ
#define COL 9

#define ROWS ROW+2     //��
#define COLS COL+2

#define EASY_COUNT 10  //�׵ĸ���

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void InieBoard(char board[ROWS][COLS],int row ,int col,char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);