#include <stdlib.h>
#include <stdio.h>

int main() {

    int sizeNumber; 

    printf("Enter number: ");
    scanf_s("%d", &sizeNumber);

    int* arrs = malloc(sizeNumber * sizeof(int));


    // освобождение памяти
    free(arrs);
    
    // обнуление указателя
    arrs = NULL;
    return 0;
}