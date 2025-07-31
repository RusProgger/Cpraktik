#include <stdio.h>
#include <locale.h>

void TextmessageHeight() {
    printf("Enter height: ");
}

void TextmessageMass() {
    printf("Enter mass: ");
}

// void MenuExit() {
//     printf("Enter exit: ");
// }


int main() {

    char *locale = setlocale(LC_ALL, "");
    // переменные для массы-тела, и роста

    float height, mass;
    // int exit;

    // Menu 
    // MenuExit();
    // scanf("%d", &exit);
    

    // цикл 
    do {
        // вызов функции рост
        
        TextmessageHeight();

        scanf("%f", &height);

        // вызов функции кг

        TextmessageMass();

        scanf("%f", &mass);

        // результат

        float res_imt = mass / (height * height);
        

        if(res_imt < 18.5) {
            printf("Недостаток веса. Ваш индекс массы: %.3f\n", res_imt);
        }

        else if(res_imt >= 18.5 && res_imt <= 24.9 ) {
            printf("Нормальный вес: %.3f\n", res_imt);
        }

        else if(res_imt >= 25 && res_imt <= 29.9 ) {
            printf("Избыточный вес: %.3f\n", res_imt);
        }

        else if(res_imt >= 30 ) {
            printf("Ожирение: %.3f\n", res_imt);
        }

    } while(true);

    getchar();
    getchar();
    return 0;
}