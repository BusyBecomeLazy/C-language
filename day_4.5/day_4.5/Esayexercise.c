#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//    int sum = 0;
//    int i = 1; // 初始化计数器
//
//    // 使用while循环计算1到10的和
//    while (i <= 10) {
//        sum += i; // 累加每个数到sum中
//        i++; // 更新计数器
//    }
//
//    // 输出结果
//    printf("1到10的和为：%d\n", sum);
//
//    return 0;
//}


//int main() {
//
//	int arr[6] = { 0 };
//
//	for (int i = 0; i < 10; i++) {
//		//printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


int main() {

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	
	int n = 0;
	printf("输入你需要查找的数：");
	scanf("%d", &n);

	
	int left = 0;
	int right = (sizeof(arr) / sizeof(arr[0]))-1;
	int mid = 0;
	int flag = 0;


	while (left <= right)
	{
		mid = left + ((right - left) / 2);

		if (arr[mid] > n) {
			right = mid - 1;
		}
		else if(arr[mid] < n)
		{
			left = mid + 1;
		}
		else //if(arr[mid] == n)
		{
			//printf("找到了，下标为%d", mid);
			flag = mid;
			break;
		}
	}
	
	if (!flag) {
		printf("找不到！！");

	}
	else
	{
		printf("找到了，下标为%d", flag);
	}

	return 0;
}