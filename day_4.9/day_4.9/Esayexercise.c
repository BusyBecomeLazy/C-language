#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//===================����n��==================

int fact(int n) {
	if (n == 0) {
		return 1;

	}
	else if (n > 0)
	{
		return n * fact(n - 1);
	}

}


int main() {

	int n = 0;
	printf("����������Ҫ����׳˵�����");
	scanf("%d", &n);

	int num = fact(n);
	printf("%d��= %d", n, num);

	return 0;
}