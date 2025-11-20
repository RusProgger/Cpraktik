#include <stdio.h>

int main() {

    // Создаем переменную с именем number

    char number[256];
    
    fgets(number, sizeof(number), stdin);

    FILE * f = fopen("fileNumber.txt", "a");

    if(f != NULL) {
        fputs(number, f);

        // Закрываем файл

        fclose(f);

        // Выводим сообщение что файл добавлен

        printf("File add.");

    } else {
        // выводим сообщение об ошибке.
        printf("File is not add.");
    }


    return 0;
}