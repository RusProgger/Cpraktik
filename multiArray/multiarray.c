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



    getchar();
    return 0;
}