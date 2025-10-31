#include <stdio.h>
#include <limits.h>

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

    printf("Max number int: %d\n", INT_MAX); // для max int

    printf("Min number int: %d\n", INT_MIN); // для min int

    printf("Max number long long int: %lld\n", LLONG_MAX); // для long long max int

    printf("Min number long long int: %lld\n", LLONG_MIN); // для long long min int

    

    return 0;
}