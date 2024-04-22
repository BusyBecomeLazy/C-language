#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//==================喝汽水问题================

//喝汽水，1瓶汽水1元，
// 2个空瓶可以换一瓶汽水，
// 给20元，可以喝多少汽水

//int main() {
//
//	//假设有x元，能喝y瓶
//	//关系式为y = 2x - 1
//
//	int money = 0;
//	printf("有多少钱：");
//	scanf("%d", &money);
//	int bottle = 0;
//	bottle = (money * 2) - 1;
//	printf("可以喝到%d瓶汽水",bottle);
//
//
//	return 0;
//}


int main() {

	int ret = 5;
	for (int i = 0; i < ret; i++) {
		for (int j = 0; j < ret; j++) {
			if ((j == (ret - 1) / 2) || (i == (ret - 1) / 2)) {
				printf("*");

			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}