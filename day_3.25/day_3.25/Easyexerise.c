#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//===================ʹ�ú����ж�����ǲ�������=================

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
//	printf("һ����%d������",count);*/
//
//	//����д��
////��������Ԫ����ʹ�����ж�����
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
//	/*printf("����һ�����");
//	scanf("%d", &year);*/
//	for (year = 1000; year <= 3000; year++) {
//		if (Leap_year(year) == 1) {
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\nһ����%d������",count);
//	
//
//	return 0;
//
//}



//==================ʹ�ú���ʵ�ֶ��ֲ���==============


int Find(int x, int Arr[],int y) {//���鴫�α����ϴ��������Ԫ�صĵ�ַ��Arr[]��������һ��ָ�����

	//int sz = sizeof(Arr) / sizeof(arr[0]);
	//���˲����ں����ڲ����У�sizeofֻ�ǽ�������Ԫ�ؽ��м���
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
	sz = sizeof(arr) / sizeof(arr[0]);//�˲��費�ʺϷ��ں����ڲ���
	printf("����������Ҫ���ҵ�����");
	scanf("%d", &i);



	sum = Find(i, arr,sz);

	if (sum == -1) {
		printf("%dδ�ҵ���",i);
	}
	else
	{
		printf("%d�ҵ��ˣ��±�λ��Ϊ%d", i, sum);
	}
	
	return 0;

}
