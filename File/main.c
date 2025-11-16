#include <stdio.h>

int main() {

    // file

    char* name = "Hello, World!!";
    FILE * files;
    files = fopen("file.txt", "w");
    if(files != NULL) {
        fputs(name, files);
    }

    // Закрытие файла

    fclose(files);


    return 0;
}