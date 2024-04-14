#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>	


//===============printf的转义字符打印=================
//int main() {
//
//	//使用/转义字符
//	printf("printf(\"Hello World!\\n\");\n");
//	printf("cout << \"Hello World!\" << end; \n");
//
//
//	return 0;
//
//}



//==================找最大数=================

//int main() {
//
//	int Max = 0;
//	int arr[4] = { 0 };//定义数组大小
//	//利用数组存放输入的数据
//	int i = 0;
//	
//	for (i = 0; i < 4; i++) {//遍历问题，数组arr[4]，个数为4个，下标为0，1，2，3，
//		                     //所以遍历不应超过3，即i < 4或者i <= 3
//		scanf("%d ", &arr[i]);
//	
//	}	
//
//	Max = arr[0];
//	for (i = 0; i < 4; i++)//同上
//	{
//		if (arr[i + 1] >= Max) 
//		{
//			Max = arr[i];
//		}
//		
//	}
//	//输出
//	printf("最大值为 = %d", Max);
//	
//	
//	//
//
//	return 0;
//}

//int main() {
//    int Max = 0;
//    int arr[10]; // 假设最多输入10个数
//    int num_to_compare = 5; // 假设要比较的数的数量为5
//
//    printf("请输入 %d 个要比较的整数：\n", num_to_compare);
//
//    // 一次性输入所有要比较的数
//    for (int i = 0; i < num_to_compare; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    // 假设数组中的第一个元素为最大值
//    Max = arr[0];
//    // 从第二个元素开始遍历数组，找出最大值
//    for (int i = 1; i < num_to_compare; i++) {
//        if (arr[i] > Max) {
//            Max = arr[i];
//        }
//    }
//
//    printf("最大值为 = %d\n", Max);
//
//    return 0;
//}


//===================计算球的体积================
//int main() {
//	
//	//球的体积公式为V = 4/3*Π*r*r*r,Π = 3.1415926
//	double Π = 3.1415926;
//	double r = 0;
//	double V = 0;
//	//输入球的半径
//	printf("请你输入球的半径 ：");
//	scanf("%lf", &r);
//	//计算
//	V = (4.0 / 3.0 )* Π * r * r * r;
//	printf("球的体积为：%.3lf", V);
//	
//	
//	return 0;
//
//}


//====================计算BMI指数==================

//int	main() {
//	
//	double hight = 0;
//	double weight = 0;
//	double BMI = 0.0;
//
//	//输入身高体重数值
//	printf("输入体重（公斤）身高（厘米）:");
//	scanf("%lf %lf", &weight, &hight);
//
//	//计算BMI = 体重（公斤）/身高*身高（米）
//	BMI = weight / (hight * hight/10000);//此处需要做单位转换！！
//	printf("BMI指数为：%.2lf", BMI);
//
//	return 0;
//}


//=====================n的阶乘=================
// 
// 
// (复杂）
//int main() {
//
//
//	//阶乘公式，例：5！= 5 * 4 * 3 * 2 * 1；
//	// n！= n * (n - 1) * (n - 2) * ...... * 1
//	int n = 0;
//	long long N = 1;
//	int i = 0;
//	int a = 0;
//
//	//输入n的值，n值为需要计算的阶乘数
//	printf("输入需要计算的阶乘数");
//	scanf("%d", &n);
//
//
//	//定义一个数组存放阶数
//	int arr[50] = { 0 };
//	a = n;
//	for (i = 0; i < a; i++) {
//		arr[i] = n;
//		n--;
//	}
//	
//	for (i = 0; i <= a - 2; i++) {
//		//printf("%d,", arr[i]);
//		N = N * arr[i];
//		printf("%lld\n", N);
//	}
//
//
//
//	return 0;
//}


//（简易版）

//	int n = 0;
//	int N = 1;
//
//	//输入需要算的阶乘数传递予n
//	printf("输入你所需要计算的阶乘数：");
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++) {
//		N *= i;//逐次递减
//	}
//	printf("阶乘结果为：%d", N);
//	
//	return 0;



//=====================计算1！+ 2！+ 3！+......+ 10！=====================


//(复杂版）
//int main() {
//
//	int n = 0;
//	int N = 1;
//
//	//输入需要算的阶乘数传递予n
//	printf("输入你所需要计算的阶乘数：");
//	scanf("%d", &n);
//
//	int a = 0;
//	a = n;
//	int b = 0;
//	b = n;
//	int c = 0;
//	c = n;
//	int m = 0;
//	int d = 0;
//	d = n;
//	int Arr_sum[50] = { 0 };
//
//
//	for (int i = 1; i <= n; i++) {
//	Comeon:N *= i;//累乘
//
//		while (i == n) {
//
//			Arr_sum[m] = N;
//			m++;
//
//			n = --a;
//			i = 1;
//			if (n == 0) {
//				break;
//			}
//			else
//			{
//				N = 1;
//				goto Comeon;
//			}
//
//		}
//	}
//
//	int sum = 0;
//	for (int i = 0; i < c; i++) {
//		sum += Arr_sum[i];
//	}
//
//	printf("阶乘结果为：%d", sum);
//
//	return 0;
//}

//（简易版）

int main() {
	int n = 0;
	int N = 1;
	int sum = 0;
	//输入需要算的阶乘数传递予n
	printf("输入你所需要计算的阶乘数：");
	scanf("%d", &n);
	//for (int i = 1; i <= n; i++) {
		for (int i = 1; i <= n; i++) {
			N *= i;//逐次递减
			sum += N;	
		}
		//

	//}
	
	printf("阶乘结果为：%d", sum);
	
	return 0;
}