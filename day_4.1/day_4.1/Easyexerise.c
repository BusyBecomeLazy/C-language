#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//
//	printf("%5d\n", 123456);
//
//	return 0;
//
//}


//int main() {
//
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", a / b, a % b);
//
//
//	return 0;
//
//}


//int main() {
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF) { 
//        printf("%d\n", a + b);
//    }
//    return 0;
//}

//int main() {
//
//	int a = 0;
//
//	scanf("%d", &a);
//	if (a >= 140) {
//		printf("Genius");
//	}
//	else
//	{
//		printf("No Genius");
//	}
//
//	return 0;
//
//}

//int main() {
//
//	int a = 0;
//	int b = 0;
//
//	while (scanf("%d %d", &a, &b) != EOF) {
//		if (a == b) {
//			printf("%d=%d", a, b);
//		}
//		else if (a < b)
//		{
//			printf("%d<%d", a, b);
//		}
//		else
//		{
//			printf("%d>%d", a, b);
//		}
//	}
//
//
//	return 0;
//}

//int main() {
//	int M = 0;
//
//	scanf("%d", &M);
//	if (M % 5 == 0) {
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	
//	return 0;
//
//}

//int main() {
//
//	int a = 0; 
//	int b = 0;
//	while (scanf("%d", &a) != EOF) {
//		for (int i = 0; i < a; i++) {
//			printf("%c",'*');
//			
//		}
//		printf("\n");
//	
//	}
//
//
//	return 0;
//
// 
// }


//=============打印1-100之间所有3的倍数的数字==============

//int main() {
//	
//	int i = 0;
//	for (i = 1; i < 101; i++) {
//		if (i % 3 == 0) {
//			printf("%d ", i);
//		}
//	}
//	
//	return 0;
//
//}


//==============写代码将三个整数数按从大到小输出============

int main() {

	int a = 0;
	int b = 0;
	int c = 0;

	
	while (scanf("%d %d %d",&a,&b,&c) != EOF)
	{

		int input = 0;
		if (a < b) {
			input = a;
			a = b;
			b = input;
		}
		if(a < c)
		{
			input = a;
			a = c;
			c = input;
		}
		if(b < c)
		{
			input = b;
			b = c;
			c = input;
		}
		printf("排序结果为：%d %d %d", a, b, c);
	}
	
	return 0;

}