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

//==================����ˮ����================

//����ˮ��1ƿ��ˮ1Ԫ��
// 2����ƿ���Ի�һƿ��ˮ��
// ��20Ԫ�����Ժȶ�����ˮ

//int main() {
//
//	//������xԪ���ܺ�yƿ
//	//��ϵʽΪy = 2x - 1
//
//	int money = 0;
//	printf("�ж���Ǯ��");
//	scanf("%d", &money);
//	int bottle = 0;
//	bottle = (money * 2) - 1;
//	printf("���Ժȵ�%dƿ��ˮ",bottle);
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