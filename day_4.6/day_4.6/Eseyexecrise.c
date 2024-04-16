#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//
//	int a = 0;
//	scanf("%d", a);
//
//	switch (a)
//	{
//	case 1,2,3,4:
//
//	default:
//		break;
//	}
//
//	return 0;
//}


//================X型图案=============

//int main() {
//	
//	int a = 0;
//
//	while (scanf("%d",&a) != EOF) { 
//		for (int i = 0; i < a; i++) {
//			for (int j = 0; j < a ; j++) {
//				if ((j == i) || (j == a - i - 1)) {
//					printf("*");
//				}
//				else
//					printf(" ");
//				
//			}
//			printf("\n");
//		}
//		
//	}
//	
//	return 0;
//
//}


//=======================空心正方形图案=====================
//int main() {
//    int a;
//    while (scanf("%d",&a) != EOF) { 
//        for (int i = 0; i < a; i++) {
//            for (int j = 0; j < a; j++) {
//                if (i == 0 || j == 0 || i == a - 1 || j == a - 1) {
//                    printf("* ");
//
//                }
//                else
//                {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//===============正序输入，倒序输出=================

//int main() {
//    int a, b;
//
//    while (scanf("%d %d", &a, &b) != EOF) { 
//        int arr[10][10] = { 0 };
//        for (int i = 0; i < a; i++) {
//            for (int j = 0; j < b; j++) {
//                scanf("%d", &arr[i][j]);
//            }
//        }
//        for (int i = 0; i < b; i++)
//        {
//            for (int j = 0; j < a; j++) {
//                printf("%d ", arr[j][i]);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//int main() {
//    int arr[10] = { 0 };
//    for (int i = 9; i >= 0; i--) {
//        scanf("%d", &arr[i]);
//      
//    }
//    for (int i = 0; i < 10; i++) {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}



//int main()
//{
//    int arr[10] = { 0 };
//    for (int i = 9; i >= 0; i--)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//==================有序序列合并================

//int main() {
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF) {
//        int arr1[1000] = { 0 };
//        int arr2[1000] = { 0 };
//        int arr3[1000] = { 0 };
//        for (int i = 0; i < a; i++) {
//            scanf("%d", &arr1[i]);
//
//        }
//        for (int i = 0; i < a; i++) {
//            scanf("%d", &arr2[i]);
//
//        }
//        for (int i = 0; i < a ; i++) {
//            arr3[i] = arr1[i];
//        }
//        for (int i = 0; i < b; i++) {
//            arr3[i + a] = arr2[i];
//        }
//        for (int i = 0; i < a + b - 1; i++) {
//            if (arr3[i] > arr3[i + 1]) {
//                int temp = 0;
//                temp = arr3[i];
//                arr3[i] = arr3[i + 1];
//                arr3[i + 1] = temp;
//            }
//            printf("%d ", arr3[i]);
//        }
//        
//    }
//    return 0;
//}



//int main() {
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF) { 
//        int arr[2000] = { 0 };
//        for (int i = 0; i < a; i++) {
//            scanf("%d", &arr[i]);
//
//        }
//        for (int i = 0; i < a + b; i++) {
//            scanf("%d", &arr[i]);
//
//        }
//
//        for (int i = 0; i < a + b - 1; i++) {
//            for (int j = 0; j < a + b - i - 1; j++) {
//                if (arr[j] > arr[j + 1]) {
//                    int tmp = 0;
//                    tmp = arr[j];
//                    arr[j] = arr[j + 1];
//                    arr[j + 1] = tmp;
//                }
//                
//            }
//        }
//        for (int i = 0; i < a + b; i++) {
//            printf("%d ", arr[i]);
//        }
//    }
//    return 0;
//}

int main() {

	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}


	return 0;
}