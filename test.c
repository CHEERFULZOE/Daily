#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "game.h"


void menu() 
{
	printf("*****************************\n");
	printf("*********   1.play   ********\n");
	printf("*********   0.exit   *********\n");
	printf("*****************************\n");
}
void game()
{
	//雷的信息存储
	//1.布置好雷的信息
	char mine[ROWS][COLS] = { 0 };//11*11
	//排查出的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	InieBoard(mine, ROWS, COLS,'0');
	InieBoard(show , ROWS, COLS, '*');
	//打印棋盘
	//DisplayBoard(mine,ROW,COL);
	printf("\n");
	DisplayBoard(show, ROW, COL);
	printf("\n");
	//布置雷  1--雷； 2--无雷
	SetMine(mine,ROW,COL);
	//扫雷
	DisplayBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);//从mine中获得信息传到show中
}

void test() 
{
	int input = 0;
	srand((unsigned int)time(NULL)); //使用rand函数前必须先调用srand

	do
	{
		menu();
		printf("请选择：>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误,重新选择\n");
			break;
		}
	} while (input);
}

int main() 
{
	test();
	return 0;
}