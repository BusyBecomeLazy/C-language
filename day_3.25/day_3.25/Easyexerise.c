#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//===================使用函数判断年份是不是闰年=================

//int Leap_year(int i) {
//
//	/*for (i = 1000; i <= 4000; i++) {
//		if (i % 4 == 0) {
//			if (i % 100 != 0) {
//				printf("%d ", i);
//				count++;
//			}
//			
//		}
//		if(i % 400 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		
//	}
//	printf("一共有%d个闰年",count);*/
//
//	//简易写法
////将函数多元化，使得其有多样性
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0)) {
//			return 1;
//			
//		}
//		else
//		{
//			return 0;
//
//		}
//}
//
//
//int main() {
//
//	int year = 0;
//
//	int count = 0;
//	/*printf("输入一个年份");
//	scanf("%d", &year);*/
//	for (year = 1000; year <= 3000; year++) {
//		if (Leap_year(year) == 1) {
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n一共有%d个闰年",count);
//	
//
//	return 0;
//
//}



//==================使用函数实现二分查找==============


int Find(int x, int Arr[],int y) {//数组传参本质上传入的是首元素的地址，Arr[]本质上是一个指针变量

	//int sz = sizeof(Arr) / sizeof(arr[0]);
	//若此步骤在函数内部进行，sizeof只是将数组首元素进行计算
	int left = 0;
	int right = y - 1;
	int mid = 0;
	
	while (left <= right) {
		mid = left + (right - left) / 2;

		if (Arr[mid] > x) {
			right = mid - 1;
		}
		else if (Arr[mid] < x)
		{
			left = mid + 1;
		}
		else {
			return mid;

		}
		
	}
	return -1;
}


int main() {

	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int i = 0;
	int sum = 0;
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);//此步骤不适合放在函数内部，
	printf("请输入你需要查找的数：");
	scanf("%d", &i);



	sum = Find(i, arr,sz);

	if (sum == -1) {
		printf("%d未找到了",i);
	}
	else
	{
		printf("%d找到了，下标位置为%d", i, sum);
	}
	
	return 0;

}
