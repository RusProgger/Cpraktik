#include <stdio.h>

int main() {

    unsigned int age;

    printf("Enter age: ");
    scanf_s("%d", &age);

    // Реализация условий

    if(age > 0 && age <= 14) {
        printf("Child: %d", age);
    } else if(age >= 15 && age <= 18) {
        printf("Teenager: %d", age);
    } else if(age >= 19 && age <= 45) {
        printf("Young: %d", age);
    } else if (age >= 46 && age <= 62) {
        printf("Elderly: %d", age);
    } else if (age >= 63 && age <= 100) {
        printf("Old: %d", age);
    } else {
        printf("There is no such age.");
    }

    getchar();
    return 0;
}