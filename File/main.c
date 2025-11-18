#include <stdio.h>

int main() {

    // file

    char name[100];

    // scanf("%99s", name);

    fgets(name, sizeof(name), stdin);


    FILE * files = fopen("file.txt", "w");
    
    if(files != NULL) {
        fputs(name, files);
        // Закрытие файла

        fclose(files);

        printf("Txt file close.");
    } else {

        printf("Error.\n");
    }

    
    return 0;
}