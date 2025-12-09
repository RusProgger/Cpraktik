#include <windows.h>
#include <stdio.h>

int main() {

    for(int time = 10; time >= 0; time--) {
        printf("\rStart: %2d ", time);
        // очистка буфера 
        fflush(stdout);

        // задержка 1 секунду
        Sleep(1000);
    }

    printf("\nDone....");

    return 0;
}