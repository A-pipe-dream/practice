#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"
void menu()
{
	printf("----------------------\n");
	printf("----1.play 0.exit----\n");
	printf("----------------------\n");
	printf("���Ϊ * , ����Ϊ #\n");
}

void game()
{
	char ret = 0;
	//����һ����ά������������Ϣ
	char board[ROW][COL] = {0};
	Init_board(board ,ROW ,COL);			//��ʼ������
	Display_board(board,ROW,COL);			//��ӡ(��ʾ)����
	while (1)
	{
		Player(board,ROW,COL);				//�������
		Display_board(board, ROW, COL);		//��ʾ����
		ret = Is_win(board, ROW, COL);		//�ж�����Ƿ�Ӯ
		if (ret != 'C')
		{
			break;
		}
		Computer(board, ROW, COL);			//��������
		Display_board(board, ROW, COL);		//��ʾ����
		ret = Is_win(board, ROW, COL);		//�жϵ����Ƿ�Ӯ
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
		printf("\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
		printf("\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
		printf("\n");
	}

}

void text()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
		{
			printf("�����忪ʼ\n");
			printf("\n");
			game();
			break;
		}
		case 0:
		{
			printf("�˳�\n");
			break;
		}
		default:
		{
			printf("ѡ�����,������ѡ��\n");
		}
		}

	} while (input);
}

int main()
{
	text();
	return 0;
}









