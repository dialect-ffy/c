#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//顺序  选择：  if   switch   循环  while
//                         1.  if 语句
// if(表达式）
//语句
//int main()
//{
//	int num = 0;
//	if (num)
//		printf("hehe");
//	return 0;
//
//}
//输入一个整数，判断是否为奇数
//int main()
//{
//	int a;
//
//	scanf("%d", &a);
//	if (a % 2 == 0) 
//		printf("%d 不是奇数\n", a);
//	
//	else 
//		printf("%d 是偶数\n", a);
//	
//		
//
//	return 0;
//
//}
//
//if(表达式)
//语句1
//else
//语句2
// 输入一个年龄，>=18岁就输出：成年，否则就输出：未成年
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a >= 18) {        //  默认情况下只能跟一条语句，所以要加括号
//		printf("成年\n");
//		printf("可以谈恋爱了");
//	}
//	else {
//		printf("未成年\n");
//		printf("未成年禁止谈恋爱");
//	}
//	return 0;
//
//}
//

//嵌套if  
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 0)
//		printf("输入的值是0");
//	else if (num > 0)
//		printf("输入的值是整数");
//	else
//		printf("输入的值是负数");
//
//	
//	return 0;
//
//}
//int main()
//{
//	int age;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("少年");
//	else 
//		if (age <= 44)
//			printf("青年");
//		else 
//			if (age <= 59)
//				printf("中老年");
//			else 
//				if (age <= 89)
//					printf("老年");
//				else 
//					if (age >= 90)
//						printf("老寿星");
//				
//			
//		
//	
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("he he");
//
//		else
//			printf("ha ha");
//	}
//	
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (scanf("%d %d", &a, &b) != EOF) 
//	{
//		if (a == b)
//
//		{
//			printf("hehe");
//			break;
//		}
//	}
//	
//	return 0;
//
//}
//  当一个变量 和 一个常量比较相等，应该怎么写呢？
// 建议将常量放到做百年
//int main()
//{
//	int a = 5;
//	if (5 == a )
//	{
//		printf("he he");
//		return 0;
//
//	}
//}
//int main()
//{
//	int a = 3;
//	int b = 7;
//	int c = 4;
//	//if (a < b < c) //  错误
//	if(a<b && b < c)
//		printf("he he");   // 多个运算符不宜连用
//	return 0;
//
//}   
//int main()
//{
//	int age = 0;
//	while (scanf("%d", &age) != EOF) {
//		if (age >= 18 && age <= 40)
//			printf("青年\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
////	//if (a > 5)
////	//	b = 3;
////	//else
////	//	b = -3;
//	 b = ( a > 5 ?  3 :  -3);
//	 printf("%d\n", b);        (expt1 ? expt2 : expte3)
//	return 0;
//}
//expt1 ? expt2 : expt3
//如果 expt1 为真  exp2计算  为假  expt3 计算  expt是表达式
// 使用条件表达式实现找出2个数中较大值
//int main()
//{
//	int a;
//	int b;
//	int c;
//	scanf("%d %d", &a, &b);
//	 c = (a > b ? a : b);
//	 printf("%d\n", c);
//	 return 0;
//}
//  ! 逻辑取反运算符  && 逻辑与运算符 并且   || 逻辑或运算符 或者
//int main()
//{
//	int flag = 0;
//	scanf("%d", &flag);
//	if (!flag)   //  如果flag为假，进行下面的操作
//	{
//		printf("hehe\n");
//
//	}
//	return 0;
//}
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//		printf("春天");
//	return 0;
//
//
//}
//int main()
//{
//	int month;
//	scanf("%d", &month);
//	if (month == 12 || month == 1 || month == 2)
//		printf("冬季\n");
//	return 0;
//
//}
//输入一个年份，判断是否是闰年
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	if ((year % 100 != 0 && year % 4 == 0) || (year % 100 == 0 && year % 400 == 0)){
//		printf("闰年");
//	}
//
//
//	return 0;
//
//}
//短路
 //  &&   的左边的操作符的结果为0 右边不再进行计算
// ||      假设左边的满足，那么右边的不用再看了
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;  //  如果 i = 0  为假 后面的不用算了 // 1 2 3 3 5
//	i = a++ || ++b || d++;  //    i= 1 为真 或者运算符  右边不用用算了  // 1 2 2 3 4
//	//  若 a  改为 0  //  1 1 3 3 4
//	printf("  i = %d\n a = %d\n b = %d\n c = %d\n d = %d\n", i,a, b, c, d);  // 
//	return 0;
//}
//                    switch语句  分支 特殊的if else 语句 ，判断条件有多个结果的情况
//switch(expression){   
//case value1: statement    // 
//case value2: statement
//default:statement
//}
//输入任意一个整数，计算除3后的余数
//int main()
//{
//	int a = 0;
//	//char ch;
//	scanf("%d", &a);
//	//scanf("%c",&ch);
//	switch (a % 3) {
//	// switch(ch)
//	case 0 :printf("余数为0\n");
//		//case 'a':
//		//break;
//		break;
//	case 1:printf("余数为1\n");
//		break;                               // break决定从哪里出去
//	case 2:printf("余数为2\n");
//		break;
//	default:printf("不存在");               //    switch 后的expression 必须是整形表达式
//		                                    //      case 后的必须是整形常量表达式
//		                                    //  字符类型也归类到整形家族
//
//	}
//	return 0;
//
//}
// 输入一个1-7的数字，打印对应的星期几
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF) {
//		switch (a) {
//		
//
//		case 1:
//
//		case 2:
//
//		case 3:
//
//		case 4:
//
//		case 5:printf("工作日\n");
//			break;
//		case 6:
//
//		case 7:printf("休息日\n");
//			break;
//		default:printf("输入错误\n");
//			break;
//		
//
//		}
//	}
//	return 0;
//
//}
//        分支语句  if   switch  
//         循环语句  while          do while        for 
//int main()
//{
//	int n = 10;
//	
//
//	while(n > 0)
//		printf("he he\n");
//	return 0;
//
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10) {
//		printf("%d\n",i);
//		i++;
//	}
//
//	return 0;
//
//}
//输入一个正整数，逆序打印这个正整数的每一位
//int main()
//{
//	int a = 0;
//
//	scanf("%d", &a);
//	while (a > 0) {
//		
//		printf("%d ",a%10);
//		a = a / 10;
//	
//	}
//	
//	
//
//	return 0;
//
//}
//for  循环
// for (expression1;exe2;exe3)   exe1初始化  exe2判断  exe3调整
//int main()
//{
//	int i = 0;
//	for (i = 1; i<=10; i++)   // 初始化  判断 调整
//	{
//		printf("%d\n", i); // 形式上优于while循环
//	}
//	return 0;
//
//}
//计算1-100 之间3 的倍数之和
//int main()
//{
//	int i = 0;
//	int c = 0;
//	for (i = 3; i <= 100; i+=3)
//	{
//		
//			c = c + i; // c += i;
//			
//			}
//	printf("%d\n", c);
//	return 0;
//
//}

//  do while 循环
//do
//语句
//while(exe);  //上来就执行语句
//do while 的循环体至少执行一次
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//		return 0;
//}
//
//计算一个正整数，计算他是几位数
//int main()
//{
//	int num = 0;
//	int i = 0;
//	scanf("%d", &num);
//
//	do {
//		i++;
//		num = num / 10;
//	}
//	while ( num );
//	printf("%d\n", i);
//	return 0;
//
//}
//
// 

//  break和continue语句   continue  跳过continue后面的代码  包括a++所以有几率陷入死循环
//int main()
//{
//	int a = 0;
//	while (a <= 9) 
//	{
//		a++;
//		
//		if (a == 5)
//			continue;       
//		printf("%d ", a);
//	
//		
//	}
//	return 0;
//
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++) {
//		if (i == 5)
//			continue;   
//		printf("%d ", i);
//	}
//	return 0;
//
//}
//int main()
//{
//	int i = 1;
//	do {
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//}
//找出  100-200 间的素数
// 1. 产生100-200的数字  2.判断每一个数字是否是素数3.若是即打印


		
		                               // 判断i是否为素数只能被1和他本身整除用2 - i-1  的数字去试除i
		                            // 如果用任何一个数字可以整除  不是   
									// sqrt 是一个库文件
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d \n ", i);
//			count += 1;
//		}                                    // 2 -- 开平方i  //对称
//
//
//	}
//	printf("%d", count);
//	return 0;
//}
//
                  //   goto语句
//int main()
//{
//again:
//	printf("he he\n");
//	goto again;
//	return 0;
//}               // 跳到某个地方 多层循环  goto很好跳出
//关机程序
//1.程序运行起来的时候，就开始倒计时60秒关机
//2.如果你输入我是猪，就取消关机
//关机命令shutdown
//-s  关机
//-t  设置时间关机 秒
// shutdown -s -s 60  //倒计时60秒关机  shutdown -a 取消关机
//system -- 库函数，可以执行系统命令
//stdlib.h
#include <stdlib.h>
#include <string.h>
//两个字符串比较相等时候，不能使用==
//应该使用strcmp
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 120");   strcmp("",input)
//again:
//	printf("请注意，你的电脑将在2分钟内关机，如果输入：邬仁赐真nb，就取消关机\n");
//	scanf("%s", input);  // 输入的信息放在input数组中
//	//判断input中的内容
//	if (strcmp("邬仁赐真nb", input) == 0)
//	{
//		system("shutdown -a");
//
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//
//}


#include <time.h>

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 120");
//	while (1)
//	{
//
//		printf("你的电脑将在120s后关机，如果输入：你真牛，就不会关机");
//		scanf("%s", input);
//		if (strcmp("你真牛", input) == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//
//}
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 120");
//	while (1)
//	{
//		printf("你的电脑将在2分钟内关机，如果输入：范方岩nb就取消关机");
//		scanf("%s", input);
//		if (strcmp("范方岩nb", input) == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//
//
//	}
//	return 0;
//
//}

//1.生成随机数
//2.猜数
//int main()
//{
//	//设置随机数的生成起点
//	srand((unsigned int)time(NULL)); //传入变化函数即可  比如time  // srand需要unsigned int 类型
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d\n", rand()%101+100);  // 生成a-b的随机数  a+rand()%(b-a+1)  //a%b  --> 0 -- b-1    
//	}
//	
//	return 0;
//}
// void 表示函数不返回函数值
//void   menu()
//{
//	//打印菜单
//	printf("******************\n");
//	printf("****** 1.play ***********\n");
//	printf("******* 0.exit ***********\n");
//	printf("******************\n");
//
// }
//void game()
//{//游戏逻辑
//	//1.生成随机数
//	int r = rand() % 100;
//	//2.猜数字
//	int guess = 0;
// int count = 5;
//	while (count)
//	{
//		printf("还有%d次机会", count);
// 
//		printf("请猜数字");
//		scanf("%d",&guess);
//		if (guess > r)
//		{
//			printf("猜大了\n");
//		}
//		else if(guess < r)
//		{
//			printf("猜小了\n");
//
//		}
//		else
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//		count--;
//	}
//	if (count == 0);
//	{
//		printf("用完了所有机会，猜数字失败,正确的数是%d",r);
//	}
//
//
//}
//int main()
//{
//	int input = 0;
//	//设置随机数的生成起点
//	//整个工程只用一次就够了
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		
//		//选择
//		
//		printf("请选择");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			//玩游戏的逻辑
//			game();
//			printf("猜数字");
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("你不小心输入错啦,重新选一下");
//			break;
//		}
//
//
//	} while (input);
//	return 0;
//
//}
//
////
