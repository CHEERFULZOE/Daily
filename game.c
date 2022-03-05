#include <stdio.h>
#include "game.h"

//��ʼ��
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

//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col )
{
	int i = 1;
	int j = 1;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);//��ӡ�к�
	}
	printf("\n");
	for (i = 1; i <= row; i++) 
	{
		printf("%d ", i);//��ӡ�к�
		for (j = 1; j <= col; j++) 
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}

}

//��������
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;   //�׵ĸ���
	while (count) {
		//���λ��
		int x = rand() % row + 1; //1-9 ���κ�������9��0-8��
		int y = rand() % col + 1; //0-9
		if (board[x][y] == '0') 
		{
			board[x][y] = '1';
			count--;
		}
		
	}
}

//(�ַ�)'1'-'0'=1�����֣�
//��2��-��0��= 2 ...
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] + mine[x + 1][y] + mine[x][y] +
	mine[x - 1][y + 1] + mine[x + 1][y + 1] + mine[x][y + 1] +
	mine[x - 1][y - 1] + mine[x + 1][y - 1] + mine[x][y - 1]- '0'*8;
}

//����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	//�ж���Ϸ�Ƿ�ʤ��
	while (win < row * col - EASY_COUNT)
	{
		printf("�������Ų�����:");
		//_CRT_INTERNAL_SCANF_LEGACY_WIDE_SPECIFIERS;
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����Ϸ�
			//1.����
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, row, col);
				break;
			}
			//2.δ��
			else
			{
				//����xy��Χ�м�����
				int count = get_mine_count(mine,x,y);
				printf("%d\n", count);
				show[x][y] = count + '0'; //����תΪ�ַ�
				DisplayBoard(show, row, col);
			}
		}
		else
		{
			printf("��������Ƿ������������룡\n");
		}
	}
	if (win = row * col - EASY_COUNT)
	{
		printf("��ϲ���׳ɹ���\n");
		DisplayBoard(mine, ROW, COL);
	}
}

//չ�����ܵݹ�
