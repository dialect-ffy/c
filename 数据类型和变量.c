#define _CRT_SECURE_NO_WARNINGS 1
//内置 ： 字符 整型 浮点型 布尔类型  自定义： 数组   结构体:struct   枚举:enum  联合体:union
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
//      
//int-整形   short-短整形(short (int))  long--长整形  long long --更长的整形
//浮点型 float --单精度浮点型  double -- 双精度浮点型  long double --更高的浮点型
//布尔类型  表示真/假的变量--布尔值    _Bool   
#include <stdbool.h>
#include <stdio.h>
//int main()
//{
//	bool flag = true;
//	if (flag)
//		printf("hehe\n");
//	return 0;
//}
//   sizeof(类型） 可计算长度   //计算类型长度
//int main()
//{
//	
//	printf("%zd\n", sizeof(char));  
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long ));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof a);
//
//	return 0;
//
//}
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	printf("%zd\n", sizeof(bool));
//	return 0;
//}
//int main()
//{
//	short s = 2;
//	int b = 10;
//	printf("%zd\n", sizeof(s = b + 1));  // sizeof 中如果放的是表达式，表达式不会真实计算
//	printf("s = %d\n", s);
//
//	return 0;
//
//}
                               // signed  unsigned
//signed  表示一个类型带有正负号，包含负值    unsigned  表示0 及正值
//int main()
//{
//    signed int num = 100;
//    num = -200;
//
//
//    unsigned int num = 200;
//    num = 300;
//    return 0;
//
//}
//  char     signed char   unsigned char
// char -- char 到底有无符号取决于编译的实现，大部分编译器上  == signed char
// int 是有符号还是无符号呢
//c语言，默认  int == signed int   同理 整型中short long 同样
//对于有符号整数使用d  无符号整数使用u
//int main()
//{
//    int num = -100;
//    printf("%d\n", num);
//    return 0;
//
//}
//  everything  可查数据取值   limits.h    float.h 






//                                                                  变量
//把类型看作模具，用来创作变量    创建规则  data_type(变量类型）    name （变量名）  变量在创建的时候给一个值叫初始化

// int num = 100  全局变量
//int main()
//{   
//     局部变量
//    unsigned int age = 10; // 初始化   //%u unsigner
//    age = 20; //赋值
//    char ch = 'q';
    //float score = 3.14f;  //后缀
//    double weight = 4.5;
//    bool flag = true ;
//    printf("%u\n", age);
//     
//    return 0;
//}
  // 变量分类    全局   局部    使用范围不同
//int main()
//{
//    {
//        int num = 10;
//        printf("%d\n", num
//       
//    }
//    printf("%d\n", num); //error
//    return 0;
//}
//int m = 10000;
//
//int main()
//{
//     int m = 100;
//    printf("%d\n", m); // 当局部变量 和全局变量 相同  局部优先
//    return 0;
//
//}



//  内存  ：  栈区：局部变量   静态区：  全局变量
//算数操作符  + - / * %
//int main()
//{
//    //printf("%d\n", 33 + 42);
//    int a = 10;
//    int b = 21;
//    printf("%d\n", 9/3);  //3
//    printf("%d\n", 10/4);  // 2
//    printf("%f\n", 10 / 4.0);  // 只要有一个数是小数，执行的就是小数除法
//
//    return 0;
//
//}
//int main()
//{
//    int score = 5;
//    score = (score / 20) * 100;//  // 商0
//    //score = (score / 20.0) * 100;
//
//    printf("%d\n", score);
//    return 0;
//
//}
// % 求余  只可用于整数
//int main()
//{
//    printf("%d\n", 10 % 3);   // 10/3=3 ......1
//    //int n = 0;
//    //if(8%2 == 0)
//    printf("%d\n", 11 % -5);
//    printf("%d\n", -11 % 5);
//    return 0;
//
//}
// 负数求余的单位来源于第一个数
//int main()
//{
//    int a = 0; // 初始化
//    //a = 10  // 赋值   =   是赋值操作符
//    int b = 3;
//    int c = 5;
//    b = a + 3;
//    c = b;
//        return 0;
//
//    
//}
//int main()
//{
//    int a = 0;
//    a = a + 10;
//    a += 10;
//    a -= 3; // 复合赋值
//    printf("%d\n", a);
//        
//    return 0;
//
//}
//  单目操作符  ++  --  
//int main()
//{
//    int a = 5;
//    //a = a + 1;
//    //int b = ++a;   //   ---------出现a++ 或 ++a  都会让a变化
//    //前置++  口诀 先++后使用  a = a+1  b = a
//    int b = a++  +  3;
//    // 先使用再相加
//    printf("a = %d\n", a);
//    printf("b = %d\n", b);    // 两种方法的b 是不同的   换成--相同
//
//    return 0;
//}
//int main()
//{
//    int a = 5;
//    int b = a--;
//    printf("a = %d\n", a);
//    printf("b = %d\n", b);
//    return 0;
//
//}
//int main()
//{
//    int a = -10;
//    printf("%d\n", +10);
//    printf("%d\n", -a);
//    printf("%d\n", 10);
//    return 0;
//
//}
//int main()
//{
//    int a = (int)3.14;  // 只留下整数部分
//    //int b = int(3.14)  error  error  error   （int）  -----强制
//    printf("%d\n", a);
//    return 0;
//
//}


//                                               scanf 和 printf 介绍
//      printf  print  format  
#include<stdio.h>
//int main()
//{
//    //printf("hello world\n");
//    //printf("abc\ndf");
//    printf("%d\n", 100); //  printf 里可以放占位符
//    printf("%dabcd\n", 100);   //%d 即为占位符  %是占位符的第一个，必须有
//    return 0;
//
//}
//int main()
//{
//    //printf("%s  will  come  tonight\n", "li si");
//    //printf("%s says it is %d o'clock", "lisi", 10);  //  可以放多个参数
//    return 0;
//
//}
//int main()
//{
//    printf("%c\n", 'A');
//    printf("%e\n", 10.1 * 10);  //转化成科学计数法
//    printf("%x\n", '15');// 16进制      0  1 2 3 4 5 6 7 8 9 a b c d e f  3135  对应1和5的ascll码值
//    printf("%x\n", 15);//------f
//    return 0;
//
//}
 //输出格式
//int main()
//{
//    printf("%d\n", 123);
//    printf("%5d\n", 123);  // %5d  最少输出5位   %-5d 左对齐  %5d右对齐
//    printf("%5d\n", 123456);
    //printf("%12lf\n", 123.45);  //  %f   //不带点宽度
//                              // %lf   在打印的时候默认小数点后六位
//    return 0;
//
//}
//int main()
//{
//    printf("%d\n", 120);
//    printf("%d\n", -120);
//    printf("%+d\n", 120);
//    printf("%+d\n", -120);
//    printf("%.2lf\n", 123.45);  //带点 保留位数
//    printf("%12.1lf\n", 123.45);   //先定义宽度 再定义保留位数
//    printf("%*.*lf\n", 12, 1, 123.45);
//    return 0;
//
//}
//   //     输出部分字符串
//int main()
//{
//    printf("%s\n", "abcdef");
//    printf("%.3s\n", "abcdef");
//    return 0;
//}

//int main()
//{
//    int score = 0;
//    printf("请输入成绩：");
//    scanf("%d", &score);
//    // 输入操作
//    //scanf函数中占位符的后边的参数需要的是地址
//    //&取地址操作符
//    printf("成绩是:%d\n", score);
//    return 0;
//
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    float f1 = 0.0;
//    float f2 = 0.0;
//    scanf("%d %d %f %f", &a, &b, &f1, &f2);
//    printf("%d %d %f %f\n", a, b, f1, f2);
//
//    return 0;
//
//
//}
//
// 
//int main()
//{
//    int x;
//    float y;
//    scanf("%d %f", &x, &y);
//    printf("%d %f", x, y);
//
//       
//
//    
//    return 0;
//
//}
//int main()
//{
//    int x;
//    float y;
//    //scanf("%d", &x);
//    //printf("%d\n", x);
//    //scanf("%f", &y);
//    //printf("%f\n", y);
//    scanf("%d %f", &x, &y);
//    printf("%d %f\n", x, y);   //用户输入    -13.45e12# 0    // .45e12  ==  0.45*10**12  //读到不合法的就停止
//    return 0;
//
//
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d %d\n", a, b);
//
//    
//    return 0;
//
//}
//  scanf 的返回值   ，  表示成功读取变量的个数   如果读取个数为0或者匹配失败 那么返回0 如果在读取之前其发生错误或者读取到文件结尾返回EOF（-1

//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    int ret = scanf("%d %d %d %d", &a, &b, &c, &d);
//    printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//    printf("ret = %d\n", ret);
//
//    return 0;
//
//}

//%[]
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    printf("%d\n", num);   
//
//    return 0;
//
//}
//int main()
//{
//    char ch = 0;
//    scanf(" %c", &ch);
//    printf("xxxx%cyyyy\n", ch);   // %c 不会忽略最前面的表格  但是如果在%c前面加空格便可以跳过  //？  ch为什么没引号
//    return 0;   
//
//}
//int main()
//{
//    char arr[20] = { 0 };//数组
//    scanf("%s", arr);//arr 就是地址 不需要取地址了  // 从第一个非空格读到第一个空格，然后剩下的不再读
//    printf("%s\n", arr);
//    return 0;
//
//}
//int main()
//{
//    char arr[5] = { 0 };//数组
//    scanf("%4s", arr);  //只读取4个
//    printf("%s\n", arr);
//    return 0;
//
//}    //    不会检测能不能放得下，不靠谱，可能会出问题，所以用%4s 来指定

//int main()
//{
//    int year = 0;
//    int month = 0;
//    int day = 0;
//    scanf("%d-%d-%d", &year, &month, &day);
//    printf("%d %d %d\n", year, month, day);
//    return 0;
//
//}
//int main()
//{
//    int year = 0;
//    int month = 0;
//    int day = 0;
//    scanf("%d%*c%d%*c%d", &year, &month, &day);
//    printf("%d %d %d\n", year, month, day);
//    return 0;
//
//}
//在创建变量的时候，给变量一个初始值是一个好习惯，  int a;  // 局部变量不初始化初始值是随机的  ++a --· a  也是随机的