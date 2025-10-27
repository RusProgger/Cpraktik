#include <stdio.h>

/*

    ### 1. Преобразование из `float` в `int`
    Напишите программу, которая принимает число с плавающей точкой (`float`), преобразует его в целое число (`int`), отбрасывая дробную часть, и выводит оба значения.

*/


int main() {

    float number;
    printf("Enter number: ");
    scanf("%f", &number);

    printf("%.2f", number);
    printf("\n%d", (int)number);

    return 0;
}