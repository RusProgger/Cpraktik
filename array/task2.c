// Задачи вывести первый елемент массива не используя циклы

#include <stdio.h>

int main() {

    // Выведи весь массив

    int arr[] = {5, 10, 15, 20, 25};

    // for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
    //     printf("Array: %d\n", arr[i]);
    // }

    printf("%d\n", arr[0]);
    printf("\nArray end:\n");


    getchar();
    return 0;
}