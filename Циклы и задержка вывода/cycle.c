#include <stdio.h>
#include <Windows.h>

int main() {

    for(int i = 1; i <= 5; i++) {
        Sleep(1000);
        printf("%d\n", i);
        fflush(stdout); // Очистка буфера 
    }

    puts("cycle exit...");

    getchar();
    return 0;
}