//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main() {
	int a;
	printf("Hello, world");
	//scanf("%d", &a); // небозопасный вариант
	scanf_s("%d", &a); // более безопасный вариант рекомендуется 
	printf("number = %d", a);

	return 0;
}