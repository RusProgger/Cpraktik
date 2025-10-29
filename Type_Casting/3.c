#include <stdio.h>

/*

    ### 3. Преобразование из `int` в `char`
    Напишите программу, которая принимает целое число, представляющее ASCII код, и выводит соответствующий символ. Например, ввод: `65` — вывод: `A`.

*/

int main() {
    int numberUser;
    printf("Enter number: ");
    scanf("%d", &numberUser);

    // вывод

    printf("Number: %d\n", numberUser);
    printf("Number code symbol: %c\n", numberUser);

    return 0;
}