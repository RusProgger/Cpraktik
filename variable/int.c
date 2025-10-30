#include <stdio.h>

// тип int занимает 4 байта

int main() {

    for(int i = 0; i < 50; i++) {
        printf("-");
    }

    int number = 10; 
    printf("\n%d\n", number);

     for(int i = 0; i < 50; i++) {
        printf("-");
    }


    int numberA = 1000;

    printf("\n%d\n\n", numberA);


    // добавить ввод от пользователя с помощью scanf, чтобы программа не просто выводила числа, а принимала их и считала что-то (например, сумму или произведение).

    int numberUser;
    printf("Input number: ");

    scanf("%d", &numberUser);

    printf("Number - %d\n", numberUser);

    return 0;
}