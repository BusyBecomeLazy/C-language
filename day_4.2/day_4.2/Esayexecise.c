#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//	float i = 0.11;
//	int x = 3;
//	int y = 3;
//	switch (i) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}

//int func(int a)
//{
//    int b;
//    switch (a)
//    { 
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//   default: b = 0;
//    }
//    return b;
//}
//
//
//int main() {
//
//    printf("%d",func(1));
//
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//======================��10�����������ֵ=======================

//int main() {
//	
//	int arr[10] = { 5,3,7,9,0,2,1,5,16,4 };
//
//	for (int i = 1; i < (sizeof(arr) / sizeof(arr[0])); i++) {
//		if (arr[0] <= arr[i]) {
//			arr[0] = arr[i];
//		}
//	}
//
//	printf("%d",arr[0]);
//	return 0;
//
//}



//==========����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ


//int main() {
//
//	float arr1[50] = {0};
//	float arr2[50] = {0};
//	float sum = 0;
//	float sum1 = 0;
//	float sum2 = 0;
//	int n1 = 0;
//	int n2 = 0;
//	float i = 0;
//	
//	for (i = 1; i <= 100; i += 2) {
//		arr1[n1] = 1 / i;
//		sum1 += arr1[n1];
//		n1++;
//	}
//	for (i = 2; i <= 100; i += 2) {
//		arr2[n2] = 1 / i;
//		sum2 += arr2[n2];
//		n2++;
//	}
//	
//	sum = sum1 - sum2;
//	printf("%f", sum);
//
//	return 0;
//}

//==============��һ�� 1�� 100 �����������г��ֶ��ٸ�����9======

//int main() {
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i <= 100; i++) {
//
//		if (i % 10 == 9) {
//			//printf("%d ", i);
//			sum++;
//		}
//		if (i / 10 == 9) {
//			//printf("%d ", i);
//			sum++;
//		}
//
//	}
//	printf("1-100����9�ĸ���Ϊ��%d", sum);
//
//	return 0;
//}


//==============��ӡ1000�굽2000��֮�������===============

//int main() {
//	
//	//����ܱ�4���������ܱ�100�����������ܱ�400����
//
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++) {
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n����Ϊ%d", count);
//	
//	return 0;
//
//}


//==============�����������Լ��==============

//int main() {
//	
//	//�ýϴ������Խ�С�������ó��ֵ�����ȥ��������
//	//���ó��ֵ��������ڶ�������ȥ����һ��������˷�����ֱ�����������0Ϊֹ�� 
//	//���Ϊ0�������Ϊ���Լ����
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int input = 0;
//	scanf("%d %d", &a, &b);
//	if (a < b) {
//		input = a;
//		a = b;
//		b = input;
//	}
//	while (a % b != 0)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	
//	
//	return 0;
//
//}

