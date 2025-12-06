#include <stdlib.h>
#include <stdio.h>

// константа для максимального значения выделения памяти в байтах
#define MAX_INT_COUNT 2500

int main() {

    int userNumber;
    printf("User number memory byte: ");
    scanf_s("%d", &userNumber);
    
    // проверка, если памяти выделено больше

    if(userNumber > MAX_INT_COUNT / sizeof(int)) {
        printf("Memory error. Too big number.\n");
        return 1;

    } else {
        // если все хорошо выделяем память 
        int* numberUser = malloc(userNumber * sizeof(int));

        // проверка выделилась ли память 

        if(numberUser == NULL) {
            
            printf("Error memory...\n");
            return 1;

        } else {
            printf("Enter number: ");
            scanf_s("%d", numberUser);
            printf("Memory number: %d\n", *numberUser);

            // освобождаем память

            free(numberUser);
        }
    }


    return 0;
}