#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//===========ͳ�ƶ�������1�ĸ���==============

//�˷���̫����
//int NumberOf1(unsigned int n) {
//	
//	int count = 0;
//	while (n)
//	{
//		if ((n % 2) == 1) {
//			count++;
//		}
//		n = n / 2;
//
//	}
//	return count;
//}

//int NumberOf1(int n) {
//	int count = 0;
// 
//	for(int i = 0;i < 32;i++){
//		
//		if ((n & 1) == 1) {
//			count++;
//		}
//		n = n >> 1;
//
//	}
//	return count;
//}

//int NumberOf1(int n) {
//
//	int count = 0;
//	while (n) {
//		n = n & (n - 1);
//		count++;
//	}
//
//	return count;
//}
//
//
//int main() {
//
//	int num = 0;
//	while (scanf("%d", &num) != EOF) {
//
//		printf("%d\n", NumberOf1(num));
//
//	}
//
//
//	return 0;
//}



//===========��ӡ���������Ƶ�����λ��ż��λ============

//void funt(int n) {
//
//	int ret1 = 0;
//	int ret2 = 0;
//	printf("ż��λ��");
//
//	for (int i = 16; i > 0; i--) {
//
//		printf("%d ", (n >> (i * 2 - 1)) & 1);
//	}
//	printf("\n");
//	printf("����λ��");
//	for (int i = 16; i > 0; i--) {
//		printf("%d ", (n >> (i * 2 - 2)) & 1);
//	}
//	printf("\n");
//}
//
//
//int main() {
//
//	int num = 0;
//	while (scanf("%d",&num) != EOF)
//	{
//		funt(num);
//	}
//
//	return 0;
//}


//==========���������������в�ͬλ�ĸ���==========

int funt(int n, int m) {

	int ret = 0;
	int count = 0;
	ret = n ^ m;

	while (ret)
	{
		ret &= (ret - 1);
		count++;
	}
	
	return count;
}


int main() {

	int a = 0;
	int b = 0;
	while (scanf("%d %d",&a,&b) != EOF)
	{
		printf("%d\n", funt(a, b));
	}

	return 0;
}