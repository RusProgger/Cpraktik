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

    // второй цикл 

    int number = 0;

    scanf_s("%d", &number);
    printf("\nDone....");

    return 0;
}