#include <stdio.h>
#include <Windows.h>

int main() {

    for(int i = 1; i <= 5; i++) {
        printf("\r   \r%d", i); //  \r — вернуть курсор в начало строки
        fflush(stdout); // Очистка буфера
        Sleep(1000); // Задержка вывода на 1 секунду
    }

    puts("\nCycle exit...");

    getchar();
    return 0;
}