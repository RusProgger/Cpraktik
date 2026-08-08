#include <stdio.h>

// int putc(int c, FILE* stream);
// int getc(FILE* stream);


int main() {

    const char* filename = "data.txt";
    // Открываем файл
    FILE* files = fopen(filename, "w");

    // проверка
    if(files) {
        int res = putc('f', files);
        printf("Enter symbol: %c\n", res);
        printf("Enter code: %d\n", res);
        fclose(files);

    } else {
        printf("Error! while file opening");
    }
        
   
    return 0;
}