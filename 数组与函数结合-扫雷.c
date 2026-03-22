#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "game.h"
//1.布置雷
//2.排查雷
//这个地方如果是雷就炸死了
//如果不是雷，就告诉坐标周围有几个雷
//把所有不是雷的位置都找到，剩下的都是雷
//思路：雷的信息使用二维数组来存放  9*9的二维数组
//用2个数组，数出来个数之后  一个存放雷 ，一个放排查出雷的个数
//上下左右各多一列方便排查不用考虑越界  9*9 -- 11*11
//没有排查的位置放*，排查过后的放数字（字符类型）'1'
void menu()
{
	printf("***************************\n");
	printf("*********1.[play]******************\n");
	printf("*********0.[exit]******************\n");
	printf("***************************\n");
}
void game()   //游戏逻辑
{

	char mine[ROWS][COLS] = { 0 };//存放雷
	char show[ROWS][COLS]=  { 0 };//存放排查出的雷的信息
	//初始化棋盘
	InitBoard(mine,ROWS,COLS ,'0');
	InitBoard(show, ROWS, COLS,'*');

	// 打印棋盘
	DisplayBoard(show,ROW,COL);

	DisplayBoard(mine, ROW, COL);

}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
				break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("你输入了错误的数，请重新输入\n");
			break;


		}
		
	} while (input);

}
int main()
{
	test();
	return 0;
}
