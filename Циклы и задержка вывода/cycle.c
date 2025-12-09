#include <stdio.h>
#include <Windows.h>

int main() {

    int time = 1;

    for(int i = 1; i <= 5; i++) {
        Sleep(1000);
        printf("%d\n", i);
    }

    puts("cycle exit...");

    getchar();
    return 0;
}