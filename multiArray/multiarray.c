#include <stdio.h>

int main() {

    // Многомерный массив 1- строки, 2 столбцы

    char arrs[2][2] = {

        {'A', 'B'}, 
        {'C', 'D'}
};

    printf("Element array[0][0] = %c\n", arrs[0][0]);
    printf("Element array[0][1] = %c\n", arrs[0][1]);
    printf("Element array[1][0] = %c\n", arrs[1][0]);
    printf("Element array[1][1] = %c\n", arrs[1][1]);

    // создадим цикл для прохода по массиву
    
    for(int i = 0; i < sizeof(arrs) / sizeof(arrs[0]); i++) {         
        for(int j = 0; j < sizeof(arrs[0]) / sizeof(arrs[0][0]); j++) { 
            printf("%c ", arrs[i][j]);
        }

        printf("\n");
    }   


    // Практика Напиши программу, которая выводит его в виде таблицы:

    int matrix[3][3] = {

        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}

    };

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    printf("----------\n");

    char symbol[2][1] = {
        {'B'},
        {'K'}
    }

    


    getchar();
    return 0;
}