#include <stdio.h>

// int putc(int c, FILE* stream);
// int getc(FILE* stream);


int main() {

    const char* filename = "data.txt";
    // Открываем файл
    // FILE* files = fopen(filename, "w");

    // // проверка
    // if(files) {
    //     // запись в файл
    //     int res = putc('f', files);
    //     printf("White symbol: %c\n", res);
    //     printf("White code: %d\n", res);
    //     fclose(files);

    // } else {
    //     printf("Error! while file opening");
    // }
        
    // считывание файла но уже в режиме чтения
   FILE* files = fopen(filename, "r");
    if(files) {
        int res = getc(files);
        printf("Read symbol: %c\n", res);
        printf("Read code: %d\n", res);
        fclose(files);
    } else {
         printf("Error read file!!!");
    }
   
    return 0;
}