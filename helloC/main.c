//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main() {
	int a;
	char name = 'x';
	printf("Exit programms = '0'\n");
	//scanf("%d", &a); // небозопасный вариант
	do {
		printf("\nEnter number: ");
		scanf_s("%d", &a); // более безопасный вариант рекомендуется

		if (a == 0) {
			printf("Exit...");
			break;
			
		}
		else if (a >= 1 || a < 0) {
			printf("Number %d ", a);
		}
		else {
			printf("Not a number ");
		}
		/*printf("number = %d", a);*/
	} while (a != 0);
	

	return 0;
}