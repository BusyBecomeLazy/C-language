#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//=============�ҵ�===============

//��һ�����������У�ֻ��һ�����ֳ���һ�Σ�
// �������鶼�ǳɶԳ��ֵģ�
// ���ҳ��Ǹ�ֻ����һ�ε����֡����磺
// �������У�1 2 3 4 5 1 2 3 4��
// ֻ��5����һ�Σ��������ֶ�����2�Σ��ҳ�5

//int main() {
//
//	int arr[] = { 1,2,3,4,5,1,2,3,4,5,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	int ret = 0;
//	for (int i = 0; i < sz; i++) {
//		ret ^= arr[i];
//	}
//	printf("%d", ret);
//
//
//	return 0;
//}



//================

//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//
// }


//=================

//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}

//=================

int main()
{
    int arr[] = { 1,2,3,4,5 };
    short* p = (short*)arr;
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        *(p + i) = 0;
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}