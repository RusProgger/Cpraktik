#include <stdio.h>

int main() {

    int number = 0;
    int symbol;

    printf("Enter number: ");
    scanf_s("%d", &number);

    while ((symbol = getchar()) != '\n' && symbol != EOF);


    // проверка если число меньше 0, то выводим сообщение о ошибке: 

    if(number < 0) {
        printf("Error. Negative number.");
        return 1;
    }

    printf("Number: %#08x\n", number);



    // pause 

    getchar();
    return 0;
}