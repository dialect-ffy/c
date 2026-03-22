#define _CRT_SECURE_NO_WARNINGS 1
// 函数 完成某个特定任务的代码 // 库函数   自定义函数

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


//int main()
//{
//	double n = sqrt(16);
//	printf("%lf\n", n);
//	return 0;
//}
// 函数语法形式
// 返回类型
//ret_type   fun_name(形式参数)
//{
//函数体
//}
//写一个加法函数，完成2个整形变量的加法操作。
//1.有2个整形变量
//2.计算
//3输出结果
//函数定义
// int Add(int x, int y)
//{
//	int z = 0;
//	x + y;
//	z = x + y;
//	return z;    // 先放到寄存器，再把值给c
////}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	//int c = a + b;
//	int c = Add(a, b); // 调用函数      // 真实传递给函数的参数叫实际参数 // 在函数定义部分函数名后面的参数为形式参数
//	printf("%d\n", c);   //  形参 实参  都会有自己的空间 形参是实参的临时拷贝
//	return 0; 
//}
//返回类型的地方表示无返回值  参数部分表示无参数
//void print(void)       //          // print()  
//{
//	printf("hello world");
//}
//int main()
//{
//	print();
//	print();
//
//	return 0;
//}
// 
// return  语句

//int test()
//{
//		int a = 0;
//		scanf("%d", &a);
//		if (a > 0)
//			return 1;
//		else
//			return -1;
//
//}
//int main(){
//	int ret = test();
//	printf("%d\n", ret);
//		return 0;
//}
// void test()
//{
//	printf(" hehe\n");
//	if (1)
//		return;
//	printf("haha\n");
//}
//int main()
//{
//	test();
//	return 0;
//}
//错误示范
// 
//int test()   // 如果没有返回类型 默认为int 
////如果函数要求返回值，但是函数中没有使用return返回值，那具体返回什么就不确定了
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a)
//	
//		return 1;
//	  // 为假就没有返回值
//}
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//	return 0;
//}
// void set_arr(int arr[], int sz,int set)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = set;
//	}
//}
// void print_arr(int arr[], int sz)
// {
//	 int i = 0;
//	 for (i = 0; i < sz; i++)
//	 {
//		 printf("%d", arr[i]);
//	 }
//	 printf("\n");
// }
//
//int main()
//{
//	int a = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//0-9
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	//写一个函数将数组的值全部变成 a
//	scanf("%d", &a);
//	print_arr(arr, sz);
//	set_arr(arr, sz,a);
//	print_arr(arr, sz);
//
//	return 0;
//}
// 写一个函数，将数组的值全部变成a
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//void set_arr(int arr[], int sz, int a)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = a;
//	}
//}
//
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int a = 0;
//	scanf("%d", &a);
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[1]);
//	print(arr,sz);
//	set_arr(arr, sz, a);
//	print(arr, sz);
//	
//	return 0;
//}
//数组在传参的时候，实参就写数组名就行，形式也是数组的形式
//实参和形参的函数名可以是一样的
//函数的功能尽量设置的单一
//数组在传参的时候形参的数组和实参的数组是同一个
//void print(int arr[][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	//打印二维数组的内容
//	print(arr, 3, 5);
//
//
//	return 0;
//
//}
//嵌套调用和来链式访问
//某年某月多少天
// 31 28 31 30 31 30 31 31 30 31 30 31
//    29
//int is_leap_year(int y)
//{
//	if(((y%4==0)&&(y%100!=0) || (y%400 ==0)))       
//		return 1;
//	else
//		return 0;
//}  

//bool is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)))
//		return true;
//	else
//		return false;
//}
//
//
//
//int gets_days_of_month(int y, int m)
//
//{
//	int days[] = { 0,31, 28 ,31, 30, 31, 30, 31, 31, 30 ,31 ,30, 31 };
//	int day = days[m];
//	if (is_leap_year(y)  && m == 2)
//	{
//		day++;
//
//	}
//	return day;
//
//
//}
//
//
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d %d", &year, &month);
//	//计算某年某月有多少天
//	int day = gets_days_of_month(year, month);
//	printf("%d\n", day);
//	return 0;
//}
// 
//某年某月有多少天
//bool is_leap(int year)
//{
//	if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0)
//	return true;
//	else
//		return false;
//	
//}
//int get_days(int y, int m)
//{
//	int arr[] = { 0,31, 28 ,31, 30, 31, 30, 31, 31, 30 ,31 ,30, 31 };
//	int day = arr[m];
//	if (is_leap(y) && m == 2)
//	{
//		day++;
//	}
//	return day;
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d %d", &year, &month);
//	int days = get_days(year, month);
//	printf("%d\n", days);
//	return 0;
//
//}
//链式访问
//int main()
//{
//	//int len = strlen("abcdef");
//	printf("%d\n", strlen("abcdef"));  //链式访问
//	return 0;
//}
// 
//printf 返回值是打印的字符个数
//int main()
//{
//	printf("%d", printf("%d ", printf("%d ", 43)));    //43 返回3（有一个空格）  3 返回2（空格）  2
//	//43(打印43返回2）    2（打印2返回1）    1
//	//int r = printf("hehe");
//	//printf("%d\n", r);
//	return 0;
//}

//函数的声明和定义
//先声明后使用
//int is_leap_year(int);  //y 可以省略  函数的声明中形参可以省略
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_leap_year(year))
//	{
//		printf("%d 是闰年\n", year);
//	}
//	else
//	{
//		printf("%d 是平年\n", year);
//	}
//	return 0;
//}
//int is_leap_year(int y)  //y 可以省略  函数的声明中形参可以省略
//{
//	if (((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)))
//		return 1;
//	else
//		return 0;
//}
//#include "add.h"
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//多个模块拆分
//1.团队写作
//2.代码模块化
//3.代码隐藏
//  static    局部变量 全局变量 函数                      extern
//作用域;可用性的代码范围
//生命周期
//extern 声明外部符号
//void test()
//{
//	static int a = 1;   // 编译器在编译代码的时侯就为静态变量分配了地址，而不是i纳入函数再分配
//	a++;                // 生命周期边长 
//	printf("%d\n", a);  
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}
//	return 0;
//
//}
//变量在使用之前也要声明
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//static 修饰函数
//extern int Add(int, int);
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a, b);
//	printf("%d\n", c);
//}