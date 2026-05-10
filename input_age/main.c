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
    }



    getchar();
    return 0;
}