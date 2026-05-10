#include <stdio.h>

int main() {
    unsigned int age;

    printf("Enter age: ");
    // scanf_s("%u", &age);

    // Проверка на ввод

    if(scanf_s("%u", &age) != 1) {
        printf("Invalid input: not a number.\n");
        return 1;
    }

    if (age <= 14) {
        printf("Child: %u", age);
    } 
    else if (age <= 18) {
        printf("Teenager: %u", age);
    } 
    else if (age <= 45) {
        printf("Young: %u", age);
    } 
    else if (age <= 62) {
        printf("Elderly: %u", age);
    } 
    else if (age <= 100) {
        printf("Old: %u", age);
    } 
    else {
        printf("Invalid age.");
    }

    // console pause
    getchar();

    return 0;
}