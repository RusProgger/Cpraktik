#include <stdio.h>

/*

    ### 4. Преобразование из `double` в `float`
    Напишите программу, которая принимает значение типа `double`, преобразует его в `float` и выводит результат с округлением до 2 знаков после запятой.

*/

int main() {

    double number;
    printf("Enter a number (double): ");
    scanf("%lf", &number);

     // Преобразование в float
    float float_number = (float)number;

    // вывод 
    printf("Enter float output:  %.2f", float_number);

    getchar();
    return 0;
}