// Написать программу которая считывает размер стороны квадрата и затем выводит его с помощью звездочек

#include <stdio.h>
#include <windows.h>

int main() {

    int size, i, j;

    printf("Input number: ");
    scanf_s("%d", &size);

    for(i = 0; i < size; i++) {
        // Вложеный цикл 
        for (j = 0; j < size; j++) {
            printf("*");
        }

        printf("\n");
    }

    getchar();
    return 0;
}



