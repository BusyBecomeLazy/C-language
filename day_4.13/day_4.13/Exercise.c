#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//
//	return;
//}

int my_strlen(char str[]) {
	
	char* p = str;
	int count = 0;
	while (*p)
	{
		if (*p) {
			p++;
			count++;
		}

	}
	return count;
}


int main() {

	char str[] = "asdfg";

	int sz = my_strlen(str);
	printf("%d", sz);
	return 0;
}