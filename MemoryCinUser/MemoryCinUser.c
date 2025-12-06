#include <stdlib.h>
#include <stdio.h>

// константа для максимального значения выделения памяти в байтах
#define MAX_SIZE_USER 2500

int main() {

    int userNumber;
    printf("User number memory byte: ");
    scanf_s("%d", &userNumber);
    
    // проверка, если памяти выделено больше
    if(userNumber > MAX_SIZE_USER) {
        printf("Memory error. Too big number.\n");
        return 1;
    } else {
        // если все хорошо выделяем память 
        int* numberUser = malloc(userNumber * sizeof(int));
    }

    return 0;
}