#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//要存放数据，我们现在只能创建变量
//int a = 10;
//int a1 = 1;
//int a3 = 10;
//.......
//为了存放多个相同类型的数值，就有了数组  //分为一维 多维数组
//  type   arr_name[常量值];   类型 大小
//int main()
//{
//	////创建
//	//int math[20]; // 20个元素，每个元素的类型是int
//	//char ch[5];
//	//double arr[10];
//	//初始化
//	int math[20] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19}; // 20个元素，每个元素的类型是int
//	int math2[20] = {0,1,2,3};  // 不完全初始化，剩下的元素默认初始化为0
//	char ch[5] = { 'a','b' };
//	char ch1[5] =  "abc";
//	double arr[10];
//	return 0;
//
//}
//
//int main()
//{
//	int a = 10;
//	char ch = 'w';
//	double d = 0.0;
//	int arr[10] = { 0 };
//	//数组有没有类型
//	//数组类型是什么？
//	//数组的元素类型是int
//	//数组类型 -  int [10]
//	return 0;
//}
//  使用一维数组
//数组下标从0开始
//int main()
//{
//	//当对数组进行初始化的时候，数组的大小可以省略，编译器会根据数组的初始化内容自动化计算数组的元素个数
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//              0 1 2 3 4 5 6 7 8 9
//	int i = 0;
//	//for (i = 0;i <= 9; i++)
//	//{
//	//	printf("%d\n", arr[i]);
//	//}
//	//while (i <= 9)
//	//{
//	//	printf("%d ", arr[i]);
//	//	i++;
//	//}
//	//给数组中输入10个值
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//打印数组内容
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//		
//
//	
//	
//	return 0;
//
//}
//一维数组的存储
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//打印这10个元素的地址
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf(" &arr[%d] = %d\n",i , &arr[i]); //取地址操作符- 取出变量在内存中的地址  
//	//	// 一个int类型的值占4个字节
//	//	//数组在内存中连续存放  随着下标的增长，地址是由低到高变化的
//	//}
//	int a = 0;
//	int sz = sizeof(arr) / sizeof(0);          //strlen  对字符串进行的找长度  必须有\0    sizeof  对类型变量 进行计算
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("%zd\n", sizeof(a));   //单位是字节
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(arr));  // 10 * sizeof(int)
//	printf("%d\n", sz);
//	return 0;
//
//}
// 
// 
// 
//二维数组  每个元素是一维数组
//一维数组的每个元素是int类型  二维数组是一维数组的数组
// type arr_name[常量值1][常量值2]；
//int main()
//{
//	int data[3][5] = {1,2,3,4,5,6,7,8}; //不完全初始化
//	int data1[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 2,4,6,8,9 };
//	int data2[3][5] = { {1,2},{3,4},{5,6} };  // 二维数组行可以省略但是列不可以
//	int data[3][5] = { {1,2} };   //  带括号表示哪一行的前两个元素 1，2 ，哪一行剩下的补0   其他行都是0
// //	float score[5][30];
//	return 0;
//}
//二维数组下标的使用  
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 2,4,6,8,9 };
//	printf("%d\n", arr[1][2]);
//	printf("%d\n", arr[2][4]);
//	return 0;
//}
//int main()
//{
//	int arr[3][5] = { 0 };
//	//输入
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			
//
//			
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", arr[i][j]);
//
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//二维数组在内存中的储存
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 4,5,6,7,8, 5 ,6,7,8,9};
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{                                                        
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			//printf(" arr[%d][%d] = %p\n",i,j, &arr[j][i]);
//			printf("%d", arr[j][i]);
//		}
//		printf("\n");
//
//	}
//	return 0;
//}
//二维数组在内存中也是连续存放的
//在c语言的c99标准之下数组在创建的时候，数组大小的指定只能使用常量
//int main()
//{
//	int arr[10];
//	int n = 10;
//	int arr[n];  //err
//
//	return 0;
//
//}
//在c99之后，c语言引入了变长数组的概念，是的数组可以有变量
//  但是vs不支持  
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n]; //  不支持   //程序运行起来的时候才稳定，因此变长数组不能初始化 //先输入大概大小，再输入值，最后printf
//	int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			
//			scanf("%d", &arr[i]);
//				
//	
//		}
//		
//		for (i = 0; i < 3; i++)
//		{
//			printf("%d", arr[i]);
//			
//		}
//		printf("\n");
//	return 0;
//
//}
//练习1 多个字符从两端移动，向中间汇聚
//一开始########################
//最后编程hello bit !!!!!!!!
//
// 
// 
// 
// 
//int main()
//{
//	char arr1[] = "hello bit!!!!!!!!!!!!!!!";
//	char arr2[] = "########################";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//
//
//	return 0;
//}
	                   //二分查找   前提是数据是有序的
//strlen 求字符串长度  字符串或字符数组
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };  // 整形  用sizeof
//	int k = 0;
//	scanf("%d", &k);//输入要查找的数字假设是7  1.找中间元素 2.比较      // 1 2 3 4 5 6 7 8 9
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int flag = 0;
//	while (left<=right)
//	{
//		int mid = left + (right - left)/2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//
//		}
//		else
//		{
//			printf("找到啦，下标是%d\n", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0);
//	{
//		printf("找不到\n");
//	}
//	
//
//	return 0;
//}
//int main()
//{
//	int a = INT_MAX;
//	int b = 2147483646;
//	int avg = b + (a - b) / 2;
//	printf("%d\n", avg);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "hello ,bit !!!!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1);
//	printf("%d", right);
//	return 0;
//}
// 二分查找有序数组中的某个元素
/*int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int k = 0;
	scanf("%d", &k);
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int flag = 0;
	while (left < right)
	{
		int mid = left + (right - left);
		if (arr[mid] < k)
		{
			
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			
			right = mid - 1;
		}
		else
		{
			printf("找到啦，下标是%d\n",mid);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		printf("你输错啦\n");
	}
	return 0;*/
//     一个是求right   //一个是进行left和right 的更改