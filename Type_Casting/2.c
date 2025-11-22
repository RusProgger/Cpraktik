#include <stdio.h>

/*

    ### 2. Преобразование из `char` в `int`
    Напишите программу, которая принимает символ, представляющий цифру (например, `'7'`), и преобразует его в целое число. Выведите как символ, так и число.

*/

int main() {

    char symbolUser;
    printf("Enter symbol: ");
    scanf("%c", &symbolUser);

    // вывод

    printf("Symbol: %c\n", symbolUser);
    printf("Symbol code: %d\n", symbolUser);

    getchar();
    return 0;
}