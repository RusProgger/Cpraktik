#include <stdio.h>
#include <stdlib.h>

// #define SIZE 5

int main() {

    //int arrs[SIZE] = {1, 5, 2, 66, 15};

    //for(int i = 0; i < SIZE; i++) {
      //  printf("Array[%d] -  %d\n", i + 1, arrs[i]);
    //}

    // Напишите программу в которой пользователь сам вводит кол-сво елементов. Затем выведите массив

    // создадим переменную целочисленного типа

    int size;

    // Справшиваем у пользователя количество. 

    printf("Enter number: ");
    scanf("%d", &size);

    // выделяем память

    int* arrs = malloc(size * sizeof(int));

    for(int i =0; i < size; i++) {
        scanf("%d", &arrs[i]);
    }

    // вывод массива 

    for(int i = 0; i < size; i++) {
        printf("Array[%d] - %d\n", i + 1, arrs[i]);
    }


    free(arrs);
    arrs = NULL; // обнуление указателя


    return 0;
}