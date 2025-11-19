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


    // задача 2 Змена последнего символа. 

    char str[] = "Programming";
    str[10] = 'G';
    printf("%s\n", str);


    // вывод последнего символа

    char title[] = "Hello";
    // обращаемся к последнему символу 
     printf("%c\n", title[strlen(title) - 1]);
    // вывод
    printf("%s\n", title);


    // добавление символов

    // способ первый использование указателей 

    const char* text1 = "Hello";
    const char* text2 = "World";

    // вывод 

    printf("%s %s\n", text1, text2);

    // способ 2 использование strcat

    char textInfo[40] = "My";
    strcat(textInfo, " name is Alex!");
    printf("%s\n", textInfo);

    // Вывод длинных строк

    char text_user[51];
    


    getchar(); // задержка
    return 0;
}