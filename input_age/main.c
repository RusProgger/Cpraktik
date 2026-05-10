#include <stdio.h>

int main() {

    unsigned int age = 0;

    printf("Enter age: ");
    scanf_s("%d", &age);

    // Реализация условий

    if(age > 0 && age < 18) {
        printf("You are very young. %d", age);
    } else {
        printf("Your age: %d", age);
    }



    getchar();
    return 0;
}