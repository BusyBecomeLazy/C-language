#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//    int sum = 0;
//    int i = 1; // ��ʼ��������
//
//    // ʹ��whileѭ������1��10�ĺ�
//    while (i <= 10) {
//        sum += i; // �ۼ�ÿ������sum��
//        i++; // ���¼�����
//    }
//
//    // ������
//    printf("1��10�ĺ�Ϊ��%d\n", sum);
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
	printf("��������Ҫ���ҵ�����");
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
			//printf("�ҵ��ˣ��±�Ϊ%d", mid);
			flag = mid;
			break;
		}
	}
	
	if (!flag) {
		printf("�Ҳ�������");

	}
	else
	{
		printf("�ҵ��ˣ��±�Ϊ%d", flag);
	}

	return 0;
}