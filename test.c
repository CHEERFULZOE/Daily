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
	//�׵���Ϣ�洢
	//1.���ú��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };//11*11
	//�Ų������Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InieBoard(mine, ROWS, COLS,'0');
	InieBoard(show , ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine,ROW,COL);
	printf("\n");
	DisplayBoard(show, ROW, COL);
	printf("\n");
	//������  1--�ף� 2--����
	SetMine(mine,ROW,COL);
	//ɨ��
	DisplayBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);//��mine�л����Ϣ����show��
}

void test() 
{
	int input = 0;
	srand((unsigned int)time(NULL)); //ʹ��rand����ǰ�����ȵ���srand

	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����,����ѡ��\n");
			break;
		}
	} while (input);
}

int main() 
{
	test();
	return 0;
}