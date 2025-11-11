#include <stdio.h>

int main() {
   
    int number, number2;

    printf("Number: ");
    scanf("%d", &number);

    printf("Number 2: ");

    scanf("%d", &number2);

    int res = number + number2;

    float f_res = 55.43f;
    float f_d = 32.22f;

    printf("%d\n", res);

    return 0;
}