#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <math.h>

//=====================猜数字游戏====================

//void menu() {
//
//	printf("\n====欢迎来到猜数字游戏!====\n");
//	printf("###########################\n");
//	printf("########## 1.Play #########\n");
//	printf("########## 2.Exit #########\n");
//	printf("###########################\n");
//	printf("请输入你的选项：");
//
//}
//
//void game() {
//
//	int ret = 0;
//
//	//创建一个随机数
//	//使用rand（）函数
//	ret = rand() % 100 + 1;
//	//printf("%d", ret);
//
//	int sum = 0;
//	printf("游戏开始！！\n请你输入一个数字：");
//	for (int i = 6; i >= 0; i--)
//	{
//
//
//		scanf("%d", &sum);
//
//		if (sum < ret) {
//			printf("\n数字猜小了！！");
//			if (i != 1) {
//				printf("\n游戏继续，您还剩%d次机会\n请你再输入数字：", i - 1);
//			}
//			else
//			{
//				printf("\n您没有机会了，请重新开始游戏！！");
//
//				break;
//			}
//
//		}
//		else if (sum > ret)
//		{
//			printf("\n数字猜大了！！");
//			if (i != 1) {
//				printf("\n游戏继续，您还剩%d次机会\n请你再输入数字：", i - 1);
//
//			}
//			else
//			{
//				printf("\n您没有机会了，请重新开始游戏！！");
//				break;
//			}
//		}
//		else
//		{
//			printf("恭喜你猜对了！！\n");
//			if (i == 6) {
//				printf("你太厉害一次就猜对了！！\n");
//			}
//
//			break;
//		}
//	}
//
//
//
//
//}
//
//
//int main() {
//
//	//写一个循环，菜单，使得游戏能够玩多次
//	//传入一个数字，使得能够控制游玩与否
//	int i = 0;
//	int count = 0;
//
//	srand(time(NULL));//此代码请查看代码说明文档
//
//	while (1) {
//		if (count == 0) {
//			menu();
//			count++;
//		}
//		else
//		{
//			Sleep(300);
//			printf("\n");
//			system("pause");
//			system("cls");
//			menu();
//		}
//
//		scanf("%d", &i);
//		switch (i) {
//		case 1:
//			//printf("play");
//			//使用函数game()
//			game();
//			break;
//		case 2:
//			printf("感谢您游玩，下次再见！！");
//			exit(0);
//			// goto EXIT;
//		default:
//			printf("输入有误！请重新输入！");
//		}
//
//	}
//
//
//
//
//	return 0;
//}


//int main()
//{
//    int arr[] = { 1,2,(3,4),5 };
//    printf("%d\n", sizeof(arr));
//    return 0;
//}

//int main()
//{
//    char str[] = "hello bit";
//    printf("%d %d\n", sizeof(str), strlen(str));
//    return 0;
//}


//==================三角形判断===================

//int main() {
//
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
//
//        if ((a + b > c) && (a + c > b) && (b + c > a)) {
//            if ((a == b) && (a == c) && (b == c)) {
//                printf("Equilateral triangle!");
//            }
//            else if ((a == b) || (a == c) || (b == c))
//            {
//                printf("Isosceles triangle!");
//            }
//            else
//            {
//                printf("Ordinary triangle!");
//            }
//        }
//        else
//        {
//            printf("Not a triangle!");
//        }
//
//    }
//    return 0;
//}

//int main() {
//
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("|%d * %d = %2d|", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//==================判断素数===============


int Prime(int x) {

	int i = 0;
	int flag = 1;

	for (i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) {
			/*flag = 0;
			printf("%d不是素数", x);
			break;*/
			return 0;
		}

	}
	if (flag == 1) {
		//printf("%d是素数", x);
		return 1;
	}

}

int main() {

	int sum = 0;
	/*printf("请输入一个数:");
	scanf("%d", &sum);*/

	for (int i = 100; i <= 200; i++) {
		sum = Prime(i);
		if (sum == 1) {
			printf("%d ", i);
		}
	}



	return 0;
}