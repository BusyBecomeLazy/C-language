#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <string.h>

//==================���ֲ���=================

//int main() {
//
//	int left = 0;
//	int right = 0;
//	int mid = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sum = 0;
//	//����
//	printf("��������Ҫ���ҵ����֣�");
//	scanf("%d", &sum);
//
//	//��������Ԫ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	left = 0;
//	right = sz - 1;
//
//	while (left <= right)
//	{
//		//mid = (left + right) / 2;
//		//Ϊ�˷�ֹ���(ע������дΪ������2��
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
//			printf("�ҵ���%d��λ��Ϊ%d", sum, mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("Ԫ�ز����ڣ���");
//	}
//	
//
//	return 0;
//}


//==================�ַ��ƶ�================
//int main() {
//	
//	int i = 0;
//	int left = 0;
//	int right = 0;
//	char arr[] = "welcome to my world!!!!";
//	char Arr[] = "#######################";
//	//�ַ��������\0
//
//	//char arr[] = "wel";
//	//char Arr[] = "###";
//
//	int sz = strlen(arr);//�ַ�����ʹ��strlen�������
//						//���ʹ��sizeof()�Ὣ\0�����ȥ����sz - 2;
//	left = 0;
//	right = sz - 1;
//
//	while (left <= right)
//	{
//		
//		printf("%s\n", &Arr);//��ӡ�ַ������鲻��Ҫ����
//	
//		Arr[left] = arr[left++];
//		//left++;
//		Arr[right] = arr[right--];
//		//right--;
//		Sleep(500);//Sleep()���ߺ��������������뵥λΪ���룬��Ҫ����Windows.hͷ�ļ�
//		system("cls");//system��һ���⺯��������ִ��ϵͳ�����Ҫ����stdlib.hͷ�ļ�
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



//======================ģ�������¼===================

//��д����ʵ���û�ģ���¼������ֻ�ܵ�¼���Σ�
//���������ȷ��ʾ��¼�ɹ������������󳬹����Σ����˳�����

int main() {

	int i = 0;
	char arr[] = "abcdefg";
	char Arr[10] = { 0 };
	int count = 3;
	

	for (i = 0; i <= 3; i++) {
		
		scanf("%s", Arr);
		system("cls");
		//ʹ��strcmp�����Ƚ��ַ����Ƿ���ȣ���Ҫ����stringͷ�ļ�
		if (strcmp(Arr, arr) == 0) {
			printf("����������ȷ����¼�ɹ�����\n");
			break;
		}
		else
		{
			if (i != 3) {
				printf("�������������%d�λ��ᣡ��\n", count--);
				
			}
			else {
				printf("��Ǹ������󳬹����Σ���û�л����ˣ�����\n");
			}
		}
	
	}


	//printf("%s", Arr);

	
	
	return 0;

}