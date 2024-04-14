#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//int main()
//{
//    printf("%d\n", strlen("c:\test\121"));
//    return 0;
//}


//int num = 10;
//int main()
//{
//    int num = 1;
//    printf("num = %d\n", num);
//    return 0;
//}

//int main()
//{
//    int a = 7;
//    int b = 2;
//    float c = 2.0f;
//    printf("%d\n", 3);
//    printf("%f\n", a / c);
//
//    return 0;
//}


int main()
{
	int a, b, c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++;
	b += a++ + c;
	printf("a = %d b = %d c = %d\n:", a, b, c);
	return 0;
}