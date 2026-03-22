
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
//  Bug程序漏洞
//debug 调试 消灭bug
//断点使程序在断点处停止执行
//F5 让程序执行到运行逻辑上的下一个断点
//F10逐过程F11逐语句
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	//给数组元素赋值
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;
//		//scanf("%d", &arr[1]);
//	}
//	//打印数组内容
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return  0;
//}
//void test()
//{
//	printf("test\n");
//	int n = 4 + 5;
//	printf("%d\n", n);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//	test();
//	printf("he he");
//	return 0;
//
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int num = 100;
//	char c = 'w';
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	
//	return 0;
//}

//int main()
//{
//	int n = 0;
//
//	
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 4; n++)
//	{
//		
//		
//		ret = ret * n;  //优化		
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	
//	for (i = 0; i <=12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//栈区：局部变量 形式参数
//静态区；全局变量
//栈区上的内存使用习惯，先使用高地址，在使用低地址,             重合
//数组随着下表的增长是由低到高变化的
//release 存在优化
//一定要  学会   调试
//1.编译型错误  
//2.链接型错误：无法解析的外部符号
//3.