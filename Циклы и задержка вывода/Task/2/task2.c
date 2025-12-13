#include <windows.h>
#include <stdio.h>

int main() {

    for(int time = 3; time >= 0; time--) {
        printf("\rStart: %2d ", time);
        // очистка буфера 
        fflush(stdout);

        // задержка 1 секунду
        Sleep(1000);
    }

    // второй цикл 

    int number = 0;
    printf("\nInput number: ");
    scanf_s("%d", &number);

    for(int i = 0; i < number; i++) {
        if(i == 100) {
            break;
        }

        printf("%d\n", i);
    }

    printf("\nDone....");

    return 0;
}