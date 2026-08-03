#include <stdio.h>
#include <windows.h>

// Используем таблицу символов https://www.industrialnets.ru/files/misc/ascii.pdf


int main() {

    for(int i = 0; i < 30; i++) {
        putchar(176);
        // printf("%c", 176);
        // вывод в 16-ричной системе числения
        //printf("\xb0");
    }

    printf("\r");
    for(int i = 0; i < 30; i++) {
        Sleep(150);
        printf("\xDB");
    }


    printf("\n-------------------------------------\n");
    
    for(;;) {
        Sleep(300);
        printf("\b-");
        Sleep(300);
        printf("\b\\");
        Sleep(300);
        printf("\b|");
        Sleep(300);
        printf("\b/");
    }
    
    return 0;
}