#include <stdio.h>
#include <windows.h>

int main() {

    for(int i = 1; i <= 10; i++) {

        printf("\r%d", i);
        fflush(stdout);
        Sleep(1000);
    }

    getchar();
    return 0;
}