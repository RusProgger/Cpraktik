#include <stdio.h>

int main() {

    // file

    char name[100];
    scanf("%99s", name);
    FILE * files;
    files = fopen("file.txt", "w");
    if(files != NULL) {
        fputs(name, files);
        // Закрытие файла

        fclose(files);

        printf("Txt file close.");
    }

   
    return 0;
}