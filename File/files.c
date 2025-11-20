#include <stdio.h>

int main() {

    // Создаем константу с именем number
    const int number;
    fgets(number, sizeof(number), stdin);

    FILE * f = fopen("fileNumber.txt", "a");

    if(f != NULL) {
        fputs(number, f);

        // Закрываем файл

        fclose(f);
        printf("File add.");
    } else {
        printf("File is not add.");
    }


    return 0;
}