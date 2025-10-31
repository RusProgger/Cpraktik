#include <stdio.h>

int main() {

    // символ
    char letter = 'A';

    // вывод символа

    printf("Symbol: %c\n", letter);

    // массив символов
    char letters[] = "B";
    printf("String: %s\n", letters);

    // неизменяемая массив символов

    char* name = "Denis";

    printf("Name user: %s\n", name); // вывод Denis

    char symbol = 'D';

    printf("%c\n", symbol); // вывод D

    // изменим символ

    symbol = 'F';

    printf("%c\n", symbol);

    // попробудем изменить символ. 

    // name[2] = 'm'; // ошибка попытка изменить литерал строки, приводит к ошибке

    // printf("Name user: %s\n", name);

    return 0;
}