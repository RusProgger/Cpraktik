#include <stdlib.h>
#include <stdio.h>

int main() {

    int sizeNumber; 

    printf("Enter number: ");
    scanf_s("%d", &sizeNumber);

    int* arrs = malloc(sizeNumber * sizeof(int));

    for(int i = 0; i < sizeNumber; i++) {
        printf("Enter number array: %d ", i + 1);
        scanf_s("%d", &arrs[i]);
    }

    for(int j = 0; j < sizeNumber; j++) {
        printf("Array[%d]: %d\n", j + 1, arrs[j]);
    }


    // освобождение памяти
    free(arrs);

    // обнуление указателя
    arrs = NULL;
    return 0;
}