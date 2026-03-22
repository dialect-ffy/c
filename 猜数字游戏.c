//先生成一个菜单  
//然后是生成随机数，//再写随机数的game
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void menu()
{
	printf("***************************\n");
	printf("*******1.开始游戏*******************\n");
	printf("*******0.退出游戏*******************\n");
	printf("***************************\n");
	printf("***************************\n");
}
void game()
{
	int r = rand() % 100;
	int guess = 0;
	
	
	while (1)
	{
		printf("请猜数字");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("猜小了\n");

		}
		else if (guess > r)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;

		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));

	int n = 0;
	do {
		menu();
		printf("请选择");
		scanf("%d", &n);
		switch (n)
		{


		case 0:
		{
			printf("退出游戏\n");
			break;
		}
		case 1:
		{
			game();
			printf("猜数字\n");
			break;
		}
		default:
		{
			printf("你选错啦，请重新进行选择\n");
			break;
		}

		}
	}
		while (n);
	return 0;
}
