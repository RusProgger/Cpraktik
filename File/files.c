#include <stdio.h>

int main() {

    // Создаем константу с именем number
    const int number;
    fgets(number, sizeof(number), stdin);

    FILE * f = fopen("fileNumber.txt", "a");

    if(f != NULL) {
        fputs(number, f);

        
    }


    return 0;
}