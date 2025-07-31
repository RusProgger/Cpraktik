#include <stdio.h>

void TextmessageHeight() {
    printf("Enter height: ");
}

void TextmessageMass() {
    printf("Enter mass: ");
}


int main() {

    // переменные для массы-тела, и роста

    float height, mass;

    // вызов функции рост

    TextmessageHeight();

    scanf("%f", &height);

    // вызов функции кг

    TextmessageMass();

    scanf("%f", &mass);

    // результат

    float res_imt = mass / (height * height);

    

    return 0;
}