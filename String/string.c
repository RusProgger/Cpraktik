#include <stdio.h>
#include <string.h>

int main() {

    char* name = "ALex";
    // name[2] = "M"; // ошибка через указатель нельзя менять значение смволов. 

    char ok[4] = "ok!"; // Все хорошо.
    printf("%s\n", ok);

    // можно менять значение

    ok[1] = 'o';

    printf("%s\n", ok);

    printf("%s\n", name);

    /*
    
    Напиши программу, которая:

    Вводит строку (до 50 символов).

    Выводит её длину с помощью strlen.
    
    */

    char text[51] = "Hello";

    printf("Длина строки: %lu\n", strlen(text));


    // задача 2

    char str[] = "Programming";
    str[10] = 'G';
    printf("%s\n", str);

    getchar(); // задержка
    return 0;
}