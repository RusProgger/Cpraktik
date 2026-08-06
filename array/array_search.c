#include <stdio.h>

// Задача 1. Найти число в массиве, Проверить, есть ли число 20. Если есть вывести Found! Иначе Not found!


int main() {

    int arr[] = {5, 10, 15, 20, 25};

    int count = sizeof(arr) / sizeof(arr[0]);

    int index = 0; // для счетчика

    for(int i = 0; i < count; i++) {

        // Проверяем есть ли число 20 в массиве
        if(arr[i] == 20) {
            index = 1;
            break;
        }
    }


    // условие
    if(index) {
        printf("Found!\n");
    } else {
        printf("Not found!");
    }

    return 0;
}