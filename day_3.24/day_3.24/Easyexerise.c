#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//===================�趨�ػ�����================

//int main() {
//
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//	//��ʾ
//	while (1)
//	{
//		printf("���ĵ��Խ���60���ڹػ�����,�����롰����������ȡ���ػ�");
//
//		//����һ���ַ�
//		scanf("%s", &input);
//
//		//�ж��ַ��Ƿ����
//		if (strcmp(input, "������") == 0) {
//			system("shutdowm -a");
//			printf("֪���ˣ���");
//		}
//		else
//		{
//			break;
//		}
//	}
//	return 0;
//}



//=======================ʹ�ú���������������������=================


//�˷�������ԭ��
//�����x��yΪ�β�
//��a��bΪʵ��
//�β��޷��ı�ʵ��
//���Դ˴���Ҫȡ��ַ
//void Swap(int x, int y) {
//
//	int flag = 0;
//	flag = x;
//	x = y;
//	y = flag;
//
//}

//��ȷд��
//void Swap(int* x, int* y) {//ʹ��*���յ�ַ
//
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//
//}
//
//
//int main() {
//
//	//�˴�Ϊʵ��
//	int a = 0;
//	int b = 0;
//
//	scanf("%d %d", &a, &b);
//	printf("����ǰ��a = %d,b = %d\n", a, b);
//	Swap(&a, &b);//��Ҫȡ��ַ����
//	printf("������a = %d,b = %d\n", a, b);
//
//
//	return 0;
//}


//===================ʹ�ú����ж�һ�����ǲ�������==============

void Prime(int x) {

	/*int arr[] = { 2,3,5,7 };

	for (int i = 0; i <= 3; i++) {

		if (x % arr[i] != 0) {
			continue;
		}
		else 
		{
			printf("%d��Ϊ����", x);
			break;
		}
	}*/

	//����С��sum��ÿһ����
	//Ĭ��sumΪ����
	//����flag = 1
	//������ģ������0ʱ��flag���0��break


	
	/*int i = 0;
	int flag = 1;

	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			flag = 0;
			printf("%d��������",x);
			break;
		}
		
	}
	if (flag == 1) {
		printf("%d������", x);

	}*/


	//x = m * n
	//��x��Ϊ���������Ȼ����һ��С�ڸ���x������������
	//�ڸ���x֮ǰû���κ���������������x��ȻΪ����
	//�����ж�������xΪֹ��
	//sqrt��x�� ���� ����x
	//��Ҫ����math.hͷ�ļ�

	int i = 0;
	int flag = 1;

	for (i = 2; i < sqrt(x); i++) {
		if (x % i == 0) {
			flag = 0;
			printf("%d��������", x);
			break;
		}

	}
	if (flag == 1) {
		printf("%d������", x);

	}

}

int main() {

	int sum = 0;
	printf("������һ����:");
	scanf("%d", &sum);

	Prime(sum);


	return 0;
}