#include <stdio.h>

int main() {

    // Многомерный массив 1- строки 2 столбцы

    int arrs[2][2] = {

        {'A', 'B'}, 
        {'C', 'D'}
};

    printf("Element array[0][0] = %c\n", arrs[0][0]);
    printf("Element array[0][1] = %c\n", arrs[0][1]);
    printf("Element array[1][0] = %c\n", arrs[1][0]);
    printf("Element array[1][0] = %c\n", arrs[1][1]);

    return 0;
}