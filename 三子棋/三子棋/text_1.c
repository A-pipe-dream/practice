#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"
void menu()
{
	printf("----------------------\n");
	printf("----1.play 0.exit----\n");
	printf("----------------------\n");
	printf("玩家为 * , 电脑为 #\n");
}

void game()
{
	char ret = 0;
	//定义一个二维数组存放棋盘信息
	char board[ROW][COL] = {0};
	Init_board(board ,ROW ,COL);			//初始化棋盘
	Display_board(board,ROW,COL);			//打印(显示)棋盘
	while (1)
	{
		Player(board,ROW,COL);				//玩家落子
		Display_board(board, ROW, COL);		//显示棋盘
		ret = Is_win(board, ROW, COL);		//判断玩家是否赢
		if (ret != 'C')
		{
			break;
		}
		Computer(board, ROW, COL);			//电脑落子
		Display_board(board, ROW, COL);		//显示棋盘
		ret = Is_win(board, ROW, COL);		//判断电脑是否赢
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
		printf("\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
		printf("\n");
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
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
		printf("请选择:");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
		{
			printf("三子棋开始\n");
			printf("\n");
			game();
			break;
		}
		case 0:
		{
			printf("退出\n");
			break;
		}
		default:
		{
			printf("选择错误,请重新选择\n");
		}
		}

	} while (input);
}

int main()
{
	text();
	return 0;
}









