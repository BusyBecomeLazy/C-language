#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//===================二分查找-函数实现================

//int bin_search(int arr[], int left, int right, int key) {
//// arr 是查找的数组
////left 数组的左下标
////right 数组的右下标
////key 要查找的数字
//	int mid = 0;
//	
//	while (left <= right)
//	{
//		mid = left - ((left - right) / 2);
//		if (arr[mid] > key) {
//			right = mid - 1;
//		}
//		if (arr[mid] < key) {
//			left = mid + 1;
//		}
//		if (arr[mid] == key) {
//			return mid;
//		}
//	}
//	if (left > right) {
//		return -1;
//	}
//	
//}
//int main() {
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int index = bin_search(arr, 0, sz - 1, 11);
//
//	printf("%d", index);
//
//	return 0;
//}


//==================乘法表===============

//int main() {
//
//	int sum = 0;
//	while (scanf("%d", &sum) != EOF) {
//		for (int i = 1; i <= sum; i++) {
//				for (int j = 1; j <= i; j++) {
//					printf("%d*%d=%2d ", i, j, i * j);
//				}
//				printf("\n");
//			}
//	}
//	return 0;
//}

//==============函数判断闰年=============

//int Leep_year(int y) {
//
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) {
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main() {
//	
//	int year = 0;
//	while (scanf("%d", &year) != EOF) {
//		if (Leep_year(year) == 1) {
//			printf("%d是闰年\n", year);
//		}
//		else
//		{
//			printf("%d不是闰年\n", year);
//		}
//	}
//	
//	return 0;	
//}


//=============函数判断素数===========

//int is_Prime(int n) {
//
//	for (int i = 2; i <= sqrt(n); i++) {
//		if (n % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main() {
//	int num = 0;
//	//while (scanf("%d", &num) != EOF) {}
//	for (int i = 100; i <= 200; i++) {
//		if (is_Prime(i) == 1) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//==============使用函数实现数组操作===========


//实现print()  打印数组的每个元素
void print(int arr[],int sz) {
	for (int i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//实现reverse()  函数完成数组元素的逆置
void reverse(int arr[],int sz) {

	int left = 0;
	int right = sz -1;

	while (left < right) {
		int tmp = 0;
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}

}

//实现函数init() 初始化数组为全0
void init(int arr[],int sz) {

	//int sz = sizeof(arr) / sizeof(arr[0]);
	//printf("%d\n", sz);
	for (int i = 0; i < sz; i++) {
		//printf("%d ", arr[i]);
		arr[i] = 0;
	}

}

int main() {

	int arr[8] = { 1,2,3,4,5,6,7,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	print(arr,sz);

	reverse(arr,sz);
	print(arr,sz);

	init(arr,sz);
	print(arr,sz);

	return 0;
}