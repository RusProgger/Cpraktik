#include <stdio.h>

// Напишите программу которая считывает размер стороны квадрата и затем выводит его с помощью звездочек.

int main() {

    int squareSize;
    printf("Enter size square: ");
    scanf_s("%d", &squareSize);

    for(int i = 0; i < squareSize; i++) {
        for(int j = 0; j < squareSize; j++) {
            printf("*");
        }

        printf("\n");
    }


    // pause
    
    return 0;
}