#include <stdio.h>
#include "game.h"

//初始化
void InieBoard(char board[ROWS][COLS], int row, int col,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) 
	{
		for (j = 0; j < col; j++) 
		{
			board[i][j] = set;
		}
	}
}

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col )
{
	int i = 1;
	int j = 1;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);//打印列号
	}
	printf("\n");
	for (i = 1; i <= row; i++) 
	{
		printf("%d ", i);//打印行号
		for (j = 1; j <= col; j++) 
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}

}

//设置棋盘
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;   //雷的个数
	while (count) {
		//随机位置
		int x = rand() % row + 1; //1-9 （任何数除以9余0-8）
		int y = rand() % col + 1; //0-9
		if (board[x][y] == '0') 
		{
			board[x][y] = '1';
			count--;
		}
		
	}
}

//(字符)'1'-'0'=1（数字）
//‘2’-‘0’= 2 ...
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] + mine[x + 1][y] + mine[x][y] +
	mine[x - 1][y + 1] + mine[x + 1][y + 1] + mine[x][y + 1] +
	mine[x - 1][y - 1] + mine[x + 1][y - 1] + mine[x][y - 1]- '0'*8;
}

//排雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	//判断游戏是否胜利
	while (win < row * col - EASY_COUNT)
	{
		printf("请输入排查坐标:");
		//_CRT_INTERNAL_SCANF_LEGACY_WIDE_SPECIFIERS;
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//坐标合法
			//1.踩雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			//2.未踩
			else
			{
				//计算xy周围有几个雷
				int count = get_mine_count(mine,x,y);
				printf("%d\n", count);
				show[x][y] = count + '0'; //数字转为字符
				DisplayBoard(show, row, col);
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入！\n");
		}
	}
	if (win = row * col - EASY_COUNT)
	{
		printf("恭喜排雷成功！\n");
		DisplayBoard(mine, ROW, COL);
	}
}

//展开功能递归
