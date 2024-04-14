#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <string.h>

//==================二分查找=================

//int main() {
//
//	int left = 0;
//	int right = 0;
//	int mid = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sum = 0;
//	//输入
//	printf("输入你需要查找的数字：");
//	scanf("%d", &sum);
//
//	//计算数组元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	left = 0;
//	right = sz - 1;
//
//	while (left <= right)
//	{
//		//mid = (left + right) / 2;
//		//为了防止溢出(注：不能写为两数除2）
//		mid = left + (right - left) / 2;
//
//		if (arr[mid] < sum) {
//			left = mid + 1;
//		}
//		else if (arr[mid] > sum) {
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了%d，位置为%d", sum, mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("元素不存在！！");
//	}
//	
//
//	return 0;
//}


//==================字符移动================
//int main() {
//	
//	int i = 0;
//	int left = 0;
//	int right = 0;
//	char arr[] = "welcome to my world!!!!";
//	char Arr[] = "#######################";
//	//字符数组包含\0
//
//	//char arr[] = "wel";
//	//char Arr[] = "###";
//
//	int sz = strlen(arr);//字符数组使用strlen计算个数
//						//如果使用sizeof()会将\0计算进去，则sz - 2;
//	left = 0;
//	right = sz - 1;
//
//	while (left <= right)
//	{
//		
//		printf("%s\n", &Arr);//打印字符串数组不需要遍历
//	
//		Arr[left] = arr[left++];
//		//left++;
//		Arr[right] = arr[right--];
//		//right--;
//		Sleep(500);//Sleep()休眠函数，括号内填入单位为毫秒，需要引用Windows.h头文件
//		system("cls");//system是一个库函数，可以执行系统命令，需要引用stdlib.h头文件
//
//	}
//	if (left != right) 
//		printf("%s\n", &arr);
//		
//
//	
//	return 0;
//
//}



//======================模拟密码登录===================

//编写代码实现用户模拟登录，并且只能登录三次，
//如果密码正确提示登录成功，如果密码错误超过三次，则退出程序

int main() {

	int i = 0;
	char arr[] = "abcdefg";
	char Arr[10] = { 0 };
	int count = 3;
	

	for (i = 0; i <= 3; i++) {
		
		scanf("%s", Arr);
		system("cls");
		//使用strcmp函数比较字符串是否相等，需要引用string头文件
		if (strcmp(Arr, arr) == 0) {
			printf("密码输入正确，登录成功！！\n");
			break;
		}
		else
		{
			if (i != 3) {
				printf("密码错误，您还有%d次机会！！\n", count--);
				
			}
			else {
				printf("抱歉密码错误超过三次，你没有机会了！！！\n");
			}
		}
	
	}


	//printf("%s", Arr);

	
	
	return 0;

}