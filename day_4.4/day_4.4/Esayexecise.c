#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <math.h>

//=====================��������Ϸ====================

//void menu() {
//
//	printf("\n====��ӭ������������Ϸ!====\n");
//	printf("###########################\n");
//	printf("########## 1.Play #########\n");
//	printf("########## 2.Exit #########\n");
//	printf("###########################\n");
//	printf("���������ѡ�");
//
//}
//
//void game() {
//
//	int ret = 0;
//
//	//����һ�������
//	//ʹ��rand��������
//	ret = rand() % 100 + 1;
//	//printf("%d", ret);
//
//	int sum = 0;
//	printf("��Ϸ��ʼ����\n��������һ�����֣�");
//	for (int i = 6; i >= 0; i--)
//	{
//
//
//		scanf("%d", &sum);
//
//		if (sum < ret) {
//			printf("\n���ֲ�С�ˣ���");
//			if (i != 1) {
//				printf("\n��Ϸ����������ʣ%d�λ���\n�������������֣�", i - 1);
//			}
//			else
//			{
//				printf("\n��û�л����ˣ������¿�ʼ��Ϸ����");
//
//				break;
//			}
//
//		}
//		else if (sum > ret)
//		{
//			printf("\n���ֲ´��ˣ���");
//			if (i != 1) {
//				printf("\n��Ϸ����������ʣ%d�λ���\n�������������֣�", i - 1);
//
//			}
//			else
//			{
//				printf("\n��û�л����ˣ������¿�ʼ��Ϸ����");
//				break;
//			}
//		}
//		else
//		{
//			printf("��ϲ��¶��ˣ���\n");
//			if (i == 6) {
//				printf("��̫����һ�ξͲ¶��ˣ���\n");
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
//	//дһ��ѭ�����˵���ʹ����Ϸ�ܹ�����
//	//����һ�����֣�ʹ���ܹ������������
//	int i = 0;
//	int count = 0;
//
//	srand(time(NULL));//�˴�����鿴����˵���ĵ�
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
//			//ʹ�ú���game()
//			game();
//			break;
//		case 2:
//			printf("��л�����棬�´��ټ�����");
//			exit(0);
//			// goto EXIT;
//		default:
//			printf("�����������������룡");
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


//==================�������ж�===================

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


//==================�ж�����===============


int Prime(int x) {

	int i = 0;
	int flag = 1;

	for (i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) {
			/*flag = 0;
			printf("%d��������", x);
			break;*/
			return 0;
		}

	}
	if (flag == 1) {
		//printf("%d������", x);
		return 1;
	}

}

int main() {

	int sum = 0;
	/*printf("������һ����:");
	scanf("%d", &sum);*/

	for (int i = 100; i <= 200; i++) {
		sum = Prime(i);
		if (sum == 1) {
			printf("%d ", i);
		}
	}



	return 0;
}