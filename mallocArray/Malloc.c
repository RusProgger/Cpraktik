#include <stdlib.h>
#include <stdio.h>

int main() {

    long int sizeNumber; 

    printf("Enter number: ");
    scanf_s("%ld", &sizeNumber);

    long long int* arrs = malloc(sizeNumber * sizeof(long long int));

    for(int i = 0; i < sizeNumber; i++) {
        printf("Enter number array: %d ", i + 1);
        scanf_s("%lld", &arrs[i]);
    }

    for(int j = 0; j < sizeNumber; j++) {
        printf("Array[%d]: %lld\n", j + 1, arrs[j]);
    }


    // освобождение памяти
    free(arrs);

    // обнуление указателя
    arrs = NULL;
    return 0;
}