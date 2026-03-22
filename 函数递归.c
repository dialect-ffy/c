#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
//函数自己调用自己
//int main()
//{
//	printf("he he");
//	main();
//	return 0;
//}//main函数中调用main函数
//如果递归(递推回归）无限递归  栈溢出 Stack overflow  // 每一次函数调用都要为这次函数调用在内存栈区上分配空间(这个空间称为运行时
// 堆栈或函数帧栈 ），若无限递归调用函数，会把栈区空间填满--栈溢出
//break  -- 循环或switch
//1.要有限制条件2.每次递归调用后越来越接近这个限制条件

//求n的阶乘  n! = n*(n-1)!   0! = 1
//Fact(int n)
//{
//	if (n == 0)
//		return 1;
//	else if (n > 0)
//		return n * Fact(n - 1);  //思考阶乘的和*****************************************
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fact(n);
//	printf("%d\n", r);
//
//	return 0;
//}

//输入一个整数M按照顺序打印每一位
//1234
//1234%10 = 4
//1234/10 = 123
//123%10 = 3   ........递归
//F(int n)
//{
//	while (1)
//	{
//		if (n > 0)
//		{
//		int a = n % 10;			
//		printf("%d ", a);
//			n = n / 10;
//		}
//		else
//		{
//			break;
//
//		}
//	}
//
//}
//int main()          //如何排序
//{
//	int n = 0;
//	scanf("%d", &n);
//	F(n);
//
//	return 0;
//}
//
//


//递归
//print(1234)  =  print(123) 4  ......
//void Print(int n)
//{
//	if (n > 9)
//		Print(n / 10);
//	printf("%d ", n%10);    // 很巧妙 把最后一位直接放到了最后一位
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}
//运用递归的形式打印一个数的每一位
//void print(int n)
//{
//	if (n > 9)
//		print(n/10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//
//int Fact(int n) 
//{
//	int r = 1;
//	int i = 0;
//	for ( i= 1; i <= n; i++)
//	{
//		
//		r *= i;
//	}
//	printf("%d", r);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Fact(n);
//	return 0;
//
//}
//int Fact(int n)
//{
//	if (n == 0)
//		return 1;
//	else 
//		return n * Fact(n - 1);
//}
//int main()
//{
//
//	int n = 0;
//	scanf("%d", &n);
//	int a = Fact(n);
//	printf("%d", a);
//
//}


//斐波那契数列   不适合递归
//  1 1 2 3 5 8 13 21 34 55
//如果要求第n个斐波那契数列
//n<= 2   1
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n == 1 || n == 2)
//		return 1;
//	else if (n > 2)
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fib(n);
//	
//	printf("%d\n", r);
//	printf("count = %d", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int a = 1;
//	int b = 1;
//	for(i=1;i<=n-2;i++)
//	{
//		int c = a + b;
//		a = b;
//		b = c;
//		
//	}                               
//	int r = b;
//	printf("%d", r);
//	return 0;
//}
// 
// 迭代法计算斐波那契数列
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int a = 1;
//	int b = 1;
//	scanf("%d", &n);
//	for (i = 0; i <n - 2; i++)
//	{
//		int c = a + b;
//		a = b;
//		b = c;
//
//	}
//	int r = b;
//	printf("%d", r);
//	return 0;
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2) 
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;  //为什么没有这一行会全部是2
//
//
//		
//} 
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fib(n);
//	printf("%d", r);
//	return 0;
//}  


//本质是斐波那契问题
//n=1  1种   n = 2   11  2  2种   看最后  在n-2  n-1 处
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fib(n);
//
//	return 0;
//}


//汉诺塔问题 
//     a有n个盘子（从小到大） b  c  
//借助于b 将a上的盘子挪到c上，挪的过程中，一定是上小下大
//先把n-1到b  然后最大的到c   n-2 到a  剩下的最大的到c   
//比特大博哥   汉诺塔问题  函数形式

//test(int n)
//{
//	printf("%d ", n);
//	if (n <= 10000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}
//青蛙跳台阶问题  可以1个 可以2个  问跳到n个台阶有多少个跳法
//int count_n(int n)
//{
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 2;
//	else
//		return count_n(n - 1) + count_n(n - 2);
//
//}
//int main()
//{
//	
//	int n = 0;
//	scanf("%d", &n);
//	int count = count_n(n);
//	printf("%d", count);
//
//	return 0;
//
//}
//非递归版本
//int count_n(int n)
//{
//	int a = 1;
//	int b = 2;
//	int c;
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 2;
//	for (int i = 3; i <= n; i++)
//	{
//		int c = a + b;
//		a = b;
//		b = c;
//	}
//	return b;
//	
//		
//	
//		
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = count_n(n);
//	printf("%d", count);
//	return 0;
//
//}
//每次只能移动一个金盘
//任何时候，大盘都不能放在小盘上面
//求完成的最少的步数
//目前A上共有n个盘子
//A    B    C
//n = 1   1 
//n = 2    3
// n = 3      7
//count_(n)=2*count(n-1)+1
int count_n(int n)
{
	if (n == 1)
		return 1;
	else
		return 2 * count_n(n - 1) + 1;  //count(n) 表示移到A B C的其中任意一个
	
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int count = count_n(n);
	printf("%d", count);
	return 0;

}