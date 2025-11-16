#include <stdio.h>

int main() {

    // file

    FILE * files;
    files = fopen("file.txt", "w");


    // Закрытие файла

    fclose(files);


    return 0;
}