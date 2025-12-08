#include <stdio.h>

int main() {

    char symbols[7] = {'S', 't', 'r', 'i', 'n', 'g', '\0'};

    // массив из чисел 

    int numbers[4];
    
    // Инициализация массива

    numbers[0] = 100;
    numbers[1] = 250;
    numbers[2] = 300;
    numbers[3] = 400;

    // создадим цикл для прохода по массиву

    printf("%s\n", symbols);

    for(int i = 0; i < sizeof(symbols) / sizeof(symbols[0]); i++) {
        printf("%c", symbols[i]);
    }


    
    return 0;
}