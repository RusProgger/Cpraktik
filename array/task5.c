// Замени первый элемент на 100

#include <stdio.h>

int main() {

    int arr[] = {5, 10, 15, 20, 25};

    int count = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < count; i++) {
        printf("Array: %d\n", arr[i]);
    }

    puts("-------------------------------------------\n");

     for(int i = 0; i < count; i++) {
        arr[0] = 100;
    }

    for(int i = 0; i < count; i++) {
        printf("Array update: %d\n", arr[i]);
    }

    getchar();
    return 0;
}