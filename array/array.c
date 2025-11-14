#include <stdio.h>

int main() {

    char symbols[7] = {'S', 't', 'r', 'i', 'n', 'g', '\0'};

    // массив из чисел 

    int numbers[3];
    
    // Инициализация массива

    numbers[0] = 100;
    numbers[1] = 250;
    numbers[2] = 300;

    // создадим цикл для прохода по массиву

    for(int i = 0; i < 7; i++) {
        printf("%c", symbols[i]);
    }

    return 0;
}