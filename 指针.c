#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>


//1.内存和地址
//  内存好比宿舍楼  地址好比房间号  内存划分为内存单元（大小一个字节），好比一个个宿舍
// bit(二进制的1）            Byte （1字节=8bit)     KB=1024Byte --------
//会对每个字节(内存单元)编号  ---门牌号--地址----指针
//地址总线  数据总线  控制总线
//把内存读到cpu    32根地址线    对应内存的一段
//int main()
//{
//	int a = 20;//变量创建的本质是向内存申请空间
//	//申请4个字节的空间，用来存放20这个数值
//	&a;  //&--取地址操作符  ，拿到变量a的地址    *---解引用操作符
//	printf("%p\n", &a);
//	int*   pa = &a;   //pa是一个变量，这个变量pa是用来存放指针的，叫做指针变量 //
//	//*表示指针变量  int 表示pa指向的变量a的类型是int    因此类型是可以变的 eg: char double 等
//	*pa = 200;  //*解引用操作符  （间接访问操作符）   
//	printf("%d\n", a);
//		return 0;
//}

//           指针变量的大小
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//1.指针变量是用来存放地址的，地址的存放需要多大空间，那么指针变量的大小就是多大
//	//32个地址线  32个bit位  4个字节
//	printf("%zd\n", sizeof(p));   //x86 32位         x64 64位
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%zd\n", sizeof(pc));    //与类型无关
//
//  
//	return 0;
//}

//int main()
//{
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(long*));
//	printf("%zd\n", sizeof(long long*));
//	printf("%zd\n", sizeof(double*));
//	return;
//
//
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;   //对整形变量解引用一次访问4个字节，对char类型一次访问1个字节  ，指针类型的意义在于权限
//	char* pc = &a;
//	//
//	printf("&a = %p\n", &a);
//	printf("&a = %p\n", pa);
//	printf("&a = %p\n", pc);
//
//	printf("&a+1 = %p\n", &a+1);  //跳4个
//	printf("&a+1 = %p\n", pa+1);  // 跳4个
//	printf("&a+1 = %p\n", pc+1);  // 跳1个     指针类型决定向前或向后一步是多大
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };  //如果跳过四个字节，刚好是一个数字
//}

//   void* ---无具体类型的指针
//int main()
//{
//	int a = 10;
//	char ch = 'a';
//	//int* pa = &a;  //int*
//	//char* pc = &a;   //int*
//	void* pv = &a;
//	void* pv1 = &ch;
//	//err   *pv1 = 100;   不确定具体类型，不可解引用操作
//	//err  pv1++  也不行  不确定跳过几个类型
//
//}















//const 修饰指针
//int main()
//{
//	/*const*/   int num = 100;   
//	num = 200;   //err  const限制的变量，叫常变量
//	//这个被修饰的变量本质上还是变量，只是不能被修改
//	printf("%d\n", num);
//	return 0;
//}
//int main()
//{
//	//int arr[10] = { 0 };
//	const int n = 10;  //仍是变量，常变量，依旧会报错
//	// c99 之前不支持变长数组，数组大小需要常量，常量表达式来指定，不能是变量
//	int arr[n];
//	return 0;
//}

//int main()
//{
//
//	int n = 10;
//	int m = 100;
//
//	int  *  p = &n;
//	*p = 20; //ok   const放到*左边，限制*p  不能通过指针变量来修改其所指向的内容，但是指针变量本身是可以改变的
//	p = &m;  //ok  const 放到*右边，限制p    不能改变指针变量本身                但是可以通过指针变量改变其所指向的内容 
//	return 0;                       //关于指针p有3个相关的值 1.p,p里面放着一个地址 2.*p,p只想的那个对象3.&p,表示的是p变量的地址
//
//}
//指针运算
//1.指针加减整数：
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };	
//	int i = 0;    //0 1 2 3 4 5 6 7 8 9
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int*p = &arr[sz - 1];
//	
//	for (i = 0;i < sz; i++)
//	{
//		printf("%d ", *(p-i));             //指针类型决定了指针加一的步长和解引用的权限   2.数组在内存中是连续存在的                   
//	}
//	return 0;
//}
//2.指针减去指针
//指针—指针的绝对值是指针和指针之间元素的个数
//前提是2个指针指向的是同一个空间
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	printf("%d\n", &arr[9] - &arr[0]);  //9 看下标在哪里
//	printf("%d\n", &arr[0] - &arr[9]);
//}
// 
//写一个函数，求字符串的长度
//size_t 是一种无符号整形
//size_t my_strlen(char*p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//
//	}
//	return count;
//}
//size_t my_strlen(char*p)
//{
//	char* start = p;
//	char* end = p;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "abcdef";    //数组名其实是数组首元素的地址即arr[0]   
//	size_t len = my_strlen(arr);  //统计的是字符串中\0之前的字符个数
//	printf("%zd\n", len);
//}
//指针+指针？              日期+-天数   日期—日期    日期+日期  -- 没意义
//指针的关系运算
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};  //地址由低到高
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//	while (p <=&arr[sz-1])  //两个地址比较大小
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//
//}

//6.野指针  不清楚地址
//未初始化
//int main()
//{
//	//一个局部变量不初始化，它的值是随机的
//	//解引用操作符就会形成非法访问
//	int* p;
//	*p = 20;  //p就是野指针,
//	return 0;
//}
//越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = &arr[0];
//	for (i = 0; i <= 10; i++)
//	{
//
//		*p = i;
//		printf("%d ", *p);
//		p++;
//		
//	}
//		return 0;
//}
//int* test()
//{
//	int n = 100;
//	return &n;
//}
////出了函数，内存还回去了，现在*p就是野指针，非法访问
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}

//1.指针初始化  可以赋值NULL//int* p2 = NULL; // 不可以进行访问，即*p无法赋值
//int main()
//{
//	int* p = NULL;
// 
//	if (p != NULL)
//	{
//		*p = 200;
//	}
//	return 0;
//}


//assert 的开关
//#define NDEBUG
//7.assert 断言
//int main()
//{
//	int* p = NULL;
//	assert(p != NULL);  //后面的条件为假则报错
//	
//	return 0;
//}

//8.指针的使用和传址调用
//求字符串长度
//参数s 指向的字符串不期望被修改
//size_t my_strlen(const char*p)
//{
//	char* start = p;
//	char* end = p;
//	assert(p != NULL);
//	while (*end)
//	{
//		end++;
//	}
//	return end -start ;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zd\n", len);
//	return 0;
//}

//传值调用和传址调用
//写一个函数交换两个整型变量的值
//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//
//}
//void Swap2(int *pa , int* pb )
//{
//	int z = 0;
//	z = *pa;  //z = a
//	*pa = *pb;  // a = b
//	*pb = z;  // b = z = a
//	
//}
//int main()
//{
//	int a = 0;
//	int b = 0;                      //  形参是实参的临时拷贝 ,所以 。。。  传地址即可  和主调函数建立真正的联系 ，改值 就传地址	scanf("%d %d", &a, &b);         //a b x y 地址均不同   所以 x y 的互换不会影响到到 a b
//	printf("交换前：%d %d \n", a, b);
//	Swap2(&a, &b);
//	printf("交换后：%d %d \n", a, b);
//	return 0;
//
//
//}








//指针与数组
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];    
//	//其实数组名是数组首元素的地址
//	printf("%p\n", arr);
//printf("%d\n", sizeof(arr));   但是有2个例外    1.sizeof(数组名）表示整个数组，计算整个数组的大小 2，&数组名  表示整个数组，取出的整个数组地址
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("&arr[0] = %p\n", &arr[0]);   //跳4
//	printf("&arr[0]+1 = %p\n", &arr[0]+1);
//	printf("arr+1 = %p\n", arr+1);  //跳4
//	printf("arr = %p\n", arr );
//	printf("&arr = %p\n", &arr); //数组首元素和数组的地址值是一样的
//	printf("&arr+1 = %p\n", &arr+1);   //跳40
//}                                   //指针类型决定指针差异
//使用下标的方式
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//输入
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//输出
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",i[arr]);
//	}
//
//	return 0;
//}
//指针方式
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//	
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d",p+i);
//		scanf("%d",arr+i);
//	}
//	//输出
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p+i));
//		printf("%d", *(arr+i));
//	}
//
//	return 0;
//}
//   *(arr+i) <==> arr[i]  == *(i+arr) = = i[arr]
//数组名是数组首元素的地址，但是有2个例外  1.sizeof(数组名） 2.&数组名
//数组就是数组，是一个连续的空间，可以存放一个或多个数据
//指针变量是一个变量，是可以存放地址的变量
//数组和指针不是一回事，但是可以使用指针来访问数组
//why?
//1.数组连续存放  2.指针的元素可以很方便遍历数组
//一维数组传参的本质
// 数组传参的时候，形参可以写成数组也可以写成指针
// 写成数组是为了让初学者理解
// 即使写成数组的形式，本质上还是指针
//           int*arr
//void test(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d", arr[i]);  //arr[i] == *(arr+i)
//		printf("%d\n", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz1 = %d\n", sz1);
//	test(arr,sz1);//arr是数组名 ，表示数组首元素的地址
//	//数组传参本质传递的是数组首元素的地址
//	//所以形参即使写成数组的形式，本质上也是一个指针变量
//	return 0;
//}
//冒泡排序
//搞清楚何为冒泡排序，两两相邻的比较，不满足顺序就交换，满足就下一对
//9 8 7 6 5 4 3 2 1 0
//8 9 7 6 5 4
//8 7 9  6
// 8 7 6 5 4 3 2 1 0 9  //一套冒泡排序   要9套   n 个 就 n-1套
//第一趟9对  第二趟8对

//void bubble_sort(int* arr, int sz)  //传的是地址 可交换
//{//确定趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//优化
//		int j = 0;
//		for (j = 0; j < sz - i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;  //还不是有序
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				
//			}
//			
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//		
//	}
//}
//void input(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", arr + i);
//	}
//}
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	//输入一些值
//	//进行排序，排成升序,写一个函数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	input(arr, sz);
//	bubble_sort(arr, sz);
//	print(arr, sz);
//		
//	return 0;
//}


//二级指针   用来存放一级指针的地址 仅此而已
//char* int*  一级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;  //pa 一级指针
//	int ** ppa = &pa;  //ppa 二级指针  * 说明ppa是指针变量  int* 表示ppa指向的pa的类型是int*
//	//二级指针是用来存放一级指针变量的地址
//	**ppa = 200;
//	printf("%d ", **ppa);
//		return 0;
//}


//指针数组
//char arr[10];  字符数组   存放字符的数组
//int arr[5];  整形数组   存放整形的数组
//指针数组 - 存放指针的数组，数组的每个元素其实是指针类型
//char* arr[5];   存放字符指针的数组
//int main()
//{
//	int i = 0;
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//int* pa = &a;
//	//int* pb = &b;
//	//int* pc = &c;
//	int* arr[] = { &a,&b,&c };
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}
// 


//指针数组模拟二维数组
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//	int* arr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}









//字符指针变量
//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	*pc = 'b';
//	printf("%c ", *pc);
//
//		
//	return 0;
//}
//int main()
//{
//	char const * p = "abcdef";   //常量字符串 ，不能被修改 即*p = 是错的     把首字符a的地址赋值给p
//	//char arr[] = "abcdef";  数组--可以修改
//	//char* p = arr;
//	printf("%c\n", *p);
//	printf("%s", p);  // 使用%s 打印字符串的时候，只需要提供首字符的地址就行
//	return 0;
//}

//const  char* str3 = "hello bit.";
//const  char* str4 = "hello bit.";  //内容相同的常量字符串（只读数据区）只需要存一个就行了，因为不会被修改.地址相同


//数组指针
//类比
//字符指针 -char* - 指向字符的指针 - 字符指针变量存放字符变量的地址
//数组指针            指向数组的指针  -- 数组指针变量存放数组的地址 &数组名
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int (*p)[10] = &arr;    // 指向长度为10的int数组 //p就是数组指针,p中存放的是数组的地址
//	//int (*) [10]   //类型
//	//int* ptr;
//	//arr  -- int*
//	//&arr[0] -- int*
//	//&arr  -- int(*)[10]
//	return 0;
//}
//int main()
//{
//	char* ch[5];  //指针数组
//	char* (*pc)[5] = &ch;  //指向长度为5指针数组的指针
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	//int(*p)[10] = &arr;	  //取出的是数组的地址
//	//想使用p这个数组指针访问arr数组的内容
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",p[i]);   // p[i] = *(p+i)  ***************************记住
//	}
//	return 0;
//}





//二维数组传参的本质
// 二维数组的数组名就是他第一行的地址
//void print(int arr[3][5], int r, int c)
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
//	
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//	return 0;
//}

//二维数组的数组名 也是 数组首元素的地址，  二位数组可以理解为一维数组的数组，每个元素是一维数组
//那么传过去的是一个数组的地址 ---&arr
//void print(int (*arr)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ",(*(arr+i))[j]);  // *(*(arr+i)+j)   也可  先解引用得到三个数组首元素地址，再进行移动解引用即可
//                                          // 其实arr[i] 是指arr[i][0]的地址
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//	//arr是数组首元素即第一行的地址
//	return 0;
//}

  //不管是一维数组传参还是二维数组传参，形参可以写成数组，也可以写成指针
  // 
  


//函数指针变量
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//int a = 10;
//	//int* pa = &a;   //整型指针变量
//
//	//int arr[5] = { 1,2,3,4,5 };
//	//int(*parr)[5] = &arr;   // 数组指针变量
//	//&函数名和函数名都是函数的地址，没有区别
//	printf("%p\n", &Add);
//	printf("%p\n", Add);  //Add 是函数地址
//
//	int (*pf)(int,int) = &Add;  //pf函数指针变量
//	//int(*)(int,int)  函数指针类型
//	//int ret = (*pf)(4, 5);
//	int ret = pf(4, 5);  //*可以不写  函数的地址就可以调用
//
//	return 0;
//}


//typedef 关键字
//类型重命名
//typedef unsigned int unit;
//int main()
//{
//	unit num2;
//	return 0;
//}
//typedef int* pint_t;
//int main()
//{
//	int* p;
//	pint_t p2;
//	return 0;
//}
//typedef int (*parr_t)[6] ;
//
//int main()
//{
//	int arr[6] = { 0 };
//	int (*p)[6] = &arr; //p是数组指针变量
//	parr_t p2 = &arr;
//
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//typedef int (*pf_t)(int, int);
//int main()
//{
//	int (*pf)(int, int) = Add;
//	pf_t pf2 = Add;
//	return 0;
//}
//typedef void(*pf_t)(int);
//void(*signal(int, void(*)(int)) )(int);
//pf_t signal(int, pf_t);



//指针数组
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x -y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x /y;
//}
//int main()
//{
//	int* arr1[6];  //整形指针数组
//	char* arr2[5];  //函数指针数组
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pf3)(int, int) = Mul; 
//	int (*pf4)(int, int) =Div ;
//
//	//函数指针数组来存放这些函数的地址
//	int(*pf[4])(int, int) = { Add,Sub,Mul,Div };
//	                       // 0    1   2   3
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = pf[i](6, 2);
//		printf("%d ", ret);
//	}
//	return 0;
//
//
//
//}

//6.转移表
// 实现一个计算器
//完成；整数的加法，减法，乘法，除法
//void menu()
//{
//	printf("***************************************\n");
//	printf("***********1.add 2.sub*****************\n");
//	printf("***********3.mul 4.div*****************\n");
//	printf("***********0.exit**********************\n"); 
//	printf("***************************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int ret = 0;
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	
//	
//	do
//	{
//		
//		menu();
//		printf("请输入：\n");
//		
//		scanf("%d", &input);
//		printf("请输入你要计算的数字:");
//		switch (input)
//		{
//		case 1:
//			scanf("%d %d", &x, &y);
//			 ret = Add(x, y);
//			printf("%d\n", ret);
//
//			break;
//		case 2:
//			scanf("%d %d", &x, &y);
//			 ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			scanf("%d %d", &x, &y);
//			 ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			scanf("%d %d", &x, &y);
//			 ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器");
//			break;
//		default:
//			printf("请重新输入");
//			break;
//		}
//
//
//		
//	} 
//	while (input);
//	return 0;
//}




//void menu()
//{
//	printf("***************************************\n");
//	printf("***********1.add 2.sub*****************\n");
//	printf("***********3.mul 4.div*****************\n");
//	printf("***********0.exit**********************\n");
//	printf("***************************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int ret = 0;
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[5])(int, int) = {0, Add,Sub,Mul,Div};
//
//
//	do
//	{
//
//		menu();
//		printf("请选择：\n");
//
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入你要计算的数字:");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器");
//		}
//		else
//		{
//			printf("选择错误，重新选择");
//		}
//		
//
//	} while (input);
//	return 0;
//}













