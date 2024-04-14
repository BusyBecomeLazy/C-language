#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//===================设定关机程序================

//int main() {
//
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//	//提示
//	while (1)
//	{
//		printf("您的电脑将在60秒内关机！！,请输入“我是猪”，以取消关机");
//
//		//接收一个字符
//		scanf("%s", &input);
//
//		//判断字符是否相等
//		if (strcmp(input, "我是猪") == 0) {
//			system("shutdowm -a");
//			printf("知道了！！");
//		}
//		else
//		{
//			break;
//		}
//	}
//	return 0;
//}



//=======================使用函数交换两个变量的内容=================


//此方法错误原因
//这里的x，y为形参
//而a，b为实参
//形参无法改变实参
//所以此处需要取地址
//void Swap(int x, int y) {
//
//	int flag = 0;
//	flag = x;
//	x = y;
//	y = flag;
//
//}

//正确写法
//void Swap(int* x, int* y) {//使用*接收地址
//
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//
//}
//
//
//int main() {
//
//	//此处为实参
//	int a = 0;
//	int b = 0;
//
//	scanf("%d %d", &a, &b);
//	printf("交换前：a = %d,b = %d\n", a, b);
//	Swap(&a, &b);//需要取地址传递
//	printf("交换后：a = %d,b = %d\n", a, b);
//
//
//	return 0;
//}


//===================使用函数判断一个数是不是素数==============

void Prime(int x) {

	/*int arr[] = { 2,3,5,7 };

	for (int i = 0; i <= 3; i++) {

		if (x % arr[i] != 0) {
			continue;
		}
		else 
		{
			printf("%d不为素数", x);
			break;
		}
	}*/

	//遍历小于sum的每一个数
	//默认sum为素数
	//定义flag = 1
	//当遇到模除等于0时将flag变成0，break


	
	/*int i = 0;
	int flag = 1;

	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			flag = 0;
			printf("%d不是素数",x);
			break;
		}
		
	}
	if (flag == 1) {
		printf("%d是素数", x);

	}*/


	//x = m * n
	//若x不为素数，则必然存在一个小于根号x的数能整除它
	//在根号x之前没有任何数能整除它，则x必然为素数
	//所以判断至根号x为止，
	//sqrt（x） 等于 根号x
	//需要调用math.h头文件

	int i = 0;
	int flag = 1;

	for (i = 2; i < sqrt(x); i++) {
		if (x % i == 0) {
			flag = 0;
			printf("%d不是素数", x);
			break;
		}

	}
	if (flag == 1) {
		printf("%d是素数", x);

	}

}

int main() {

	int sum = 0;
	printf("请输入一个数:");
	scanf("%d", &sum);

	Prime(sum);


	return 0;
}