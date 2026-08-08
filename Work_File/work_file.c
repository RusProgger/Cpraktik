#include <stdio.h>

// int putc(int c, FILE* stream);
// int getc(FILE* stream);


int main() {

    const char* filename = "data.txt";
    // Открываем файл
    FILE* files = fopen(filename, "w");

    // проверка

    if(files == NULL)
        printf("Error! while file opening");
    // закрытие файла
    fclose(files);
    return 0;
}